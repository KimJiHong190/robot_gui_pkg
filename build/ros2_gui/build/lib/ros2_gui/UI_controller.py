import sys
import rclpy
from rclpy.node import Node
from PyQt5.QtWidgets import QApplication, QCheckBox
from PyQt5.QtCore import QTimer
from ..ros2_gui.submodule.UI_window import *
from robot_interfaces.msg import BridgeStringMultiArray, BridgeBoolMultiArray, BridgeFloat32MultiArray, BridgeJointStateWithAccel




"""
                                                     BRIDGE UI DESCRIPTION
                                                     
        [CLASS]                [PAGE/FUNCTION]                                     [TOPIC NAME]                         


        SetupWindow : Setup Page
                        ㄴ Control Switch
                            ㄴ on_robot_activation_clicked              : /ui_setup_is_robot_activation
                            ㄴ on_stop_clicked                          : /ui_setup_is_robot_mode
                            ㄴ on_break_clicked                         : /ui_setup_is_robot_break
                            
                        ㄴ Calibration
                            ㄴ on_total_calibration_clicked             : /ui_setup_is_total_calibration
                            ㄴ on_ascender_calibration_clicked          : /ui_setup_is_ascender_calibration
                            ㄴ on_joint_calibration_clicked             : /ui_setup_is_joint_calibration
                            ㄴ on_wheel_calibration_clicked             : /ui_setup_is_wheel_calibration
                            ㄴ on_turret_calibration_clicked            : /ui_setup_is_turret_calibration
                            
                        ㄴ Motor speed_acc setting
                            ㄴ on_anchor_motor_set_clicked              : /ui_setup_anchor_motor_setting
                            ㄴ on_ascender_motor_set_clicked            : /ui_setup_ascender_motor_setting
                            ㄴ on_joint_motor_set_clicked               : /ui_setup_joint_motor_setting
                            
                        ㄴ Initial Pose
                            ㄴ on_robot_mode_toggled                    : /ui_setup_robot_mode
                            ㄴ on_initial_pose_set_clicked              : /ui_setup_initial_pose

        ManualWindow : Manual Page
                        ㄴ Anchor                                       
                            ㄴ on_anchor_activation_clicked             : /ui_manual_is_anchor_activation
                            ㄴ on_anchor_position_changed               : /ui_manual_is_anchor_position
                            ㄴ on_anchor_fixed_changed                  : /ui_manual_is_anchor_fixed

                        ㄴ Ascender
                            ㄴ on_ascender_activation_clicked           : /ui_manual_is_ascender_activation
                            ㄴ on_ascender_each_changed                 : /ui_manual_is_ascender_each
                            ㄴ on_ascender_remote_changed               : /ui_manual_is_ascender_remote
                            ㄴ on_ascender_remote_vel_clicked           : /ui_manual_ascender_remote_velocity
                            
                        ㄴ Activation Setting
                            ㄴ on_activation_setting_changed            
                                ㄴ get_activation_setting_states        : /ui_manual_is_activation_setting
                            
                        ㄴ Turret
                            ㄴ on_turret_activation_clicked             : /ui_manual_is_turret_activation
                            ㄴ on_turret_dir_clicked                    : /ui_manual_is_turret_dir
                            ㄴ on_turret_set_clicked                    : /ui_manual_turret_velocity_command_each
                            ㄴ on_turret_all_set_clicked                : /ui_manual_turret_velocity_command_all
                            
                        ㄴ Joint
                            ㄴ on_joint_activation_clicked              : /ui_manual_is_joint_activation
                            ㄴ on_leg_position_command_clicked          : /ui_manual_leg_position_command
                            ㄴ on_body_position_command_clicked         : /ui_manual_body_position_command
                            ㄴ on_wheel_direction_command_clicked       : /ui_manual_wheel_direction_command
                            
                        ㄴ Wheel
                            ㄴ on_wheel_activation_clicked              : /ui_manual_is_wheel_activation
                            ㄴ on_wheel_turn_clicked                    : /ui_manual_is_wheel_turn
                            ㄴ on_wheel_each_set_clicked                : /ui_manual_wheel_velocity_command_each
                            ㄴ on_wheel_all_set_clicked                 : /ui_manual_wheel_velocity_command_all


"""










