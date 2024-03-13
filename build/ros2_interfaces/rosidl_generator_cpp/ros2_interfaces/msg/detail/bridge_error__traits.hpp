// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2_interfaces:msg/BridgeError.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACES__MSG__DETAIL__BRIDGE_ERROR__TRAITS_HPP_
#define ROS2_INTERFACES__MSG__DETAIL__BRIDGE_ERROR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros2_interfaces/msg/detail/bridge_error__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace ros2_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const BridgeError & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: error_can
  {
    out << "error_can: ";
    rosidl_generator_traits::value_to_yaml(msg.error_can, out);
    out << ", ";
  }

  // member: error_joint_stuck
  {
    if (msg.error_joint_stuck.size() == 0) {
      out << "error_joint_stuck: []";
    } else {
      out << "error_joint_stuck: [";
      size_t pending_items = msg.error_joint_stuck.size();
      for (auto item : msg.error_joint_stuck) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: is_error_over_current
  {
    if (msg.is_error_over_current.size() == 0) {
      out << "is_error_over_current: []";
    } else {
      out << "is_error_over_current: [";
      size_t pending_items = msg.is_error_over_current.size();
      for (auto item : msg.is_error_over_current) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: is_error_over_range
  {
    if (msg.is_error_over_range.size() == 0) {
      out << "is_error_over_range: []";
    } else {
      out << "is_error_over_range: [";
      size_t pending_items = msg.is_error_over_range.size();
      for (auto item : msg.is_error_over_range) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BridgeError & msg,
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

  // member: error_can
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_can: ";
    rosidl_generator_traits::value_to_yaml(msg.error_can, out);
    out << "\n";
  }

  // member: error_joint_stuck
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.error_joint_stuck.size() == 0) {
      out << "error_joint_stuck: []\n";
    } else {
      out << "error_joint_stuck:\n";
      for (auto item : msg.error_joint_stuck) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: is_error_over_current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.is_error_over_current.size() == 0) {
      out << "is_error_over_current: []\n";
    } else {
      out << "is_error_over_current:\n";
      for (auto item : msg.is_error_over_current) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: is_error_over_range
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.is_error_over_range.size() == 0) {
      out << "is_error_over_range: []\n";
    } else {
      out << "is_error_over_range:\n";
      for (auto item : msg.is_error_over_range) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BridgeError & msg, bool use_flow_style = false)
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
  const ros2_interfaces::msg::BridgeError & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros2_interfaces::msg::BridgeError & msg)
{
  return ros2_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros2_interfaces::msg::BridgeError>()
{
  return "ros2_interfaces::msg::BridgeError";
}

template<>
inline const char * name<ros2_interfaces::msg::BridgeError>()
{
  return "ros2_interfaces/msg/BridgeError";
}

template<>
struct has_fixed_size<ros2_interfaces::msg::BridgeError>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros2_interfaces::msg::BridgeError>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros2_interfaces::msg::BridgeError>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS2_INTERFACES__MSG__DETAIL__BRIDGE_ERROR__TRAITS_HPP_
