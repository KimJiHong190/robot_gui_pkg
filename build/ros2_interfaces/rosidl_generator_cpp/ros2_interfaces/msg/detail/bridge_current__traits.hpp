// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2_interfaces:msg/BridgeCurrent.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACES__MSG__DETAIL__BRIDGE_CURRENT__TRAITS_HPP_
#define ROS2_INTERFACES__MSG__DETAIL__BRIDGE_CURRENT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros2_interfaces/msg/detail/bridge_current__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace ros2_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const BridgeCurrent & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: anchor_fix_current
  {
    if (msg.anchor_fix_current.size() == 0) {
      out << "anchor_fix_current: []";
    } else {
      out << "anchor_fix_current: [";
      size_t pending_items = msg.anchor_fix_current.size();
      for (auto item : msg.anchor_fix_current) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: anchor_move_current
  {
    if (msg.anchor_move_current.size() == 0) {
      out << "anchor_move_current: []";
    } else {
      out << "anchor_move_current: [";
      size_t pending_items = msg.anchor_move_current.size();
      for (auto item : msg.anchor_move_current) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: ascender_motor_current
  {
    if (msg.ascender_motor_current.size() == 0) {
      out << "ascender_motor_current: []";
    } else {
      out << "ascender_motor_current: [";
      size_t pending_items = msg.ascender_motor_current.size();
      for (auto item : msg.ascender_motor_current) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: wheelleg_joint_current
  {
    if (msg.wheelleg_joint_current.size() == 0) {
      out << "wheelleg_joint_current: []";
    } else {
      out << "wheelleg_joint_current: [";
      size_t pending_items = msg.wheelleg_joint_current.size();
      for (auto item : msg.wheelleg_joint_current) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: wheelleg_turret_current
  {
    if (msg.wheelleg_turret_current.size() == 0) {
      out << "wheelleg_turret_current: []";
    } else {
      out << "wheelleg_turret_current: [";
      size_t pending_items = msg.wheelleg_turret_current.size();
      for (auto item : msg.wheelleg_turret_current) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: wheelleg_wheel_current
  {
    if (msg.wheelleg_wheel_current.size() == 0) {
      out << "wheelleg_wheel_current: []";
    } else {
      out << "wheelleg_wheel_current: [";
      size_t pending_items = msg.wheelleg_wheel_current.size();
      for (auto item : msg.wheelleg_wheel_current) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: anchor_current_sum
  {
    out << "anchor_current_sum: ";
    rosidl_generator_traits::value_to_yaml(msg.anchor_current_sum, out);
    out << ", ";
  }

  // member: ascender_current_sum
  {
    out << "ascender_current_sum: ";
    rosidl_generator_traits::value_to_yaml(msg.ascender_current_sum, out);
    out << ", ";
  }

  // member: wheelleg_current_sum
  {
    out << "wheelleg_current_sum: ";
    rosidl_generator_traits::value_to_yaml(msg.wheelleg_current_sum, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BridgeCurrent & msg,
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

  // member: anchor_fix_current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.anchor_fix_current.size() == 0) {
      out << "anchor_fix_current: []\n";
    } else {
      out << "anchor_fix_current:\n";
      for (auto item : msg.anchor_fix_current) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: anchor_move_current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.anchor_move_current.size() == 0) {
      out << "anchor_move_current: []\n";
    } else {
      out << "anchor_move_current:\n";
      for (auto item : msg.anchor_move_current) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: ascender_motor_current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.ascender_motor_current.size() == 0) {
      out << "ascender_motor_current: []\n";
    } else {
      out << "ascender_motor_current:\n";
      for (auto item : msg.ascender_motor_current) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: wheelleg_joint_current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.wheelleg_joint_current.size() == 0) {
      out << "wheelleg_joint_current: []\n";
    } else {
      out << "wheelleg_joint_current:\n";
      for (auto item : msg.wheelleg_joint_current) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: wheelleg_turret_current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.wheelleg_turret_current.size() == 0) {
      out << "wheelleg_turret_current: []\n";
    } else {
      out << "wheelleg_turret_current:\n";
      for (auto item : msg.wheelleg_turret_current) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: wheelleg_wheel_current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.wheelleg_wheel_current.size() == 0) {
      out << "wheelleg_wheel_current: []\n";
    } else {
      out << "wheelleg_wheel_current:\n";
      for (auto item : msg.wheelleg_wheel_current) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: anchor_current_sum
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "anchor_current_sum: ";
    rosidl_generator_traits::value_to_yaml(msg.anchor_current_sum, out);
    out << "\n";
  }

  // member: ascender_current_sum
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ascender_current_sum: ";
    rosidl_generator_traits::value_to_yaml(msg.ascender_current_sum, out);
    out << "\n";
  }

  // member: wheelleg_current_sum
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wheelleg_current_sum: ";
    rosidl_generator_traits::value_to_yaml(msg.wheelleg_current_sum, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BridgeCurrent & msg, bool use_flow_style = false)
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
  const ros2_interfaces::msg::BridgeCurrent & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros2_interfaces::msg::BridgeCurrent & msg)
{
  return ros2_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros2_interfaces::msg::BridgeCurrent>()
{
  return "ros2_interfaces::msg::BridgeCurrent";
}

template<>
inline const char * name<ros2_interfaces::msg::BridgeCurrent>()
{
  return "ros2_interfaces/msg/BridgeCurrent";
}

template<>
struct has_fixed_size<ros2_interfaces::msg::BridgeCurrent>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros2_interfaces::msg::BridgeCurrent>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros2_interfaces::msg::BridgeCurrent>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS2_INTERFACES__MSG__DETAIL__BRIDGE_CURRENT__TRAITS_HPP_