class UIController(Node, MainWindow):

    def __init__(self):
        # ROS2 node initialization
        rclpy.init()
        Node.__init__(self, 'ui_controller')
        MainWindow.__init__(self)

        # ROS2 Publisher Initializations
        self.initialize_publishers()

        # Setup Page Button Signal Connections
        self.setup_signal_connections()

        # Publish default states
        self.publish_default_states_false()

    def initialize_publishers(self):
        """Initializes ROS2 publishers."""
        self.robot_activation_pub = self.create_publisher(BridgeBoolMultiArray, 'ui_setup_is_robot_activation', 10)
        self.robot_mode_pub = self.create_publisher(BridgeBoolMultiArray, 'ui_setup_is_robot_stop', 10)
        self.robot_break_pub = self.create_publisher(BridgeBoolMultiArray, 'ui_setup_is_robot_break', 10)
        self.total_calibration_pub = self.create_publisher(BridgeBoolMultiArray, 'ui_setup_is_total_calibration', 10)
        self.ascender_calibration_pub = self.create_publisher(BridgeBoolMultiArray, 'ui_setup_is_ascender_calibration', 10)
        self.joint_calibration_pub = self.create_publisher(BridgeBoolMultiArray, 'ui_setup_is_joint_calibration', 10)
        self.wheel_calibration_pub = self.create_publisher(BridgeBoolMultiArray, 'ui_setup_is_wheel_calibration', 10)
        self.turret_calibration_pub = self.create_publisher(BridgeBoolMultiArray, 'ui_setup_is_turret_calibration', 10)
        self.anchor_motor_setting_pub = self.create_publisher(BridgeFloat32MultiArray, 'ui_setup_anchor_motor_setting', 10)
        self.ascender_motor_setting_pub = self.create_publisher(BridgeFloat32MultiArray, 'ui_setup_ascender_motor_setting', 10)
        self.joint_motor_setting_pub = self.create_publisher(BridgeFloat32MultiArray, 'ui_setup_joint_motor_setting', 10)
        self.robot_land_stand_mode_pub = self.create_publisher(BridgeBoolMultiArray, 'ui_setup_robot_mode', 10)
        
        self.robot_stable_climb_mode_pub = self.create_publisher(BridgeBoolMultiArray, 'ui_setup_robot_climbing_mode', 10)
        
        self.initial_pose_pub = self.create_publisher(BridgeFloat32MultiArray, 'ui_setup_initial_pose', 10)

        self.motor_read_current_fiter_pub = self.create_publisher(BridgeFloat32MultiArray, 'ui_setup_motor_read_current_filter', 10)

        self.setup_ascender_parameter_pub = self.create_publisher(BridgeFloat32MultiArray, 'ui_setup_ascender_parameter', 10)
        self.setup_ascender_filter_pub = self.create_publisher(BridgeFloat32MultiArray, 'ui_setup_ascender_filter', 10)

        self.anchor_activation_pub = self.create_publisher(BridgeBoolMultiArray, 'ui_manual_is_anchor_activation', 10)
        self.manual_anchor_position_pub = self.create_publisher(BridgeBoolMultiArray, 'ui_manual_is_anchor_position', 10)
        self.manual_anchor_fixed_pub = self.create_publisher(BridgeBoolMultiArray, 'ui_manual_is_anchor_fixed', 10)
        self.manual_ascender_activation_pub = self.create_publisher(BridgeBoolMultiArray, 'ui_manual_is_ascender_activation', 10)
        self.manual_ascender_each_pub = self.create_publisher(BridgeBoolMultiArray, 'ui_manual_is_ascender_each', 10)
        self.manual_ascender_remote_pub = self.create_publisher(BridgeBoolMultiArray, 'ui_manual_is_ascender_remote', 10)
        self.manual_ascender_remote_vel_pub = self.create_publisher(BridgeFloat32MultiArray, 'ui_manual_ascender_remote_velocity', 10)
        self.manual_ascender_remote_theta_pub = self.create_publisher(BridgeFloat32MultiArray, 'ui_manual_ascender_remote_theta', 10)
        self.manual_activation_setting_pub = self.create_publisher(BridgeBoolMultiArray, 'ui_manual_is_activation_setting', 10)
        self.manual_turret_activation_pub = self.create_publisher(BridgeBoolMultiArray, 'ui_manual_is_turret_activation', 10)
        self.manual_turret_dir_pub = self.create_publisher(BridgeBoolMultiArray, 'ui_manual_is_turret_dir', 10)
        self.manual_turret_velocity_command_each_pub = self.create_publisher(BridgeFloat32MultiArray, 'ui_manual_turret_velocity_command_each', 10)
        self.manual_turret_velocity_command_all_pub = self.create_publisher(BridgeFloat32MultiArray, 'ui_manual_turret_velocity_command_all', 10)
        
        self.manual_wheel_activation_pub = self.create_publisher(BridgeBoolMultiArray, 'ui_manual_is_wheel_activation', 10)
        self.manual_wheel_turn_pub = self.create_publisher(BridgeBoolMultiArray, 'ui_manual_is_wheel_turn', 10)
        self.manual_wheel_velocity_command_each_pub = self.create_publisher(BridgeFloat32MultiArray, 'ui_manual_wheel_velocity_command_each', 10)
        self.manual_wheel_velocity_command_all_pub = self.create_publisher(BridgeFloat32MultiArray, 'ui_manual_wheel_velocity_command_all', 10)
        self.manual_joint_activation_pub = self.create_publisher(BridgeBoolMultiArray, 'ui_manual_is_joint_activation', 10)
        self.manual_leg_position_command_pub = self.create_publisher(BridgeFloat32MultiArray, 'ui_manual_leg_position_command', 10)
        self.manual_body_position_command_pub = self.create_publisher(BridgeFloat32MultiArray, 'ui_manual_body_position_command', 10)
        self.manual_wheel_direction_command_pub = self.create_publisher(BridgeFloat32MultiArray, 'ui_manual_wheel_direction_command', 10)
        
        self.auto_robot_tracking_pub = self.create_publisher(BridgeBoolMultiArray, 'ui_auto_robot_tracking', 10)
        self.auto_robot_tracking_velocity_pub = self.create_publisher(BridgeFloat32MultiArray, 'ui_auto_robot_tracking_vel', 10)
        self.auto_robot_tracking_rotate_angle_pub = self.create_publisher(BridgeFloat32MultiArray, 'ui_auto_robot_tracking_rotate_angle', 10)
        self.auto_robot_tracking_front_pub = self.create_publisher(BridgeFloat32MultiArray, 'ui_auto_robot_tracking_front_leg_push_length', 10)
        
        self.auto_robot_wheel_pub = self.create_publisher(BridgeBoolMultiArray, 'ui_auto_robot_tracking_wheel', 10)
        
        self.auto_robot_imu_pub = self.create_publisher(BridgeBoolMultiArray, 'ui_auto_robot_tracking_imu', 10)
        
        self.auto_robot_go_pub = self.create_publisher(BridgeBoolMultiArray, 'ui_auto_robot_tracking_go', 10)
        
        self.auto_turret_rotate_exp_start_pub =  self.create_publisher(BridgeBoolMultiArray, 'ui_auto_turret_rotate_exp_start', 10)
        self.auto_turret_rotate_exp_velocity_pub =  self.create_publisher(BridgeFloat32MultiArray, 'ui_auto_turret_rotate_exp_velocity', 10)
        self.auto_turret_rotate_exp_disturbance_on_pub =  self.create_publisher(BridgeBoolMultiArray, 'ui_auto_turret_rotate_exp_disturbance_on', 10)
        self.auto_turret_rotate_exp_disturbance_distance_pub =  self.create_publisher(BridgeFloat32MultiArray, 'ui_auto_turret_rotate_exp_disturbance_distance', 10)

        self.auto_turret_rotate_exp_IMU_reff_pub =  self.create_publisher(BridgeFloat32MultiArray, 'ui_auto_turret_rotate_exp_IMU_reff', 10)
        self.auto_turret_rotate_exp_IMU_thrott_pub =  self.create_publisher(BridgeFloat32MultiArray, 'ui_auto_turret_rotate_exp_IMU_thrott', 10)
        
        self.auto_turret_reaction_force_exp_algorithm_on_pub =  self.create_publisher(BridgeBoolMultiArray, 'ui_auto_turret_reaction_force_exp_algorithm_on', 10)
        self.auto_turret_reaction_force_exp_leg_select_pub =  self.create_publisher(BridgeBoolMultiArray, 'ui_auto_turret_reaction_force_exp_leg_select', 10)
        self.auto_turret_reaction_force_exp_error_thrott_pub =  self.create_publisher(BridgeFloat32MultiArray, 'ui_auto_turret_reaction_force_exp_error_thrott', 10)


        
    def setup_signal_connections(self):
        """Connects GUI elements to their respective methods."""
        self.robot_activation_btn.clicked.connect(self.on_robot_activation_clicked)
        self.stop_btn.clicked.connect(self.on_stop_clicked)
        self.break_btn.clicked.connect(self.on_break_clicked)
        self.total_calibration_btn.clicked.connect(self.on_total_calibration_clicked)
        self.ascender_calibration_btn.clicked.connect(self.on_ascender_calibration_clicked)
        self.joint_calibration_btn.clicked.connect(self.on_joint_calibration_clicked)
        self.wheel_calibration_btn.clicked.connect(self.on_wheel_calibration_clicked)
        self.turret_calibration_btn.clicked.connect(self.on_turret_calibration_clicked)
        self.setup_page.anchor_set_btn.clicked.connect(self.on_anchor_motor_set_clicked)
        self.setup_page.ascender_set_btn.clicked.connect(self.on_ascender_motor_set_clicked)
        self.setup_page.joint_set_btn.clicked.connect(self.on_joint_motor_set_clicked)
        self.setup_page.motor_read_current_filter_LPF_set_button.clicked.connect(self.on_motor_read_current_filter_LPF_set_clicked)
        self.setup_page.ascender_parameter_set_button.clicked.connect(self.on_ascender_parameter_set_clicked)
        self.setup_page.ascender_LPF_set_button.clicked.connect(self.on_ascender_LPF_set_clicked)

        self.calibration_radio.toggled.connect(self.on_robot_mode_toggled)
        self.stand_radio.toggled.connect(self.on_robot_mode_toggled)
        self.setup_page.offset_button.clicked.connect(self.on_initial_pose_set_clicked)

        self.stable_radio.toggled.connect(self.on_stable_mode_toggled)
        self.climbing_ready_radio.toggled.connect(self.on_stable_mode_toggled)
        self.climbing.toggled.connect(self.on_stable_mode_toggled)

        
        self.auto_page.ascender_remote_up_arrow.clicked.connect(self.on_auto_ascender_remote_changed)
        self.auto_page.ascender_remote_down_arrow.clicked.connect(self.on_auto_ascender_remote_changed)
        self.auto_page.ascender_remote_left_arrow.clicked.connect(self.on_auto_ascender_remote_changed)
        self.auto_page.ascender_remote_right_arrow.clicked.connect(self.on_auto_ascender_remote_changed)
        self.auto_page.ascender_remote_up_left_arrow.clicked.connect(self.on_auto_ascender_remote_changed)
        self.auto_page.ascender_remote_up_right_arrow.clicked.connect(self.on_auto_ascender_remote_changed)
        self.auto_page.ascender_remote_down_left_arrow.clicked.connect(self.on_auto_ascender_remote_changed)
        self.auto_page.ascender_remote_down_right_arrow.clicked.connect(self.on_auto_ascender_remote_changed)
        self.auto_page.ascender_remote_stop_arrow.clicked.connect(self.on_auto_ascender_remote_changed)
        
        self.auto_page.ascender_remote_velocity_set_button.clicked.connect(self.on_auto_ascender_remote_vel_clicked)
        self.auto_page.ascender_remote_new_set_button.clicked.connect(self.on_auto_ascender_front)
        self.auto_page.ascender_remote_rotate_set_button.clicked.connect(self.on_auto_ascender_rotate)
        
        
        self.auto_page.new_wheel_btn.clicked.connect(self.on_auto_wheel)
        self.auto_page.new_imu_btn.clicked.connect(self.on_auto_imu)
        self.auto_page.new_go_btn.clicked.connect(self.on_auto_go)

        self.auto_page.turret_rotate_exp_start_btn.clicked.connect(self.on_auto_turret_rotate_exp_start)
        self.auto_page.turret_rotate_exp_velocity_set_button.clicked.connect(self.on_auto_turret_rotate_exp_velocity_set_button)
        self.auto_page.turret_rotate_exp_disturbance_on_btn.clicked.connect(self.on_auto_turret_rotate_exp_disturbance_on_btn)
        self.auto_page.turret_rotate_exp_disturbance_distance_set_button.clicked.connect(self.on_auto_turret_rotate_exp_disturbance_distance_set_button)
        self.auto_page.turret_rotate_exp_IMU_reff_set_button.clicked.connect(self.on_auto_turret_rotate_exp_IMU_reff_set_button)
        self.auto_page.turret_rotate_exp_IMU_thrott_set_button.clicked.connect(self.on_auto_turret_rotate_exp_IMU_thrott_set_button)

        self.auto_page.turret_reaction_force_exp_algorithm_on_btn.clicked.connect(self.on_auto_turret_reaction_force_exp_algorithm_on)
        self.auto_page.turret_reaction_force_exp_leg_select_average.toggled.connect(self.on_turret_reaction_force_exp_leg_select_mode_toggled)
        self.auto_page.turret_reaction_force_exp_leg_select_left.toggled.connect(self.on_turret_reaction_force_exp_leg_select_mode_toggled)
        self.auto_page.turret_reaction_force_exp_leg_select_right.toggled.connect(self.on_turret_reaction_force_exp_leg_select_mode_toggled)
        self.auto_page.turret_reaction_force_exp_error_thrott_set_button.clicked.connect(self.on_auto_turret_reaction_force_exp_error_thrott_set_button)


        self.anchor_activation_btn.clicked.connect(self.on_anchor_activation_clicked)
        self.manual_page.anchor1_position_left_arrow.clicked.connect(self.on_anchor_position_changed)
        self.manual_page.anchor1_position_right_arrow.clicked.connect(self.on_anchor_position_changed)
        self.manual_page.anchor2_position_left_arrow.clicked.connect(self.on_anchor_position_changed)
        self.manual_page.anchor2_position_right_arrow.clicked.connect(self.on_anchor_position_changed)
        self.ascender_activation_btn.clicked.connect(self.on_ascender_activation_clicked)
        self.manual_page.ascender_left_motor_up_arrow.clicked.connect(self.on_ascender_each_changed)
        self.manual_page.ascender_left_motor_down_arrow.clicked.connect(self.on_ascender_each_changed)
        self.manual_page.ascender_right_motor_up_arrow.clicked.connect(self.on_ascender_each_changed)
        self.manual_page.ascender_right_motor_down_arrow.clicked.connect(self.on_ascender_each_changed)
        self.manual_page.ascender_both_motor_up_arrow.clicked.connect(self.on_ascender_each_changed)
        self.manual_page.ascender_both_motor_down_arrow.clicked.connect(self.on_ascender_each_changed)
        self.manual_page.ascender_remote_up_arrow.clicked.connect(self.on_ascender_remote_changed)
        self.manual_page.ascender_remote_down_arrow.clicked.connect(self.on_ascender_remote_changed)
        self.manual_page.ascender_remote_left_arrow.clicked.connect(self.on_ascender_remote_changed)
        self.manual_page.ascender_remote_right_arrow.clicked.connect(self.on_ascender_remote_changed)
        self.manual_page.ascender_remote_up_left_arrow.clicked.connect(self.on_ascender_remote_changed)
        self.manual_page.ascender_remote_up_right_arrow.clicked.connect(self.on_ascender_remote_changed)
        self.manual_page.ascender_remote_down_left_arrow.clicked.connect(self.on_ascender_remote_changed)
        self.manual_page.ascender_remote_down_right_arrow.clicked.connect(self.on_ascender_remote_changed)
        self.manual_page.ascender_remote_stop_arrow.clicked.connect(self.on_ascender_remote_changed)
        self.manual_page.ascender_remote_velocity_set_button.clicked.connect(self.on_ascender_remote_vel_clicked)
        self.manual_page.ascender_remote_theta_set_button.clicked.connect(self.on_ascender_remote_theta_clicked)
        self.turret_activation_btn.clicked.connect(self.on_turret_activation_clicked)
        self.turret_dir_btn.clicked.connect(self.on_turret_dir_clicked)
        self.manual_page.turret_set_button.clicked.connect(self.on_turret_set_clicked)
        self.manual_page.all_turret_set_button.clicked.connect(self.on_turret_all_set_clicked)
        self.wheel_activation_btn.clicked.connect(self.on_wheel_activation_clicked)
        self.wheel_turn_btn.clicked.connect(self.on_wheel_turn_clicked)
        self.manual_page.each_wheel_set_button.clicked.connect(self.on_wheel_each_set_clicked)
        self.manual_page.all_wheel_set_button.clicked.connect(self.on_wheel_all_set_clicked)
        self.joint_activation_btn.clicked.connect(self.on_joint_activation_clicked)
        self.manual_page.leg_position_set_button.clicked.connect(self.on_leg_position_command_clicked)
        self.manual_page.body_position_set_button.clicked.connect(self.on_body_position_command_clicked)
        self.manual_page.wheel_direction_set_button.clicked.connect(self.on_wheel_direction_command_clicked)
        
        
        
        
        
        button_names = [
            f"joint_activation_{i}" for i in range(1, 13)
        ] + [
            "ascender_activation_left", "ascender_activation_right",
            "wheel_activation_FL", "wheel_activation_FR",
            "wheel_activation_RL", "wheel_activation_RR",
            "turret_activation_left", "turret_activation_right"
        ]
        for name in button_names:
            btn = self.findChild(QPushButton, name)
            if btn:
                btn.clicked.connect(self.on_activation_setting_changed)
        


    def on_robot_activation_clicked(self):
        """Handles Robot Activation Button click."""
        msg = BridgeBoolMultiArray()
        msg.header.stamp = self.get_clock().now().to_msg()
        msg.name = ['is_robot_activation']
        msg.bool_values = [self.robot_activation_btn.isChecked()]
        self.robot_activation_pub.publish(msg)

    def on_stop_clicked(self):
        msg = BridgeBoolMultiArray()
        msg.header.stamp = self.get_clock().now().to_msg()
        msg.name = ['is_robot_stop']
        msg.bool_values = [self.stop_btn.isChecked()]
        self.robot_mode_pub.publish(msg)

    def on_break_clicked(self):
        msg = BridgeBoolMultiArray()
        msg.header.stamp = self.get_clock().now().to_msg()
        msg.name = ['is_robot_break']
        msg.bool_values = [self.break_btn.isChecked()]
        self.robot_break_pub.publish(msg)

    def on_total_calibration_clicked(self):
        msg = BridgeBoolMultiArray()
        msg.header.stamp = self.get_clock().now().to_msg()
        msg.name = ['is_total_calibration']
        msg.bool_values = [self.total_calibration_btn.isChecked()]
        self.total_calibration_pub.publish(msg)

    def on_ascender_calibration_clicked(self):
        msg = BridgeBoolMultiArray()
        msg.header.stamp = self.get_clock().now().to_msg()
        msg.name = ['is_ascender_calibration']
        msg.bool_values = [self.ascender_calibration_btn.isChecked()]
        self.ascender_calibration_pub.publish(msg)

    def on_joint_calibration_clicked(self):
        msg = BridgeBoolMultiArray()
        msg.header.stamp = self.get_clock().now().to_msg()
        msg.name = ['is_joint_calibration']
        msg.bool_values = [self.joint_calibration_btn.isChecked()]
        self.joint_calibration_pub.publish(msg)

    def on_wheel_calibration_clicked(self):
        msg = BridgeBoolMultiArray()
        msg.header.stamp = self.get_clock().now().to_msg()
        msg.name = ['is_wheel_calibration']
        msg.bool_values = [self.wheel_calibration_btn.isChecked()]
        self.wheel_calibration_pub.publish(msg)

    def on_turret_calibration_clicked(self):
        msg = BridgeBoolMultiArray()
        msg.header.stamp = self.get_clock().now().to_msg()
        msg.name = ['is_turret_calibration']
        msg.bool_values = [self.turret_calibration_btn.isChecked()]
        self.turret_calibration_pub.publish(msg)

    def on_anchor_motor_set_clicked(self):
        msg = BridgeFloat32MultiArray()
        msg.header.stamp = self.get_clock().now().to_msg()
        msg.name = ['speed', 'acc']
        msg.float_values = [float(self.setup_page.anchor_speed_edit.text()), float(self.setup_page.anchor_acc_edit.text())]
        self.anchor_motor_setting_pub.publish(msg)

    def on_ascender_motor_set_clicked(self):
        msg = BridgeFloat32MultiArray()
        msg.header.stamp = self.get_clock().now().to_msg()
        msg.name = ['speed', 'acc']
        msg.float_values = [float(self.setup_page.ascender_speed_edit.text()), float(self.setup_page.ascender_acc_edit.text())]
        self.ascender_motor_setting_pub.publish(msg)

    def on_joint_motor_set_clicked(self):
        msg = BridgeFloat32MultiArray()
        msg.header.stamp = self.get_clock().now().to_msg()
        msg.name = ['speed', 'acc']
        msg.float_values = [float(self.setup_page.joint_speed_edit.text()), float(self.setup_page.joint_acc_edit.text())]
        self.joint_motor_setting_pub.publish(msg)

    def on_motor_read_current_filter_LPF_set_clicked(self):
        msg = BridgeFloat32MultiArray()
        msg.header.stamp = self.get_clock().now().to_msg()
        msg.name = ['LPF']
        msg.float_values = [float(self.setup_page.motor_read_current_filter_LPF_edit.text())]
        self.motor_read_current_fiter_pub.publish(msg)

    def on_ascender_parameter_set_clicked(self):
        msg = BridgeFloat32MultiArray()
        msg.header.stamp = self.get_clock().now().to_msg()
        msg.name = ['Ancher_distance']
        msg.float_values = [float(self.setup_page.ascender_parameter_edit.text())]
        self.setup_ascender_parameter_pub.publish(msg)
    
    def on_ascender_LPF_set_clicked(self):
        msg = BridgeFloat32MultiArray()
        msg.header.stamp = self.get_clock().now().to_msg()
        msg.name = ['LPF']
        msg.float_values = [float(self.setup_page.ascender_LPF_edit.text())]
        self.setup_ascender_filter_pub.publish(msg)

    def on_robot_mode_toggled(self):
        msg = BridgeBoolMultiArray()
        msg.header.stamp = self.get_clock().now().to_msg()
        msg.name = ['is_land_mode', 'is_stand_mode']
        msg.bool_values = [self.calibration_radio.isChecked(), self.stand_radio.isChecked()]
        self.robot_land_stand_mode_pub.publish(msg)


    def on_stable_mode_toggled(self):
        msg = BridgeBoolMultiArray()
        msg.header.stamp = self.get_clock().now().to_msg()
        msg.name = ['ui_setup_is_robot_climbing_mode_stable', 'ui_setup_is_robot_climbing_mode_ready', 'ui_setup_is_robot_climbing_mode_climb']
        msg.bool_values = [self.stable_radio.isChecked(), self.climbing_ready_radio.isChecked(),
                           self.climbing.isChecked()]
        self.robot_stable_climb_mode_pub.publish(msg)


    def on_initial_pose_set_clicked(self):
        msg = BridgeFloat32MultiArray()
        msg.header.stamp = self.get_clock().now().to_msg()
        names = []
        for leg in ['FL', 'FR', 'RL', 'RR']:
            for axis in ['x', 'y', 'z']:
                names.append(f'initial_pose_{leg}_{axis}')
        msg.name = names

        initial_poses = []
        for leg in ['FL', 'FR', 'RL', 'RR']:
            for axis in ['x', 'y', 'z']:
                line_edit = getattr(self.setup_page, f'initial_pose_{leg}_{axis}')
                initial_poses.append(float(line_edit.text()))

        msg.float_values = initial_poses
        self.initial_pose_pub.publish(msg)



        ###
        
    def on_anchor_activation_clicked(self):
        msg = BridgeBoolMultiArray()
        msg.header.stamp = self.get_clock().now().to_msg()
        msg.name = ["is_anchor_activation"]
        msg.bool_values = [self.anchor_activation_btn.isChecked()]
        self.anchor_activation_pub.publish(msg)
        
    def on_anchor_position_changed(self):
        if not hasattr(self, "anchor_position_states"):
            self.anchor_position_states = [False, False, False, False]

        msg = BridgeBoolMultiArray()
        msg.header.stamp = self.get_clock().now().to_msg()
        msg.name = ["is_anchor1_position_left", "is_anchor1_position_right",
                    "is_anchor2_position_left", "is_anchor2_position_right"]

        sender = self.sender()
        if sender == self.manual_page.anchor1_position_left_arrow:
            self.anchor_position_states[0] = not self.anchor_position_states[0]
        elif sender == self.manual_page.anchor1_position_right_arrow:
            self.anchor_position_states[1] = not self.anchor_position_states[1]
        elif sender == self.manual_page.anchor2_position_left_arrow:
            self.anchor_position_states[2] = not self.anchor_position_states[2]
        elif sender == self.manual_page.anchor2_position_right_arrow:
            self.anchor_position_states[3] = not self.anchor_position_states[3]

        msg.bool_values = self.anchor_position_states
        self.manual_anchor_position_pub.publish(msg)  
        

        
    def on_ascender_activation_clicked(self):
        msg = BridgeBoolMultiArray()
        msg.header.stamp = self.get_clock().now().to_msg()
        msg.name = ["is_ascender_activation"]
        msg.bool_values = [self.ascender_activation_btn.isChecked()]
    
        self.manual_ascender_activation_pub.publish(msg)   

    def on_ascender_each_changed(self):
        if not hasattr(self, "ascender_each_states"):
            self.ascender_each_states = [False, False, False, False]

        msg = BridgeBoolMultiArray()
        msg.header.stamp = self.get_clock().now().to_msg()
        msg.name = ["is_ascender_each_LeftMotor_up", "is_ascender_each_LeftMotor_down",
                "is_ascender_each_RightMotor_up", "is_ascender_each_RightMotor_down"]


        sender = self.sender()
        if sender == self.manual_page.ascender_left_motor_up_arrow:
            self.ascender_each_states[0] = sender.isChecked()
        elif sender == self.manual_page.ascender_left_motor_down_arrow:
            self.ascender_each_states[1] = sender.isChecked()
        elif sender == self.manual_page.ascender_right_motor_up_arrow:
            self.ascender_each_states[2] = sender.isChecked()
        elif sender == self.manual_page.ascender_right_motor_down_arrow:
            self.ascender_each_states[3] = sender.isChecked()
        elif sender == self.manual_page.ascender_both_motor_up_arrow:
            self.ascender_each_states[0] = sender.isChecked()
            self.ascender_each_states[2] = sender.isChecked()
        elif sender == self.manual_page.ascender_both_motor_down_arrow:
            self.ascender_each_states[1] = sender.isChecked()
            self.ascender_each_states[3] = sender.isChecked()

        msg.bool_values = self.ascender_each_states
        self.manual_ascender_each_pub.publish(msg)


    def on_ascender_remote_changed(self):
        msg = BridgeBoolMultiArray()
        msg.header.stamp = self.get_clock().now().to_msg()
        msg.name = ["is_ascender_remote_up", "is_ascender_remote_down",
                    "is_ascender_remote_left", "is_ascender_remote_right"]
        if not hasattr(self, "ascender_remote_states"):
            self.ascender_remote_states = [False, False, False, False]

        sender = self.sender()
        if sender == self.manual_page.ascender_remote_up_arrow:
            self.ascender_remote_states[0] = sender.isChecked()
        elif sender == self.manual_page.ascender_remote_down_arrow:
            self.ascender_remote_states[1] = sender.isChecked()
        elif sender == self.manual_page.ascender_remote_left_arrow:
            self.ascender_remote_states[2] = sender.isChecked()
        elif sender == self.manual_page.ascender_remote_right_arrow:
            self.ascender_remote_states[3] = sender.isChecked()
        elif sender == self.manual_page.ascender_remote_up_left_arrow:
            self.ascender_remote_states[0] = sender.isChecked()
            self.ascender_remote_states[2] = sender.isChecked()
        elif sender == self.manual_page.ascender_remote_up_right_arrow:
            self.ascender_remote_states[0] = sender.isChecked()
            self.ascender_remote_states[3] = sender.isChecked()
        elif sender == self.manual_page.ascender_remote_down_left_arrow:
            self.ascender_remote_states[1] = sender.isChecked()
            self.ascender_remote_states[2] = sender.isChecked()
        elif sender == self.manual_page.ascender_remote_down_right_arrow:
            self.ascender_remote_states[1] = sender.isChecked()
            self.ascender_remote_states[3] = sender.isChecked()
        elif sender == self.manual_page.ascender_remote_stop_arrow:
            self.ascender_remote_states[0] = False
            self.ascender_remote_states[1] = False
            self.ascender_remote_states[2] = False
            self.ascender_remote_states[3] = False

        msg.bool_values = self.ascender_remote_states
        self.manual_ascender_remote_pub.publish(msg)

    def on_ascender_remote_vel_clicked(self):
        msg = BridgeFloat32MultiArray()
        msg.header.stamp = self.get_clock().now().to_msg()
        msg.name = ["ascender_remote_velocity"]
        try:
            set_value = float(self.manual_page.ascender_remote_velocity_edit.text())
            msg.float_values = [set_value]
            self.manual_ascender_remote_vel_pub.publish(msg)
        except ValueError:
            pass

    def on_ascender_remote_theta_clicked(self):
        msg = BridgeFloat32MultiArray()
        msg.header.stamp = self.get_clock().now().to_msg()
        msg.name = ["ascender_remote_theta"]
        try:
            set_value = float(self.manual_page.ascender_remote_theta_edit.text())
            msg.float_values = [set_value]
            self.manual_ascender_remote_theta_pub.publish(msg)
        except ValueError:
            pass
    
    def on_auto_ascender_remote_changed(self):
        msg = BridgeBoolMultiArray()
        msg.header.stamp = self.get_clock().now().to_msg()
        msg.name = ["is_ascender_remote_up", "is_ascender_remote_down",
                    "is_ascender_remote_left", "is_ascender_remote_right", "is_robot_remote_push"]
        if not hasattr(self, "ascender_remote_states1"):
            self.ascender_remote_states1 = [False, False, False, False, False]

        sender = self.sender()
        if sender == self.auto_page.ascender_remote_up_arrow:
            self.ascender_remote_states1[0] = sender.isChecked()
        elif sender == self.auto_page.ascender_remote_down_arrow:
            self.ascender_remote_states1[1] = sender.isChecked()
        elif sender == self.auto_page.ascender_remote_left_arrow:
            self.ascender_remote_states1[2] = sender.isChecked()
        elif sender == self.auto_page.ascender_remote_right_arrow:
            self.ascender_remote_states1[3] = sender.isChecked()
        elif sender == self.auto_page.ascender_remote_up_left_arrow:
            self.ascender_remote_states1[0] = sender.isChecked()
            self.ascender_remote_states1[2] = sender.isChecked()
        elif sender == self.auto_page.ascender_remote_up_right_arrow:
            self.ascender_remote_states1[0] = sender.isChecked()
            self.ascender_remote_states1[3] = sender.isChecked()
        elif sender == self.auto_page.ascender_remote_down_left_arrow:
            self.ascender_remote_states1[1] = sender.isChecked()
            self.ascender_remote_states1[2] = sender.isChecked()
        elif sender == self.auto_page.ascender_remote_down_right_arrow:
            self.ascender_remote_states1[1] = sender.isChecked()
            self.ascender_remote_states1[3] = sender.isChecked()
        elif sender == self.auto_page.ascender_remote_stop_arrow:
            self.ascender_remote_states1[4] = sender.isChecked()

        msg.bool_values = self.ascender_remote_states1
        self.auto_robot_tracking_pub.publish(msg)
        
    def on_auto_ascender_remote_vel_clicked(self):
        msg = BridgeFloat32MultiArray()
        msg.header.stamp = self.get_clock().now().to_msg()
        msg.name = ["auto_ascender_remote_velocity"]
        try:
            set_value = float(self.auto_page.ascender_remote_velocity_edit.text())
            msg.float_values = [set_value]
            self.auto_robot_tracking_velocity_pub.publish(msg)
        except ValueError:
            pass
        
        
    def on_auto_ascender_front(self):
        msg = BridgeFloat32MultiArray()
        msg.header.stamp = self.get_clock().now().to_msg()
        msg.name = ["auto_ascender_remote_front_leg_push_length"]
        try:
            set_value = float(self.auto_page.ascender_remote_new_edit.text())
            msg.float_values = [set_value]
            self.auto_robot_tracking_front_pub.publish(msg)
        except ValueError:
            pass
        
    def on_auto_ascender_rotate(self):
        msg = BridgeFloat32MultiArray()
        msg.header.stamp = self.get_clock().now().to_msg()
        msg.name = ["auto_ascender_remote_velocity"]
        try:
            set_value = float(self.auto_page.ascender_remote_rotate_edit.text())
            msg.float_values = [set_value]
            self.auto_robot_tracking_rotate_angle_pub.publish(msg)
        except ValueError:
            pass


    def on_auto_wheel(self):
        msg = BridgeBoolMultiArray()
        msg.header.stamp = self.get_clock().now().to_msg()
        msg.name = ['is_robot_wheel']
        msg.bool_values = [self.auto_page.new_wheel_btn.isChecked()]
        self.auto_robot_wheel_pub.publish(msg)
        

    def on_auto_imu(self):
        msg = BridgeBoolMultiArray()
        msg.header.stamp = self.get_clock().now().to_msg()
        msg.name = ['is_robot_imu']
        msg.bool_values = [self.auto_page.new_imu_btn.isChecked()]
        self.auto_robot_imu_pub.publish(msg)
        
    def on_auto_go(self):
        msg = BridgeBoolMultiArray()
        msg.header.stamp = self.get_clock().now().to_msg()
        msg.name = ['is_robot_go']
        msg.bool_values = [self.auto_page.new_go_btn.isChecked()]
        self.auto_robot_go_pub.publish(msg)

    def on_auto_turret_rotate_exp_start(self):
        msg = BridgeBoolMultiArray()
        msg.header.stamp = self.get_clock().now().to_msg()
        msg.name = ['is_turret_rotate_exp_start']
        msg.bool_values = [self.auto_page.turret_rotate_exp_start_btn.isChecked()]
        self.auto_turret_rotate_exp_start_pub.publish(msg)

    def on_auto_turret_rotate_exp_velocity_set_button(self):
        msg = BridgeFloat32MultiArray()
        msg.header.stamp = self.get_clock().now().to_msg()
        msg.name = ['turret_rotate_exp_velocity']        
        try:
            set_value = float(self.auto_page.turret_rotate_exp_velocity_edit.text())
            msg.float_values = [set_value]
            self.auto_turret_rotate_exp_velocity_pub.publish(msg)
        except ValueError:
            pass

    def on_auto_turret_rotate_exp_disturbance_on_btn(self):
        msg = BridgeBoolMultiArray()
        msg.header.stamp = self.get_clock().now().to_msg()
        msg.name = ['is_turret_rotate_exp_disturbance_on']
        msg.bool_values = [self.auto_page.turret_rotate_exp_disturbance_on_btn.isChecked()]
        self.auto_turret_rotate_exp_disturbance_on_pub.publish(msg)

    def on_auto_turret_rotate_exp_disturbance_distance_set_button(self):
        msg = BridgeFloat32MultiArray()
        msg.header.stamp = self.get_clock().now().to_msg()
        msg.name = ['turret_rotate_exp_disturbance_distance']        
        try:
            set_value = float(self.auto_page.turret_rotate_exp_disturbance_distance_edit.text())
            msg.float_values = [set_value]
            self.auto_turret_rotate_exp_disturbance_distance_pub.publish(msg)
        except ValueError:
            pass

    def on_auto_turret_rotate_exp_IMU_reff_set_button(self):
        msg = BridgeFloat32MultiArray()
        msg.header.stamp = self.get_clock().now().to_msg()
        msg.name = ['turret_rotate_exp_IMU_reff']
        try:
            set_value = float(self.auto_page.turret_rotate_exp_IMU_reff_edit.text())
            msg.float_values = [set_value]
            self.auto_turret_rotate_exp_IMU_reff_pub.publish(msg)
        except ValueError:
            pass

    def on_auto_turret_rotate_exp_IMU_thrott_set_button(self):
        msg = BridgeFloat32MultiArray()
        msg.header.stamp = self.get_clock().now().to_msg()
        msg.name = ['turret_rotate_exp_IMU_thrott']        
        try:
            set_value = float(self.auto_page.turret_rotate_exp_IMU_thrott_edit.text())
            msg.float_values = [set_value]
            self.auto_turret_rotate_exp_IMU_thrott_pub.publish(msg)
        except ValueError:
            pass
    
    def on_auto_turret_reaction_force_exp_algorithm_on(self):
        msg = BridgeBoolMultiArray()
        msg.header.stamp = self.get_clock().now().to_msg()
        msg.name = ['is_turret_reaction_force_exp_algorithm_on']
        msg.bool_values = [self.auto_page.turret_reaction_force_exp_algorithm_on_btn.isChecked()]
        self.auto_turret_reaction_force_exp_algorithm_on_pub.publish(msg)

    def on_turret_reaction_force_exp_leg_select_mode_toggled(self):
        msg = BridgeBoolMultiArray()
        msg.header.stamp = self.get_clock().now().to_msg()
        msg.name = ['is_turret_reaction_force_exp_leg_select_average', 'is_turret_reaction_force_exp_leg_select_left', 'is_turret_reaction_force_exp_leg_select_right']
        msg.bool_values = [self.auto_page.turret_reaction_force_exp_leg_select_average.isChecked(), self.auto_page.turret_reaction_force_exp_leg_select_left.isChecked(), self.auto_page.turret_reaction_force_exp_leg_select_right.isChecked()]
        self.auto_turret_reaction_force_exp_leg_select_pub.publish(msg)

    def on_auto_turret_reaction_force_exp_error_thrott_set_button(self):
        msg = BridgeFloat32MultiArray()
        msg.header.stamp = self.get_clock().now().to_msg()
        msg.name = ['turret_reaction_force_exp_error_thrott']        
        try:
            set_value = float(self.auto_page.turret_reaction_force_exp_error_thrott_edit.text())
            msg.float_values = [set_value]
            self.auto_turret_reaction_force_exp_error_thrott_pub.publish(msg)
        except ValueError:
            pass

    
    def get_activation_setting_states(self):
        states = []

        # Joint motor states
        for i in range(1, 13):
            btn = self.manual_page.findChild(QPushButton, f'joint_activation_{i}')
            if btn:
                states.append(btn.isChecked())

        # Ascender motor states
        states.append(self.manual_page.left_btn.isChecked())
        states.append(self.manual_page.right_btn.isChecked())

        # Wheel motor states
        for wheel in ['FL', 'FR', 'RL', 'RR']:
            btn = self.manual_page.findChild(QPushButton, f'wheel_activation_{wheel}')
            if btn:
                states.append(btn.isChecked())

        # Turret motor states
        states.append(self.manual_page.turret_activation_left_btn.isChecked())
        states.append(self.manual_page.turret_activation_right_btn.isChecked())

        # Anchor motor states
        for anchor in ['anchor1', 'anchor2']:
            for btn_type in ['track', 'fix_left', 'fix_right']:
                self.btn = getattr(self.manual_page, f'{anchor}_activation_{btn_type}_btn')
                states.append(self.btn.isChecked())

        return states


    def on_activation_setting_changed(self):
        msg = BridgeBoolMultiArray()
        msg.header.stamp = self.get_clock().now().to_msg()
        msg.name = [
            "is_joint_activation_1", "is_joint_activation_2", "is_joint_activation_3",
            "is_joint_activation_4", "is_joint_activation_5", "is_joint_activation_6",
            "is_joint_activation_7", "is_joint_activation_8", "is_joint_activation_9",
            "is_joint_activation_10", "is_joint_activation_11", "is_joint_activation_12",
            "is_ascender_activation_left", "is_ascender_activation_right",
            "is_wheel_activation_FL", "is_wheel_activation_FR",
            "is_wheel_activation_RL", "is_wheel_activation_RR",
            "is_turret_activation_left", "is_turret_activation_right",
            "is_anchor1_activation_track", "is_anchor1_activation_fix_left", "is_anchor1_activation_fix_right",
            "is_anchor2_activation_track", "is_anchor2_activation_fix_left", "is_anchor2_activation_fix_right"
        ]

        


        msg.bool_values = self.get_activation_setting_states()
        self.manual_activation_setting_pub.publish(msg)

    def on_turret_activation_clicked(self):
        msg = BridgeBoolMultiArray()
        msg.header.stamp = self.get_clock().now().to_msg()
        msg.name = ["is_turret_activation"]
        msg.bool_values = [self.turret_activation_btn.isChecked()]
    
        self.manual_turret_activation_pub.publish(msg)  
        
        
    def on_wheel_activation_clicked(self):
        msg = BridgeBoolMultiArray()
        msg.header.stamp = self.get_clock().now().to_msg()
        msg.name = ["is_wheel_activation"]
        msg.bool_values = [self.wheel_activation_btn.isChecked()]
    
        self.manual_wheel_activation_pub.publish(msg)
        
   
        
    def on_joint_activation_clicked(self):
        msg = BridgeBoolMultiArray()
        msg.header.stamp = self.get_clock().now().to_msg()
        msg.name = ["is_joint_activation"]
        msg.bool_values = [self.joint_activation_btn.isChecked()]
    
        self.manual_joint_activation_pub.publish(msg)

        
    def on_turret_dir_clicked(self):
        msg = BridgeBoolMultiArray()
        msg.header.stamp = self.get_clock().now().to_msg()
        msg.name = ["is_turret_dir"]
        msg.bool_values = [self.turret_dir_btn.isChecked()]
    
        self.manual_turret_dir_pub.publish(msg)  
        
    def on_wheel_turn_clicked(self):
        msg = BridgeBoolMultiArray()
        msg.header.stamp = self.get_clock().now().to_msg()
        msg.name = ["is_wheel_turn"]
        msg.bool_values = [self.wheel_turn_btn.isChecked()]
    
        self.manual_wheel_turn_pub.publish(msg)  


    def on_turret_set_clicked(self):
        msg = BridgeFloat32MultiArray()
        msg.header.stamp = self.get_clock().now().to_msg()
        msg.name = ["left", "right"]
        try:
            left_value = float(self.manual_page.turret_each_left_edit.text())
            right_value = float(self.manual_page.turret_each_right_edit.text())
            msg.float_values = [left_value, right_value]
            self.manual_turret_velocity_command_each_pub.publish(msg)
        except ValueError:
            pass

    def on_wheel_each_set_clicked(self):
        msg = BridgeFloat32MultiArray()
        msg.header.stamp = self.get_clock().now().to_msg()
        msg.name = ["FL", "FR", "RL", "RR"]
        try:
            FL_value = float(self.manual_page.each_wheel_edits['FL'].text())
            FR_value = float(self.manual_page.each_wheel_edits['FR'].text())
            RL_value = float(self.manual_page.each_wheel_edits['RL'].text())
            RR_value = float(self.manual_page.each_wheel_edits['RR'].text())
            msg.float_values = [FL_value, FR_value, RL_value, RR_value]
            self.manual_wheel_velocity_command_each_pub.publish(msg)
        except ValueError:
            pass


        
    def on_turret_all_set_clicked(self):
        msg = BridgeFloat32MultiArray()
        msg.header.stamp = self.get_clock().now().to_msg()
        msg.name = ["linear", "angular"]
        try:
            linear_value = float(self.manual_page.linear_position_edit.text())
            angular_value = float(self.manual_page.angular_position_edit.text())
            msg.float_values = [linear_value, angular_value]
            self.manual_turret_velocity_command_all_pub.publish(msg)
        except ValueError:
            pass
        
    def on_wheel_all_set_clicked(self):
        msg = BridgeFloat32MultiArray()
        msg.header.stamp = self.get_clock().now().to_msg()
        msg.name = ["all"]
        try:
            all_value = float(self.manual_page.all_wheel_edit.text())
            msg.float_values = [all_value]
            self.manual_wheel_velocity_command_all_pub.publish(msg)
        except ValueError:
            pass

    def on_leg_position_command_clicked(self):
        msg = BridgeFloat32MultiArray()
        msg.header.stamp = self.get_clock().now().to_msg()
        msg.name = ["FL_x", "FL_y", "FL_z", "FR_x", "FR_y", "FR_z", "RL_x", "RL_y", "RL_z", "RR_x", "RR_y", "RR_z"]
        try:
            FL_x_value = float(self.manual_page.leg_position_edits['FL'][0].text())
            FL_y_value = float(self.manual_page.leg_position_edits['FL'][1].text())
            FL_z_value = float(self.manual_page.leg_position_edits['FL'][2].text())
            FR_x_value = float(self.manual_page.leg_position_edits['FR'][0].text())
            FR_y_value = float(self.manual_page.leg_position_edits['FR'][1].text())
            FR_z_value = float(self.manual_page.leg_position_edits['FR'][2].text())
            RL_x_value = float(self.manual_page.leg_position_edits['RL'][0].text())
            RL_y_value = float(self.manual_page.leg_position_edits['RL'][1].text())
            RL_z_value = float(self.manual_page.leg_position_edits['RL'][2].text())
            RR_x_value = float(self.manual_page.leg_position_edits['RR'][0].text())
            RR_y_value = float(self.manual_page.leg_position_edits['RR'][1].text())
            RR_z_value = float(self.manual_page.leg_position_edits['RR'][2].text())

            msg.float_values = [FL_x_value, FL_y_value, FL_z_value, FR_x_value, FR_y_value, FR_z_value,
                                RL_x_value, RL_y_value, RL_z_value, RR_x_value, RR_y_value, RR_z_value]
            self.manual_leg_position_command_pub.publish(msg)
        except ValueError:
            pass

    def on_body_position_command_clicked(self):
        msg = BridgeFloat32MultiArray()
        msg.header.stamp = self.get_clock().now().to_msg()
        msg.name = ["Z", "roll", "pitch", "yaw"]
        try:
            Z_value = float(self.manual_page.body_position_edits['Z'].text())
            roll_value = float(self.manual_page.body_position_edits['Roll'].text())
            pitch_value = float(self.manual_page.body_position_edits['Pitch'].text())
            yaw_value = float(self.manual_page.body_position_edits['Yaw'].text())


            msg.float_values = [Z_value, roll_value, pitch_value, yaw_value]
            self.manual_body_position_command_pub.publish(msg)
        except ValueError:
            pass


    def on_wheel_direction_command_clicked(self):
        msg = BridgeFloat32MultiArray()
        msg.header.stamp = self.get_clock().now().to_msg()
        msg.name = ["wheel_direction"]
        try:
            wheel_direction_value = float(self.manual_page.theta_edit.text())
            msg.float_values = [wheel_direction_value]
            self.manual_wheel_direction_command_pub.publish(msg)
        except ValueError:
            pass

    def publish_default_states_false(self):
        self.on_robot_activation_clicked()
        self.on_stop_clicked()
        self.on_break_clicked()
        self.on_total_calibration_clicked()
        self.on_anchor_activation_clicked()
        self.on_anchor_position_changed()
        self.on_ascender_calibration_clicked()
        self.on_joint_calibration_clicked()
        self.on_wheel_calibration_clicked()
        self.on_turret_calibration_clicked()
        self.on_robot_mode_toggled()
        self.on_activation_setting_changed()
        self.on_ascender_each_changed()
        self.on_ascender_remote_changed()
        self.on_turret_activation_clicked()
        self.on_turret_dir_clicked()
        self.on_wheel_activation_clicked()
        self.on_wheel_turn_clicked()
        self.on_joint_activation_clicked()

        
def main(args=None):        
    app = QApplication(sys.argv)
    controller = UIController()
    controller.show()
    sys.exit(app.exec_())

if __name__ == '__main__':
    main()