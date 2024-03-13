// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2_interfaces:msg/BridgeRobotStatus.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACES__MSG__DETAIL__BRIDGE_ROBOT_STATUS__TRAITS_HPP_
#define ROS2_INTERFACES__MSG__DETAIL__BRIDGE_ROBOT_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros2_interfaces/msg/detail/bridge_robot_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace ros2_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const BridgeRobotStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: dt_can_tx
  {
    out << "dt_can_tx: ";
    rosidl_generator_traits::value_to_yaml(msg.dt_can_tx, out);
    out << ", ";
  }

  // member: dt_can_tx_joint
  {
    out << "dt_can_tx_joint: ";
    rosidl_generator_traits::value_to_yaml(msg.dt_can_tx_joint, out);
    out << ", ";
  }

  // member: dt_can_tx_wheel
  {
    out << "dt_can_tx_wheel: ";
    rosidl_generator_traits::value_to_yaml(msg.dt_can_tx_wheel, out);
    out << ", ";
  }

  // member: dt_can_tx_turret
  {
    out << "dt_can_tx_turret: ";
    rosidl_generator_traits::value_to_yaml(msg.dt_can_tx_turret, out);
    out << ", ";
  }

  // member: dt_can_rx
  {
    out << "dt_can_rx: ";
    rosidl_generator_traits::value_to_yaml(msg.dt_can_rx, out);
    out << ", ";
  }

  // member: dt_mean_can_tx
  {
    out << "dt_mean_can_tx: ";
    rosidl_generator_traits::value_to_yaml(msg.dt_mean_can_tx, out);
    out << ", ";
  }

  // member: dt_mean_can_tx_joint
  {
    out << "dt_mean_can_tx_joint: ";
    rosidl_generator_traits::value_to_yaml(msg.dt_mean_can_tx_joint, out);
    out << ", ";
  }

  // member: dt_mean_can_tx_wheel
  {
    out << "dt_mean_can_tx_wheel: ";
    rosidl_generator_traits::value_to_yaml(msg.dt_mean_can_tx_wheel, out);
    out << ", ";
  }

  // member: dt_mean_can_tx_turret
  {
    out << "dt_mean_can_tx_turret: ";
    rosidl_generator_traits::value_to_yaml(msg.dt_mean_can_tx_turret, out);
    out << ", ";
  }

  // member: dt_mean_can_rx
  {
    out << "dt_mean_can_rx: ";
    rosidl_generator_traits::value_to_yaml(msg.dt_mean_can_rx, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BridgeRobotStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: dt_can_tx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dt_can_tx: ";
    rosidl_generator_traits::value_to_yaml(msg.dt_can_tx, out);
    out << "\n";
  }

  // member: dt_can_tx_joint
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dt_can_tx_joint: ";
    rosidl_generator_traits::value_to_yaml(msg.dt_can_tx_joint, out);
    out << "\n";
  }

  // member: dt_can_tx_wheel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dt_can_tx_wheel: ";
    rosidl_generator_traits::value_to_yaml(msg.dt_can_tx_wheel, out);
    out << "\n";
  }

  // member: dt_can_tx_turret
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dt_can_tx_turret: ";
    rosidl_generator_traits::value_to_yaml(msg.dt_can_tx_turret, out);
    out << "\n";
  }

  // member: dt_can_rx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dt_can_rx: ";
    rosidl_generator_traits::value_to_yaml(msg.dt_can_rx, out);
    out << "\n";
  }

  // member: dt_mean_can_tx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dt_mean_can_tx: ";
    rosidl_generator_traits::value_to_yaml(msg.dt_mean_can_tx, out);
    out << "\n";
  }

  // member: dt_mean_can_tx_joint
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dt_mean_can_tx_joint: ";
    rosidl_generator_traits::value_to_yaml(msg.dt_mean_can_tx_joint, out);
    out << "\n";
  }

  // member: dt_mean_can_tx_wheel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dt_mean_can_tx_wheel: ";
    rosidl_generator_traits::value_to_yaml(msg.dt_mean_can_tx_wheel, out);
    out << "\n";
  }

  // member: dt_mean_can_tx_turret
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dt_mean_can_tx_turret: ";
    rosidl_generator_traits::value_to_yaml(msg.dt_mean_can_tx_turret, out);
    out << "\n";
  }

  // member: dt_mean_can_rx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dt_mean_can_rx: ";
    rosidl_generator_traits::value_to_yaml(msg.dt_mean_can_rx, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BridgeRobotStatus & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace ros2_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use ros2_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ros2_interfaces::msg::BridgeRobotStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros2_interfaces::msg::BridgeRobotStatus & msg)
{
  return ros2_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros2_interfaces::msg::BridgeRobotStatus>()
{
  return "ros2_interfaces::msg::BridgeRobotStatus";
}

template<>
inline const char * name<ros2_interfaces::msg::BridgeRobotStatus>()
{
  return "ros2_interfaces/msg/BridgeRobotStatus";
}

template<>
struct has_fixed_size<ros2_interfaces::msg::BridgeRobotStatus>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<ros2_interfaces::msg::BridgeRobotStatus>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<ros2_interfaces::msg::BridgeRobotStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS2_INTERFACES__MSG__DETAIL__BRIDGE_ROBOT_STATUS__TRAITS_HPP_
