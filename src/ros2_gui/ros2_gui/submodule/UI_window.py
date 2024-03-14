from PyQt5.QtCore import Qt
from PyQt5.QtGui import QFont
from PyQt5.QtWidgets import (QApplication, QWidget, QVBoxLayout, QLabel, QStackedWidget, QGridLayout, QLineEdit, QFrame,
                             QGroupBox, QHBoxLayout, QMainWindow, QPushButton, QRadioButton, QButtonGroup)


class SetupWindow(QWidget):
    def __init__(self, parent=None):
        super().__init__(parent) 
        
        layout = QVBoxLayout(self)

        # Page Title
        title = QLabel("Page1")
        title.setFont(QFont("Arial", 12, QFont.Bold))
        layout.addWidget(title)

        # Page Content
        page_content = QHBoxLayout()

        # Left vertical of Page1, not used in this code
        left_layout = QVBoxLayout()
        
        # Right vertical of Page1
        right_layout = QGridLayout()
        page1_setting1 = self.create_page1_setting1_group()
        page1_setting3 = self.create_setting3_group()
        right_layout.addWidget(page1_setting1, 0, 0)
        right_layout.addWidget(self.create_setting2_group(), 1, 0)
        right_layout.addWidget(page1_setting3, 2, 0)

        page_content.addLayout(left_layout)
        page_content.addLayout(right_layout)
        layout.addLayout(page_content)

    def adjust_window_size(self):
        """Adjust the main window size based on the current widget's size."""
        self.resize(self.stacked_widget.currentWidget().sizeHint())


    def create_toggle_button_true(self, parent, name):
        btn = QPushButton(parent)
        btn.setObjectName(name)
        btn.setCheckable(True)
        btn.setChecked(True)
        btn.setStyleSheet("background-color: green")
        btn.clicked.connect(lambda: self.toggle_button_color(btn))
        return btn


    def create_toggle_button_false(self, name):
        """Helper function to create toggle buttons."""
        button = QPushButton(name)
        button.setCheckable(True)
        button.setChecked(False)
        button.setStyleSheet("background-color: red")
        button.clicked.connect(self.toggle_button_color)
        return button


    def create_page1_setting1_group(self):
        group = QGroupBox("Setting 1")
        layout = QHBoxLayout()
        robot1_group = self.create_speed_acc_subgroup("Robot1")
        robot2_group = self.create_speed_acc_subgroup("Robot2")
        robot3_group = self.create_speed_acc_subgroup("Robot3")
        layout.addWidget(robot1_group)
        layout.addWidget(robot2_group)
        layout.addWidget(robot3_group)
        group.setLayout(layout)
        return group
    
    def create_speed_acc_subgroup(self, name):
        group = QGroupBox(name)
        layout = QVBoxLayout()

        setattr(self, f"{name.lower()}_speed_edit", QLineEdit())
        speed_edit = getattr(self, f"{name.lower()}_speed_edit")
        speed_edit.setPlaceholderText(f"{name} speed")

        setattr(self, f"{name.lower()}_acc_edit", QLineEdit())
        acc_edit = getattr(self, f"{name.lower()}_acc_edit")
        acc_edit.setPlaceholderText(f"{name} acc")

        setattr(self, f"{name.lower()}_set_btn", QPushButton("Set"))
        set_btn = getattr(self, f"{name.lower()}_set_btn")

        layout.addWidget(speed_edit)
        layout.addWidget(acc_edit)
        layout.addWidget(set_btn)
        group.setLayout(layout)
        return group
    
    def create_setting2_group(self):
        group = QGroupBox("Setting 2")
        layout = QHBoxLayout()
        self.page1_setting2_group = QGroupBox("LPF")
        self.page1_setting2_layout = QVBoxLayout()
        self.page1_setting2_edit = QLineEdit()
        self.page1_setting2_set_btn = QPushButton("Set")
        self.page1_setting2_layout.addWidget(self.page1_setting2_edit)
        self.page1_setting2_layout.addWidget(self.page1_setting2_set_btn)
        self.page1_setting2_group.setLayout(self.page1_setting2_layout)

        layout.addWidget(self.page1_setting2_group)
        group.setLayout(layout)
        return group
    

    def create_setting3_group(self):
        group = QGroupBox("Setting 3")
        layout = QGridLayout()
        
        # Robot Offset
        robot_offset_group = QGroupBox("Joint Setting")
        robot_offset_layout = QVBoxLayout()
        leg_layout = QGridLayout()
        for leg, label in enumerate(['FL', 'FR', 'RL', 'RR']):
            leg_frame = QFrame()
            leg_frame_layout = QVBoxLayout()
            leg_frame.setLayout(leg_frame_layout)
            leg_frame_layout.addWidget(QLabel(label))
        
            for axis in ['x', 'y', 'z']:
                line_edit = QLineEdit()
                setattr(self, f'initial_pose_{label}_{axis}', line_edit)  # Set attribute with specific name
                leg_frame_layout.addWidget(line_edit)
    
            leg_layout.addWidget(leg_frame, leg // 2, leg % 2)
            
        robot_offset_layout.addLayout(leg_layout)
        self.page1_setting3_set_btn = QPushButton("Set")
        robot_offset_layout.addWidget(self.page1_setting3_set_btn, alignment=Qt.AlignCenter)
        robot_offset_group.setLayout(robot_offset_layout)
        
        layout.addWidget(robot_offset_group)
        group.setLayout(layout)
        return group

    def toggle_button_color(self):
        """Toggle button color between red and green."""
        sender = self.sender()
        if sender.isChecked():
            sender.setStyleSheet("background-color: green")
        else:
            sender.setStyleSheet("background-color: red")


class ManualWindow(QWidget):
    def __init__(self, parent=None):
        super().__init__(parent)
        layout = QVBoxLayout(self)

        # Page Title
        title = QLabel("Manual Page")
        title.setFont(QFont("Arial", 12, QFont.Bold))
        layout.addWidget(title)

        # Page Content
        page_content = QHBoxLayout()
        
        # Left vertical of Manual Page
        left_layout = QVBoxLayout()
        anchor_group = self.create_anchor_group()
        robot2_group = self.create_robot2_group()
        activation_setting_group = self.create_activation_setting_group()
        anchor_motor_group = self.create_anchor_motor_group()

        page_content.addWidget(anchor_group)
        page_content.addWidget(robot2_group)
        page_content.addWidget(activation_setting_group)
        page_content.addWidget(anchor_motor_group)


        # Right Vertical of Manual Page
        joint_group = self.create_joint_group()
        wheel_group = self.create_wheel_group()


        right_layout = QVBoxLayout()
        right_layout.addWidget(joint_group)
        right_layout.addWidget(wheel_group)

        page_content.addLayout(left_layout)
        page_content.addLayout(right_layout)
        layout.addLayout(page_content)

    def create_toggle_button_true(self, name):
        btn = QPushButton(name)
        btn.setCheckable(True)
        btn.setChecked(True)
        btn.setStyleSheet("background-color: green")
        btn.clicked.connect(self.toggle_button_color)
        return btn
    
    def create_toggle_button_false(self, name):
        """Helper function to create toggle buttons."""
        button = QPushButton(name)
        button.setCheckable(True)
        button.setChecked(False)
        button.setStyleSheet("background-color: red")
        button.clicked.connect(self.toggle_button_color)
        return button

    def create_arrow_buttons(self, orientation="horizontal"):
        """Helper function to create arrow buttons."""
        self.left_arrow = QPushButton("<")
        self.right_arrow = QPushButton(">")
        self.up_arrow = QPushButton("^")
        self.down_arrow = QPushButton("v")
        self.fix1_btn = QPushButton("On/Off")
        self.fix2_btn = QPushButton("On/Off")
        if orientation == "horizontal":
            layout = QHBoxLayout()
            layout.addWidget(self.left_arrow)
            layout.addWidget(self.right_arrow)
            layout.addWidget(self.up_arrow)
            layout.addWidget(self.down_arrow)
            layout.addWidget(self.fix1_btn)
            layout.addWidget(self.fix2_btn)
        else:
            layout = QVBoxLayout()
            layout.addWidget(self.left_arrow)
            layout.addWidget(self.right_arrow)
            layout.addWidget(self.up_arrow)
            layout.addWidget(self.down_arrow)
            layout.addWidget(self.fix1_btn)
            layout.addWidget(self.fix2_btn)
        return layout

    def create_anchor_group(self):
        group = QGroupBox("Robot1")
        layout = QVBoxLayout()

        robot1_position_group = QGroupBox("Robot1 Position")
        robot1_position_main_layout = QVBoxLayout()
        
        robot1_position_arrows_layout = QHBoxLayout()
        self.robot1_position_left_arrow = self.create_toggle_button_false("<")
        self.robot1_position_right_arrow = self.create_toggle_button_false(">")
        robot1_position_arrows_layout.addWidget(self.robot1_position_left_arrow)
        robot1_position_arrows_layout.addWidget(self.robot1_position_right_arrow)

        robot1_position_vertical_layout = QVBoxLayout()
        self.robot1_position_float_box = QLineEdit()
        self.robot1_position_float_set = QPushButton("Set")
        robot1_position_vertical_layout.addWidget(self.robot1_position_float_box)
        robot1_position_vertical_layout.addWidget(self.robot1_position_float_set)
        

        robot1_position_main_layout.addLayout(robot1_position_arrows_layout)
        robot1_position_main_layout.addLayout(robot1_position_vertical_layout)
        robot1_position_group.setLayout(robot1_position_main_layout)
        layout.addWidget(robot1_position_group)


        robot1_fix_group = QGroupBox("robot1 Fix")
        robot1_fix_layout = QVBoxLayout()
        robot1_fix_btn_layout = QHBoxLayout()
        self.robot1_fix1_btn = self.create_toggle_button_false("Fix1 Unfixed")
        self.robot1_fix2_btn = self.create_toggle_button_false("Fix2 Unfixed")
        robot1_fix_btn_layout.addWidget(self.robot1_fix1_btn)
        robot1_fix_btn_layout.addWidget(self.robot1_fix2_btn)
        
        robot1_fix_arrows_layout = QGridLayout()
        
        self.robot1_fix1_up_arrow = self.create_toggle_button_false("^")

        self.robot1_fix1_down_arrow = self.create_toggle_button_false("v")

        self.robot1_fix2_up_arrow = self.create_toggle_button_false("^")

        self.robot1_fix2_down_arrow = self.create_toggle_button_false("v")

        self.robot1_fix1_edit = QLineEdit()
        self.robot1_fix1_set_btn = QPushButton("Set")
        self.robot1_fix2_edit = QLineEdit()
        self.robot1_fix2_set_btn = QPushButton("Set")

        robot1_fix_arrows_layout.addWidget(self.robot1_fix1_up_arrow, 0, 0)
        robot1_fix_arrows_layout.addWidget(self.robot1_fix1_down_arrow, 1, 0)
        robot1_fix_arrows_layout.addWidget(self.robot1_fix1_edit, 2, 0)
        robot1_fix_arrows_layout.addWidget(self.robot1_fix1_set_btn, 3, 0)
        
        robot1_fix_arrows_layout.addWidget(self.robot1_fix2_up_arrow, 0, 2)
        robot1_fix_arrows_layout.addWidget(self.robot1_fix2_down_arrow, 1, 2)
        robot1_fix_arrows_layout.addWidget(self.robot1_fix2_edit, 2, 2)
        robot1_fix_arrows_layout.addWidget(self.robot1_fix2_set_btn, 3, 2)

        robot1_fix_layout.addLayout(robot1_fix_btn_layout)
        robot1_fix_layout.addLayout(robot1_fix_arrows_layout)
        robot1_fix_group.setLayout(robot1_fix_layout)
        layout.addWidget(robot1_fix_group)

        ###
        
        robot4_position_group = QGroupBox("Robot4 Position")
        robot4_position_main_layout = QVBoxLayout()
        
        robot4_position_arrows_layout = QHBoxLayout()
        self.robot4_position_left_arrow = self.create_toggle_button_false("<")
        self.robot4_position_right_arrow = self.create_toggle_button_false(">")
        robot4_position_arrows_layout.addWidget(self.robot4_position_left_arrow)
        robot4_position_arrows_layout.addWidget(self.robot4_position_right_arrow)
        
        robot4_position_vertical_layout = QVBoxLayout()
        self.robot4_position_float_box = QLineEdit()
        self.robot4_position_float_set = QPushButton("Set")
        robot4_position_vertical_layout.addWidget(self.robot4_position_float_box)
        robot4_position_vertical_layout.addWidget(self.robot4_position_float_set)
        
        robot4_position_main_layout.addLayout(robot4_position_arrows_layout)
        robot4_position_main_layout.addLayout(robot4_position_vertical_layout)
        robot4_position_group.setLayout(robot4_position_main_layout)
        layout.addWidget(robot4_position_group)


        robot4_fix_group = QGroupBox("robot4 Fix")
        robot4_fix_layout = QVBoxLayout()
        robot4_fix_btn_layout = QHBoxLayout()
        self.robot4_fix1_btn = self.create_toggle_button_false("Fix1 Unfixed")
        self.robot4_fix2_btn = self.create_toggle_button_false("Fix2 Unfixed")
        robot4_fix_btn_layout.addWidget(self.robot4_fix1_btn)
        robot4_fix_btn_layout.addWidget(self.robot4_fix2_btn)
        
        robot4_fix_arrows_layout = QGridLayout()
        
        self.robot4_fix1_up_arrow = self.create_toggle_button_false("^")
        
        self.robot4_fix1_down_arrow = self.create_toggle_button_false("v")
        
        self.robot4_fix2_up_arrow = self.create_toggle_button_false("^")
        
        self.robot4_fix2_down_arrow = self.create_toggle_button_false("v")
        
        self.robot4_fix1_edit = QLineEdit()
        self.robot4_fix1_set_btn = QPushButton("Set")
        self.robot4_fix2_edit = QLineEdit()
        self.robot4_fix2_set_btn = QPushButton("Set")        
        
        robot4_fix_arrows_layout.addWidget(self.robot4_fix1_up_arrow, 0, 0)
        robot4_fix_arrows_layout.addWidget(self.robot4_fix1_down_arrow, 1, 0)
        robot4_fix_arrows_layout.addWidget(self.robot4_fix1_edit, 2, 0)
        robot4_fix_arrows_layout.addWidget(self.robot4_fix1_set_btn, 3, 0)
        
        robot4_fix_arrows_layout.addWidget(self.robot4_fix2_up_arrow, 0, 2)
        robot4_fix_arrows_layout.addWidget(self.robot4_fix2_down_arrow, 1, 2)
        robot4_fix_arrows_layout.addWidget(self.robot4_fix2_edit, 2, 2)
        robot4_fix_arrows_layout.addWidget(self.robot4_fix2_set_btn, 3, 2)

        robot4_fix_layout.addLayout(robot4_fix_btn_layout)
        robot4_fix_layout.addLayout(robot4_fix_arrows_layout)
        robot4_fix_group.setLayout(robot4_fix_layout)
        layout.addWidget(robot4_fix_group)

        group.setLayout(layout)
        return group

    def toggle_button_color(self):
        sender = self.sender()
        if sender.isChecked():
            sender.setStyleSheet("background-color: green")
        else:
            sender.setStyleSheet("background-color: red")




    def create_robot2_group(self):
        group = QGroupBox("Robot2")
        layout = QVBoxLayout()

    
        each_motor_group = QGroupBox("Robot2 each motor")
        each_motor_layout = QHBoxLayout()
    
        left_each_motor_group = QGroupBox("Left")
        left_each_motor_layout = QVBoxLayout()
        self.robot2_left_motor_up_arrow = self.create_toggle_button_false("^")
        #self.robot2_left_motor_up_arrow.setCheckable(True)
        #self.robot2_left_motor_up_arrow.setChecked(True)
        self.robot2_left_motor_up_arrow.setStyleSheet("background-color: red")
        self.robot2_left_motor_up_arrow.clicked.connect(self.toggle_button_color)
        
        self.robot2_left_motor_down_arrow = self.create_toggle_button_false("v")
        self.robot2_left_motor_down_arrow.setStyleSheet("background-color: red")
        self.robot2_left_motor_down_arrow.clicked.connect(self.toggle_button_color)
        
        left_each_motor_layout.addWidget(self.robot2_left_motor_up_arrow)
        left_each_motor_layout.addWidget(self.robot2_left_motor_down_arrow)
        left_each_motor_group.setLayout(left_each_motor_layout)
        each_motor_layout.addWidget(left_each_motor_group)
    
        right_each_motor_group = QGroupBox("Right")
        right_each_motor_layout = QVBoxLayout()
        self.robot2_right_motor_up_arrow = self.create_toggle_button_false("^")

        self.robot2_right_motor_up_arrow.setStyleSheet("background-color: red")
        self.robot2_right_motor_up_arrow.clicked.connect(self.toggle_button_color)
        
        self.robot2_right_motor_down_arrow = self.create_toggle_button_false("v")

        self.robot2_right_motor_down_arrow.setStyleSheet("background-color: red")
        self.robot2_right_motor_down_arrow.clicked.connect(self.toggle_button_color)        
        
        right_each_motor_layout.addWidget(self.robot2_right_motor_up_arrow)
        right_each_motor_layout.addWidget(self.robot2_right_motor_down_arrow)
        right_each_motor_group.setLayout(right_each_motor_layout)
        each_motor_layout.addWidget(right_each_motor_group)

        both_each_motor_group = QGroupBox("Both")
        both_each_motor_layout = QVBoxLayout()
        self.robot2_both_motor_up_arrow = self.create_toggle_button_false("^")

        self.robot2_both_motor_up_arrow.setStyleSheet("background-color: red")
        self.robot2_both_motor_up_arrow.clicked.connect(self.toggle_button_color)
        
        self.robot2_both_motor_down_arrow = self.create_toggle_button_false("v")

        self.robot2_both_motor_down_arrow.setStyleSheet("background-color: red")
        self.robot2_both_motor_down_arrow.clicked.connect(self.toggle_button_color)        
        
        both_each_motor_layout.addWidget(self.robot2_both_motor_up_arrow)
        both_each_motor_layout.addWidget(self.robot2_both_motor_down_arrow)
        both_each_motor_group.setLayout(both_each_motor_layout)
        each_motor_layout.addWidget(both_each_motor_group)

        each_motor_group.setLayout(each_motor_layout)

        remote_controller_group = QGroupBox("robot2 remote controller")
        remote_layout = QGridLayout()
        self.robot2_remote_up_arrow = self.create_toggle_button_false("^")

        self.robot2_remote_up_arrow.setStyleSheet("background-color: red")
        self.robot2_remote_up_arrow.clicked.connect(self.toggle_button_color)
        
        self.robot2_remote_left_arrow = self.create_toggle_button_false("<")

        self.robot2_remote_left_arrow.setStyleSheet("background-color: red")
        self.robot2_remote_left_arrow.clicked.connect(self.toggle_button_color)
        
        self.robot2_remote_right_arrow = self.create_toggle_button_false(">")

        self.robot2_remote_right_arrow.setStyleSheet("background-color: red")
        self.robot2_remote_right_arrow.clicked.connect(self.toggle_button_color)
        
        self.robot2_remote_down_arrow = self.create_toggle_button_false("v")

        self.robot2_remote_down_arrow.setStyleSheet("background-color: red")
        self.robot2_remote_down_arrow.clicked.connect(self.toggle_button_color)

        # Diagonal move
        self.robot2_remote_up_left_arrow = self.create_toggle_button_false("<^")
        self.robot2_remote_up_left_arrow.setStyleSheet("background-color: red")
        self.robot2_remote_up_left_arrow.clicked.connect(self.toggle_button_color)

        self.robot2_remote_up_right_arrow = self.create_toggle_button_false("^>")
        self.robot2_remote_up_right_arrow.setStyleSheet("background-color: red")
        self.robot2_remote_up_right_arrow.clicked.connect(self.toggle_button_color)

        self.robot2_remote_down_left_arrow = self.create_toggle_button_false("<v")
        self.robot2_remote_down_left_arrow.setStyleSheet("background-color: red")
        self.robot2_remote_down_left_arrow.clicked.connect(self.toggle_button_color)

        self.robot2_remote_down_right_arrow = self.create_toggle_button_false("v>")
        self.robot2_remote_down_right_arrow.setStyleSheet("background-color: red")
        self.robot2_remote_down_right_arrow.clicked.connect(self.toggle_button_color)

        self.robot2_remote_stop_arrow = self.create_toggle_button_false("O")
        self.robot2_remote_stop_arrow.setStyleSheet("background-color: red")
        self.robot2_remote_stop_arrow.clicked.connect(self.toggle_button_color)
        
        
        velocity_group = QGroupBox("Velocity")
        velocity_layout = QHBoxLayout()
        self.robot2_remote_velocity_edit = QLineEdit()
        self.robot2_remote_velocity_set_button = QPushButton("Set")
        velocity_layout.addWidget(self.robot2_remote_velocity_edit)
        velocity_layout.addWidget(self.robot2_remote_velocity_set_button)
        velocity_group.setLayout(velocity_layout)
        velocity_group.setFixedHeight(100)

        theta_group = QGroupBox("theta")
        theta_layout = QHBoxLayout()
        self.robot2_remote_theta_edit = QLineEdit()
        self.robot2_remote_theta_set_button = QPushButton("Set")
        theta_layout.addWidget(self.robot2_remote_theta_edit)
        theta_layout.addWidget(self.robot2_remote_theta_set_button)
        theta_group.setLayout(theta_layout)
        theta_group.setFixedHeight(100)
        
        
        remote_layout.addWidget(self.robot2_remote_up_arrow, 0, 1)  # Up
        remote_layout.addWidget(self.robot2_remote_left_arrow, 1, 0)  # Left
        remote_layout.addWidget(self.robot2_remote_right_arrow, 1, 2)  # Right
        remote_layout.addWidget(self.robot2_remote_down_arrow, 2, 1)  # Down
        remote_layout.addWidget(self.robot2_remote_up_left_arrow, 0, 0)  # Up Left
        remote_layout.addWidget(self.robot2_remote_up_right_arrow, 0, 2)  # Up Right
        remote_layout.addWidget(self.robot2_remote_down_left_arrow, 2, 0)  # Down Left
        remote_layout.addWidget(self.robot2_remote_down_right_arrow, 2, 2)  # Down Right
        remote_layout.addWidget(self.robot2_remote_stop_arrow, 1, 1)  # Stop
        remote_layout.addWidget(velocity_group, 3, 0, 1, 3)
        remote_layout.addWidget(theta_group, 4, 0, 1, 3)
        remote_controller_group.setLayout(remote_layout)
    
        layout.addWidget(each_motor_group)
        layout.addWidget(remote_controller_group)
        group.setLayout(layout)
        return group


    def create_activation_setting_group(self):
        group = QGroupBox("Activation Setting")
        layout = QVBoxLayout()
    
        joint_motor_group = QGroupBox("Joint motor")
        joint_motor_layout = QGridLayout()
        for idx, name in enumerate(['FL', 'FR', 'RL', 'RR']):
            joint_motor_layout.addWidget(QLabel(name), idx, 0)
            start_num = idx*3+1
            for j in range(3):
                button_num = start_num + j
                btn = QPushButton(str(button_num))
                btn.setObjectName(f"joint_activation_{button_num}")
                btn.setCheckable(True)
                btn.setChecked(True)
                btn.setStyleSheet("background-color: green")
                btn.clicked.connect(self.toggle_button_color)
                joint_motor_layout.addWidget(btn, idx, j+1)
        set_btn = QPushButton("Set")
        set_btn.setObjectName("joint_activation_set")
        joint_motor_layout.addWidget(set_btn, idx+1, 0, 1, 4)
        joint_motor_group.setLayout(joint_motor_layout)

        # robot2 motor box
        robot2_motor_group = QGroupBox("robot2 motor")
        robot2_motor_layout = QHBoxLayout()
        self.left_btn = QPushButton("Left")
        self.left_btn.setObjectName("robot2_activation_left")
        self.left_btn.setCheckable(True)
        self.left_btn.setChecked(True)
        self.left_btn.setStyleSheet("background-color: green")
        self.left_btn.clicked.connect(self.toggle_button_color)
        self.right_btn = QPushButton("Right")
        self.right_btn.setObjectName("robot2_activation_right")
        self.right_btn.setCheckable(True)
        self.right_btn.setChecked(True)
        self.right_btn.setStyleSheet("background-color: green")
        self.right_btn.clicked.connect(self.toggle_button_color)
        robot2_motor_layout.addWidget(self.left_btn)
        robot2_motor_layout.addWidget(self.right_btn)
        robot2_motor_group.setLayout(robot2_motor_layout)

        # Wheel motor box
        wheel_motor_group = QGroupBox("Wheel motor")
        wheel_motor_layout = QGridLayout()
        for idx, name in enumerate(['FL', 'FR', 'RL', 'RR']):
            self.btn = QPushButton(name)
            self.btn.setObjectName(f"wheel_activation_{name}")
            self.btn.setCheckable(True)
            self.btn.setChecked(True)
            self.btn.setStyleSheet("background-color: green")
            self.btn.clicked.connect(self.toggle_button_color)
            wheel_motor_layout.addWidget(self.btn, idx // 2, idx % 2)
        wheel_motor_group.setLayout(wheel_motor_layout)

    # Turret motor box
        turret_motor_group = QGroupBox("Turret motor")
        turret_motor_layout = QHBoxLayout()
        self.turret_activation_left_btn = self.create_toggle_button_true("Left")
        self.turret_activation_left_btn.setObjectName("turret_activation_left")
        self.turret_activation_left_btn.setCheckable(True)
        self.turret_activation_left_btn.setChecked(True)
        self.turret_activation_left_btn.clicked.connect(self.toggle_button_color)
        self.turret_activation_right_btn = self.create_toggle_button_true("Right")
        self.turret_activation_right_btn.setObjectName("turret_activation_right")
        self.turret_activation_right_btn.setCheckable(True)
        self.turret_activation_right_btn.setChecked(True)
        self.turret_activation_right_btn.clicked.connect(self.toggle_button_color)
        turret_motor_layout.addWidget(self.turret_activation_left_btn)
        turret_motor_layout.addWidget(self.turret_activation_right_btn)
        turret_motor_group.setLayout(turret_motor_layout)

        layout.addWidget(joint_motor_group)
        layout.addWidget(robot2_motor_group)
        layout.addWidget(wheel_motor_group)
        layout.addWidget(turret_motor_group)
        group.setLayout(layout)
        return group

    def create_anchor_motor_group(self):
        group = QGroupBox("Anchor motor")
        layout = QVBoxLayout()

        robot1_group = QGroupBox("robot1")
        robot1_layout = QHBoxLayout()
        self.robot1_activation_track_btn = self.create_toggle_button_true("Track")
        self.robot1_activation_fix_left_btn = self.create_toggle_button_true("Left Fix")
        self.robot1_activation_fix_right_btn = self.create_toggle_button_true("Right Fix")
        robot1_layout.addWidget(self.robot1_activation_track_btn)
        robot1_layout.addWidget(self.robot1_activation_fix_left_btn)
        robot1_layout.addWidget(self.robot1_activation_fix_right_btn)
        robot1_group.setLayout(robot1_layout)

        robot4_group = QGroupBox("robot4")
        robot4_layout = QHBoxLayout()
        self.robot4_activation_track_btn = self.create_toggle_button_true("Track")
        self.robot4_activation_fix_left_btn = self.create_toggle_button_true("Left Fix")
        self.robot4_activation_fix_right_btn = self.create_toggle_button_true("Right Fix")
        robot4_layout.addWidget(self.robot4_activation_track_btn)
        robot4_layout.addWidget(self.robot4_activation_fix_left_btn)
        robot4_layout.addWidget(self.robot4_activation_fix_right_btn)
        robot4_group.setLayout(robot4_layout)

        turret_group = QGroupBox("Turret")
        turret_layout = QVBoxLayout()
    

        each_turret_group = QGroupBox("Each")
        each_turret_layout = QGridLayout()

        # Left QLineEdit
        self.turret_each_left_edit = QLineEdit()
        self.turret_each_left_edit.setPlaceholderText("Left")
        each_turret_layout.addWidget(self.turret_each_left_edit, 0, 0)

        # Right QLineEdit
        self.turret_each_right_edit = QLineEdit()
        self.turret_each_right_edit.setPlaceholderText("Right")
        each_turret_layout.addWidget(self.turret_each_right_edit, 0, 1)

        # Set QPushButton
        self.turret_set_button = QPushButton("Set")
        each_turret_layout.addWidget(self.turret_set_button, 1, 0, 1, 2)

        each_turret_group.setLayout(each_turret_layout)
        turret_layout.addWidget(each_turret_group)

        all_turret_group = QGroupBox("All")
        all_turret_layout = QGridLayout()

        self.linear_position_edit = QLineEdit()
        self.linear_position_edit.setPlaceholderText("Linear Position")
        all_turret_layout.addWidget(self.linear_position_edit, 0, 0)

        self.angular_position_edit = QLineEdit()
        self.angular_position_edit.setPlaceholderText("Angular Position")
        all_turret_layout.addWidget(self.angular_position_edit, 0, 1)

        self.all_turret_set_button = QPushButton("Set")
        all_turret_layout.addWidget(self.all_turret_set_button, 1, 0, 1, 2)

        all_turret_group.setLayout(all_turret_layout)
        turret_layout.addWidget(all_turret_group)

        turret_group.setLayout(turret_layout)

        layout.addWidget(robot1_group)
        layout.addWidget(robot4_group)
        layout.addWidget(turret_group)
        group.setLayout(layout)
        return group


    def create_joint_group(self):
        group = QGroupBox("Joint")
        layout = QVBoxLayout()
    


        # Leg Position Group
        leg_position_group = QGroupBox("Leg position command")
        leg_position_layout = QGridLayout()
    
        self.leg_position_edits = {}
        for idx, name in enumerate(['FL', 'FR', 'RL', 'RR']):
            leg_position_layout.addWidget(QLabel(name), idx, 0)
            self.leg_position_edits[name] = [QLineEdit() for _ in range(3)]
            for j, edit in enumerate(self.leg_position_edits[name]):
                leg_position_layout.addWidget(edit, idx, j+1)

        self.leg_position_set_button = QPushButton("Set")
        leg_position_layout.addWidget(self.leg_position_set_button, idx+1, 0, 1, 4)
        leg_position_group.setLayout(leg_position_layout)

        # Body Position Group
        body_position_group = QGroupBox("Body position command")
        body_position_layout = QHBoxLayout()

        self.body_position_edits = {}
        for name in ['Z', 'Roll', 'Pitch', 'Yaw']:
            edit = QLineEdit()
            edit.setPlaceholderText(name)
            self.body_position_edits[name] = edit
            body_position_layout.addWidget(edit)

        self.body_position_set_button = QPushButton("Set")
        body_position_layout.addWidget(self.body_position_set_button)
        body_position_group.setLayout(body_position_layout)

        # Wheel Direction Group
        wheel_direction_group = QGroupBox("Wheel direction command")
        wheel_direction_layout = QVBoxLayout()

        self.theta_edit = QLineEdit()
        self.theta_edit.setPlaceholderText("Theta")
        wheel_direction_layout.addWidget(self.theta_edit)

        self.wheel_direction_set_button = QPushButton("Set")
        wheel_direction_layout.addWidget(self.wheel_direction_set_button)
        wheel_direction_group.setLayout(wheel_direction_layout)

        # Add to Main Layout
        layout.addWidget(leg_position_group)
        layout.addWidget(body_position_group)
        layout.addWidget(wheel_direction_group)
        group.setLayout(layout)
        return group
    
    def create_wheel_group(self):
        group = QGroupBox("Wheel")
        layout = QVBoxLayout()


        each_wheel_group = QGroupBox("Each")
        each_wheel_layout = QGridLayout()

        self.each_wheel_edits = {}
        for idx, name in enumerate(['FL', 'FR', 'RL', 'RR']):
            each_wheel_layout.addWidget(QLabel(name), idx, 0)
            self.each_wheel_edits[name] = QLineEdit()
            each_wheel_layout.addWidget(self.each_wheel_edits[name], idx, 1)
        
        self.each_wheel_set_button = QPushButton("Set")
        each_wheel_layout.addWidget(self.each_wheel_set_button, idx+1, 0, 1, 2)
        each_wheel_group.setLayout(each_wheel_layout)

        all_wheel_group = QGroupBox("All")
        all_wheel_layout = QVBoxLayout()
    
        self.all_wheel_edit = QLineEdit()
        self.all_wheel_edit.setPlaceholderText("All")
        all_wheel_layout.addWidget(self.all_wheel_edit)
    
        self.all_wheel_set_button = QPushButton("Set")
        all_wheel_layout.addWidget(self.all_wheel_set_button)
        all_wheel_group.setLayout(all_wheel_layout)

        layout.addWidget(each_wheel_group)
        layout.addWidget(all_wheel_group)
        group.setLayout(layout)
        return group




    def toggle_button_color(self):
        """Toggle button color between red and green."""
        sender = self.sender()
        if sender.isChecked():
            sender.setStyleSheet("background-color: green")
        else:
            sender.setStyleSheet("background-color: red")




class MainWindow(QMainWindow):
    def __init__(self):
        super().__init__()

        central_widget = QWidget(self)
        self.setCentralWidget(central_widget)
        
        # Main layout
        layout = QHBoxLayout(central_widget)

        # Title
        self.setWindowTitle("Robot_Test_UI")

        # Adding Main control switch page
        control_switch = self.create_main_control_switch_group()
        layout.addWidget(control_switch)

        # Create a QStackedWidget to manage multiple screens
        mode_layout = QVBoxLayout()
        self.stacked_widget = QStackedWidget()
        mode_layout.addWidget(self.stacked_widget)

        # Adding pages to the StackedWidget
        self.page1 = SetupWindow()
        self.page2 = ManualWindow()
        

        self.stacked_widget.addWidget(self.page1)
        self.stacked_widget.addWidget(self.page2)
        

        # Setting default page
        self.stacked_widget.setCurrentWidget(self.page1)

        # Page Switch Buttons
        btn_layout = QHBoxLayout()
        setup_btn = QPushButton("Switch to Setup Page")
        manual_btn = QPushButton("Switch to Manual Page")
        
        setup_btn.clicked.connect(lambda: self.stacked_widget.setCurrentWidget(self.page1))
        manual_btn.clicked.connect(lambda: self.stacked_widget.setCurrentWidget(self.page2))
        
        btn_layout.addWidget(setup_btn)
        btn_layout.addWidget(manual_btn)
        
        mode_layout.addLayout(btn_layout)
        layout.addLayout(mode_layout)

    def create_main_control_switch_group(self):
        group = QGroupBox("Main Control Switch")
        layout = QGridLayout()
        self.robot1_activation_btn = self.create_toggle_button_false("Robot1 Activation")
        self.stop_btn = self.create_toggle_button_false("Stop")
        self.break_btn = self.create_toggle_button_false("Break")
        self.robot4_activation_btn = self.create_toggle_button_false("Robot4 Activation")
        self.total_calibration_btn = self.create_toggle_button_false_A("Total Calibration")
        self.robot2_calibration_btn = self.create_toggle_button_false_A("Robot2 Calibration")
        self.joint_calibration_btn = self.create_toggle_button_false_A("Joint Calibration")
        self.wheel_calibration_btn = self.create_toggle_button_false_A("Wheel Calibration")
        self.turret_calibration_btn = self.create_toggle_button_false_A("Turret Calibration")
        self.robot4_calibration_btn = self.create_toggle_button_false_A("Robot4 Calibration")
        
        self.robot2_activation_btn = self.create_toggle_button_false("Robot2 Activation")
        self.joint_activation_btn = self.create_toggle_button_false("Joint Activation")
        self.turret_activation_btn = self.create_toggle_button_false_A("Turret Activation")
        self.turret_dir_btn = self.create_toggle_button_false_A("Turret Dir")

        self.wheel_activation_btn = self.create_toggle_button_false("Wheel Activation")
        self.wheel_turn_btn = self.create_toggle_button_false("Wheel Turn")

        self.land_radio = QRadioButton("Land")
        self.stand_radio = QRadioButton("Stand")
    
        self.stable_radio = QRadioButton("Stable")
        self.climbing_ready_radio = QRadioButton("Climbing Ready")
        self.climbing = QRadioButton("Climbing")        
        
        cal_group=QButtonGroup(self)
        cal_group.addButton(self.land_radio)
        cal_group.addButton(self.stand_radio)
        
        climb_group=QButtonGroup(self)
        climb_group.addButton(self.stable_radio)
        climb_group.addButton(self.climbing_ready_radio)
        climb_group.addButton(self.climbing)     
         
        
        layout.addWidget(self.robot1_activation_btn)
        layout.addWidget(self.stop_btn)
        layout.addWidget(self.break_btn)
        
        layout.addWidget(self.total_calibration_btn)
        layout.addWidget(self.robot2_calibration_btn)
        layout.addWidget(self.joint_calibration_btn)
        layout.addWidget(self.wheel_calibration_btn)
        layout.addWidget(self.turret_calibration_btn)      
        layout.addWidget(self.robot2_activation_btn)


        layout.addWidget(self.joint_activation_btn)
        layout.addWidget(self.turret_activation_btn)
        layout.addWidget(self.turret_dir_btn)
        layout.addWidget(self.wheel_activation_btn)
        layout.addWidget(self.wheel_turn_btn)
        
        layout.addWidget(self.land_radio)
        layout.addWidget(self.stand_radio)
        layout.addWidget(self.stable_radio)
        layout.addWidget(self.climbing_ready_radio)
        layout.addWidget(self.climbing)          
        
        
        group.setLayout(layout)
        return group
    
    def create_toggle_button_false(self, name):
        """Helper function to create toggle buttons."""
        button = QPushButton(name)
        button.setCheckable(True)
        button.setChecked(False)
        button.setStyleSheet("background-color: white")
        button.clicked.connect(self.toggle_button_color)
        return button
    
    def create_toggle_button_false_A(self, name):
        """Helper function to create toggle buttons."""
        button = QPushButton(name)
        button.setCheckable(True)
        button.setChecked(False)
        button.setStyleSheet("background-color: gray")
        button.clicked.connect(self.toggle_button_color_A)
        return button
    
    

    def toggle_button_color(self):
        """Toggle button color between red and green."""
        sender = self.sender()
        if sender.isChecked():
            sender.setStyleSheet("background-color: green")
        else:
            sender.setStyleSheet("background-color: white")

    def toggle_button_color_A(self):
        """Toggle button color between red and green."""
        sender = self.sender()
        if sender.isChecked():
            sender.setStyleSheet("background-color: green")
        else:
            sender.setStyleSheet("background-color: gray")



if __name__ == '__main__':
    app = QApplication([])
    window = MainWindow()
    window.show()
    app.exec_()