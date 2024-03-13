// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robot_interfaces:msg/BridgeCurrent.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_INTERFACES__MSG__DETAIL__BRIDGE_CURRENT__BUILDER_HPP_
#define ROBOT_INTERFACES__MSG__DETAIL__BRIDGE_CURRENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robot_interfaces/msg/detail/bridge_current__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robot_interfaces
{

namespace msg
{

namespace builder
{

class Init_BridgeCurrent_wheelleg_current_sum
{
public:
  explicit Init_BridgeCurrent_wheelleg_current_sum(::robot_interfaces::msg::BridgeCurrent & msg)
  : msg_(msg)
  {}
  ::robot_interfaces::msg::BridgeCurrent wheelleg_current_sum(::robot_interfaces::msg::BridgeCurrent::_wheelleg_current_sum_type arg)
  {
    msg_.wheelleg_current_sum = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_interfaces::msg::BridgeCurrent msg_;
};

class Init_BridgeCurrent_ascender_current_sum
{
public:
  explicit Init_BridgeCurrent_ascender_current_sum(::robot_interfaces::msg::BridgeCurrent & msg)
  : msg_(msg)
  {}
  Init_BridgeCurrent_wheelleg_current_sum ascender_current_sum(::robot_interfaces::msg::BridgeCurrent::_ascender_current_sum_type arg)
  {
    msg_.ascender_current_sum = std::move(arg);
    return Init_BridgeCurrent_wheelleg_current_sum(msg_);
  }

private:
  ::robot_interfaces::msg::BridgeCurrent msg_;
};

class Init_BridgeCurrent_anchor_current_sum
{
public:
  explicit Init_BridgeCurrent_anchor_current_sum(::robot_interfaces::msg::BridgeCurrent & msg)
  : msg_(msg)
  {}
  Init_BridgeCurrent_ascender_current_sum anchor_current_sum(::robot_interfaces::msg::BridgeCurrent::_anchor_current_sum_type arg)
  {
    msg_.anchor_current_sum = std::move(arg);
    return Init_BridgeCurrent_ascender_current_sum(msg_);
  }

private:
  ::robot_interfaces::msg::BridgeCurrent msg_;
};

class Init_BridgeCurrent_wheelleg_wheel_current
{
public:
  explicit Init_BridgeCurrent_wheelleg_wheel_current(::robot_interfaces::msg::BridgeCurrent & msg)
  : msg_(msg)
  {}
  Init_BridgeCurrent_anchor_current_sum wheelleg_wheel_current(::robot_interfaces::msg::BridgeCurrent::_wheelleg_wheel_current_type arg)
  {
    msg_.wheelleg_wheel_current = std::move(arg);
    return Init_BridgeCurrent_anchor_current_sum(msg_);
  }

private:
  ::robot_interfaces::msg::BridgeCurrent msg_;
};

class Init_BridgeCurrent_wheelleg_turret_current
{
public:
  explicit Init_BridgeCurrent_wheelleg_turret_current(::robot_interfaces::msg::BridgeCurrent & msg)
  : msg_(msg)
  {}
  Init_BridgeCurrent_wheelleg_wheel_current wheelleg_turret_current(::robot_interfaces::msg::BridgeCurrent::_wheelleg_turret_current_type arg)
  {
    msg_.wheelleg_turret_current = std::move(arg);
    return Init_BridgeCurrent_wheelleg_wheel_current(msg_);
  }

private:
  ::robot_interfaces::msg::BridgeCurrent msg_;
};

class Init_BridgeCurrent_wheelleg_joint_current
{
public:
  explicit Init_BridgeCurrent_wheelleg_joint_current(::robot_interfaces::msg::BridgeCurrent & msg)
  : msg_(msg)
  {}
  Init_BridgeCurrent_wheelleg_turret_current wheelleg_joint_current(::robot_interfaces::msg::BridgeCurrent::_wheelleg_joint_current_type arg)
  {
    msg_.wheelleg_joint_current = std::move(arg);
    return Init_BridgeCurrent_wheelleg_turret_current(msg_);
  }

private:
  ::robot_interfaces::msg::BridgeCurrent msg_;
};

class Init_BridgeCurrent_ascender_motor_current
{
public:
  explicit Init_BridgeCurrent_ascender_motor_current(::robot_interfaces::msg::BridgeCurrent & msg)
  : msg_(msg)
  {}
  Init_BridgeCurrent_wheelleg_joint_current ascender_motor_current(::robot_interfaces::msg::BridgeCurrent::_ascender_motor_current_type arg)
  {
    msg_.ascender_motor_current = std::move(arg);
    return Init_BridgeCurrent_wheelleg_joint_current(msg_);
  }

private:
  ::robot_interfaces::msg::BridgeCurrent msg_;
};

class Init_BridgeCurrent_anchor_move_current
{
public:
  explicit Init_BridgeCurrent_anchor_move_current(::robot_interfaces::msg::BridgeCurrent & msg)
  : msg_(msg)
  {}
  Init_BridgeCurrent_ascender_motor_current anchor_move_current(::robot_interfaces::msg::BridgeCurrent::_anchor_move_current_type arg)
  {
    msg_.anchor_move_current = std::move(arg);
    return Init_BridgeCurrent_ascender_motor_current(msg_);
  }

private:
  ::robot_interfaces::msg::BridgeCurrent msg_;
};

class Init_BridgeCurrent_anchor_fix_current
{
public:
  explicit Init_BridgeCurrent_anchor_fix_current(::robot_interfaces::msg::BridgeCurrent & msg)
  : msg_(msg)
  {}
  Init_BridgeCurrent_anchor_move_current anchor_fix_current(::robot_interfaces::msg::BridgeCurrent::_anchor_fix_current_type arg)
  {
    msg_.anchor_fix_current = std::move(arg);
    return Init_BridgeCurrent_anchor_move_current(msg_);
  }

private:
  ::robot_interfaces::msg::BridgeCurrent msg_;
};

class Init_BridgeCurrent_header
{
public:
  Init_BridgeCurrent_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BridgeCurrent_anchor_fix_current header(::robot_interfaces::msg::BridgeCurrent::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_BridgeCurrent_anchor_fix_current(msg_);
  }

private:
  ::robot_interfaces::msg::BridgeCurrent msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_interfaces::msg::BridgeCurrent>()
{
  return robot_interfaces::msg::builder::Init_BridgeCurrent_header();
}

}  // namespace robot_interfaces

#endif  // ROBOT_INTERFACES__MSG__DETAIL__BRIDGE_CURRENT__BUILDER_HPP_
