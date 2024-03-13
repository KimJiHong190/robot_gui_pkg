// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robot_interfaces:msg/BridgeJointStateWithAccel.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_INTERFACES__MSG__DETAIL__BRIDGE_JOINT_STATE_WITH_ACCEL__BUILDER_HPP_
#define ROBOT_INTERFACES__MSG__DETAIL__BRIDGE_JOINT_STATE_WITH_ACCEL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robot_interfaces/msg/detail/bridge_joint_state_with_accel__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robot_interfaces
{

namespace msg
{

namespace builder
{

class Init_BridgeJointStateWithAccel_acceleration
{
public:
  explicit Init_BridgeJointStateWithAccel_acceleration(::robot_interfaces::msg::BridgeJointStateWithAccel & msg)
  : msg_(msg)
  {}
  ::robot_interfaces::msg::BridgeJointStateWithAccel acceleration(::robot_interfaces::msg::BridgeJointStateWithAccel::_acceleration_type arg)
  {
    msg_.acceleration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_interfaces::msg::BridgeJointStateWithAccel msg_;
};

class Init_BridgeJointStateWithAccel_velocity
{
public:
  explicit Init_BridgeJointStateWithAccel_velocity(::robot_interfaces::msg::BridgeJointStateWithAccel & msg)
  : msg_(msg)
  {}
  Init_BridgeJointStateWithAccel_acceleration velocity(::robot_interfaces::msg::BridgeJointStateWithAccel::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_BridgeJointStateWithAccel_acceleration(msg_);
  }

private:
  ::robot_interfaces::msg::BridgeJointStateWithAccel msg_;
};

class Init_BridgeJointStateWithAccel_position
{
public:
  explicit Init_BridgeJointStateWithAccel_position(::robot_interfaces::msg::BridgeJointStateWithAccel & msg)
  : msg_(msg)
  {}
  Init_BridgeJointStateWithAccel_velocity position(::robot_interfaces::msg::BridgeJointStateWithAccel::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_BridgeJointStateWithAccel_velocity(msg_);
  }

private:
  ::robot_interfaces::msg::BridgeJointStateWithAccel msg_;
};

class Init_BridgeJointStateWithAccel_name
{
public:
  explicit Init_BridgeJointStateWithAccel_name(::robot_interfaces::msg::BridgeJointStateWithAccel & msg)
  : msg_(msg)
  {}
  Init_BridgeJointStateWithAccel_position name(::robot_interfaces::msg::BridgeJointStateWithAccel::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_BridgeJointStateWithAccel_position(msg_);
  }

private:
  ::robot_interfaces::msg::BridgeJointStateWithAccel msg_;
};

class Init_BridgeJointStateWithAccel_header
{
public:
  Init_BridgeJointStateWithAccel_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BridgeJointStateWithAccel_name header(::robot_interfaces::msg::BridgeJointStateWithAccel::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_BridgeJointStateWithAccel_name(msg_);
  }

private:
  ::robot_interfaces::msg::BridgeJointStateWithAccel msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_interfaces::msg::BridgeJointStateWithAccel>()
{
  return robot_interfaces::msg::builder::Init_BridgeJointStateWithAccel_header();
}

}  // namespace robot_interfaces

#endif  // ROBOT_INTERFACES__MSG__DETAIL__BRIDGE_JOINT_STATE_WITH_ACCEL__BUILDER_HPP_
