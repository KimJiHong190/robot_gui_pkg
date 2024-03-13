// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robot_interfaces:msg/BridgeError.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_INTERFACES__MSG__DETAIL__BRIDGE_ERROR__BUILDER_HPP_
#define ROBOT_INTERFACES__MSG__DETAIL__BRIDGE_ERROR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robot_interfaces/msg/detail/bridge_error__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robot_interfaces
{

namespace msg
{

namespace builder
{

class Init_BridgeError_is_error_over_range
{
public:
  explicit Init_BridgeError_is_error_over_range(::robot_interfaces::msg::BridgeError & msg)
  : msg_(msg)
  {}
  ::robot_interfaces::msg::BridgeError is_error_over_range(::robot_interfaces::msg::BridgeError::_is_error_over_range_type arg)
  {
    msg_.is_error_over_range = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_interfaces::msg::BridgeError msg_;
};

class Init_BridgeError_is_error_over_current
{
public:
  explicit Init_BridgeError_is_error_over_current(::robot_interfaces::msg::BridgeError & msg)
  : msg_(msg)
  {}
  Init_BridgeError_is_error_over_range is_error_over_current(::robot_interfaces::msg::BridgeError::_is_error_over_current_type arg)
  {
    msg_.is_error_over_current = std::move(arg);
    return Init_BridgeError_is_error_over_range(msg_);
  }

private:
  ::robot_interfaces::msg::BridgeError msg_;
};

class Init_BridgeError_error_joint_stuck
{
public:
  explicit Init_BridgeError_error_joint_stuck(::robot_interfaces::msg::BridgeError & msg)
  : msg_(msg)
  {}
  Init_BridgeError_is_error_over_current error_joint_stuck(::robot_interfaces::msg::BridgeError::_error_joint_stuck_type arg)
  {
    msg_.error_joint_stuck = std::move(arg);
    return Init_BridgeError_is_error_over_current(msg_);
  }

private:
  ::robot_interfaces::msg::BridgeError msg_;
};

class Init_BridgeError_error_can
{
public:
  explicit Init_BridgeError_error_can(::robot_interfaces::msg::BridgeError & msg)
  : msg_(msg)
  {}
  Init_BridgeError_error_joint_stuck error_can(::robot_interfaces::msg::BridgeError::_error_can_type arg)
  {
    msg_.error_can = std::move(arg);
    return Init_BridgeError_error_joint_stuck(msg_);
  }

private:
  ::robot_interfaces::msg::BridgeError msg_;
};

class Init_BridgeError_header
{
public:
  Init_BridgeError_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BridgeError_error_can header(::robot_interfaces::msg::BridgeError::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_BridgeError_error_can(msg_);
  }

private:
  ::robot_interfaces::msg::BridgeError msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_interfaces::msg::BridgeError>()
{
  return robot_interfaces::msg::builder::Init_BridgeError_header();
}

}  // namespace robot_interfaces

#endif  // ROBOT_INTERFACES__MSG__DETAIL__BRIDGE_ERROR__BUILDER_HPP_
