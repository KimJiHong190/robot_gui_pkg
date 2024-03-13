// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robot_interfaces:msg/BridgeDt.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_INTERFACES__MSG__DETAIL__BRIDGE_DT__TRAITS_HPP_
#define ROBOT_INTERFACES__MSG__DETAIL__BRIDGE_DT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "robot_interfaces/msg/detail/bridge_dt__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace robot_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const BridgeDt & msg,
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
  const BridgeDt & msg,
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

inline std::string to_yaml(const BridgeDt & msg, bool use_flow_style = false)
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

}  // namespace robot_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use robot_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robot_interfaces::msg::BridgeDt & msg,
  std::ostream & out, size_t indentation = 0)
{
  robot_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robot_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const robot_interfaces::msg::BridgeDt & msg)
{
  return robot_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<robot_interfaces::msg::BridgeDt>()
{
  return "robot_interfaces::msg::BridgeDt";
}

template<>
inline const char * name<robot_interfaces::msg::BridgeDt>()
{
  return "robot_interfaces/msg/BridgeDt";
}

template<>
struct has_fixed_size<robot_interfaces::msg::BridgeDt>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<robot_interfaces::msg::BridgeDt>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<robot_interfaces::msg::BridgeDt>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROBOT_INTERFACES__MSG__DETAIL__BRIDGE_DT__TRAITS_HPP_
