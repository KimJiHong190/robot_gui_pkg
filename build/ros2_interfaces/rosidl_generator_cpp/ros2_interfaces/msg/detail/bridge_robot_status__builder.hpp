// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interfaces:msg/BridgeRobotStatus.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACES__MSG__DETAIL__BRIDGE_ROBOT_STATUS__BUILDER_HPP_
#define ROS2_INTERFACES__MSG__DETAIL__BRIDGE_ROBOT_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interfaces/msg/detail/bridge_robot_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interfaces
{

namespace msg
{

namespace builder
{

class Init_BridgeRobotStatus_dt_mean_can_rx
{
public:
  explicit Init_BridgeRobotStatus_dt_mean_can_rx(::ros2_interfaces::msg::BridgeRobotStatus & msg)
  : msg_(msg)
  {}
  ::ros2_interfaces::msg::BridgeRobotStatus dt_mean_can_rx(::ros2_interfaces::msg::BridgeRobotStatus::_dt_mean_can_rx_type arg)
  {
    msg_.dt_mean_can_rx = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interfaces::msg::BridgeRobotStatus msg_;
};

class Init_BridgeRobotStatus_dt_mean_can_tx_turret
{
public:
  explicit Init_BridgeRobotStatus_dt_mean_can_tx_turret(::ros2_interfaces::msg::BridgeRobotStatus & msg)
  : msg_(msg)
  {}
  Init_BridgeRobotStatus_dt_mean_can_rx dt_mean_can_tx_turret(::ros2_interfaces::msg::BridgeRobotStatus::_dt_mean_can_tx_turret_type arg)
  {
    msg_.dt_mean_can_tx_turret = std::move(arg);
    return Init_BridgeRobotStatus_dt_mean_can_rx(msg_);
  }

private:
  ::ros2_interfaces::msg::BridgeRobotStatus msg_;
};

class Init_BridgeRobotStatus_dt_mean_can_tx_wheel
{
public:
  explicit Init_BridgeRobotStatus_dt_mean_can_tx_wheel(::ros2_interfaces::msg::BridgeRobotStatus & msg)
  : msg_(msg)
  {}
  Init_BridgeRobotStatus_dt_mean_can_tx_turret dt_mean_can_tx_wheel(::ros2_interfaces::msg::BridgeRobotStatus::_dt_mean_can_tx_wheel_type arg)
  {
    msg_.dt_mean_can_tx_wheel = std::move(arg);
    return Init_BridgeRobotStatus_dt_mean_can_tx_turret(msg_);
  }

private:
  ::ros2_interfaces::msg::BridgeRobotStatus msg_;
};

class Init_BridgeRobotStatus_dt_mean_can_tx_joint
{
public:
  explicit Init_BridgeRobotStatus_dt_mean_can_tx_joint(::ros2_interfaces::msg::BridgeRobotStatus & msg)
  : msg_(msg)
  {}
  Init_BridgeRobotStatus_dt_mean_can_tx_wheel dt_mean_can_tx_joint(::ros2_interfaces::msg::BridgeRobotStatus::_dt_mean_can_tx_joint_type arg)
  {
    msg_.dt_mean_can_tx_joint = std::move(arg);
    return Init_BridgeRobotStatus_dt_mean_can_tx_wheel(msg_);
  }

private:
  ::ros2_interfaces::msg::BridgeRobotStatus msg_;
};

class Init_BridgeRobotStatus_dt_mean_can_tx
{
public:
  explicit Init_BridgeRobotStatus_dt_mean_can_tx(::ros2_interfaces::msg::BridgeRobotStatus & msg)
  : msg_(msg)
  {}
  Init_BridgeRobotStatus_dt_mean_can_tx_joint dt_mean_can_tx(::ros2_interfaces::msg::BridgeRobotStatus::_dt_mean_can_tx_type arg)
  {
    msg_.dt_mean_can_tx = std::move(arg);
    return Init_BridgeRobotStatus_dt_mean_can_tx_joint(msg_);
  }

private:
  ::ros2_interfaces::msg::BridgeRobotStatus msg_;
};

class Init_BridgeRobotStatus_dt_can_rx
{
public:
  explicit Init_BridgeRobotStatus_dt_can_rx(::ros2_interfaces::msg::BridgeRobotStatus & msg)
  : msg_(msg)
  {}
  Init_BridgeRobotStatus_dt_mean_can_tx dt_can_rx(::ros2_interfaces::msg::BridgeRobotStatus::_dt_can_rx_type arg)
  {
    msg_.dt_can_rx = std::move(arg);
    return Init_BridgeRobotStatus_dt_mean_can_tx(msg_);
  }

private:
  ::ros2_interfaces::msg::BridgeRobotStatus msg_;
};

class Init_BridgeRobotStatus_dt_can_tx_turret
{
public:
  explicit Init_BridgeRobotStatus_dt_can_tx_turret(::ros2_interfaces::msg::BridgeRobotStatus & msg)
  : msg_(msg)
  {}
  Init_BridgeRobotStatus_dt_can_rx dt_can_tx_turret(::ros2_interfaces::msg::BridgeRobotStatus::_dt_can_tx_turret_type arg)
  {
    msg_.dt_can_tx_turret = std::move(arg);
    return Init_BridgeRobotStatus_dt_can_rx(msg_);
  }

private:
  ::ros2_interfaces::msg::BridgeRobotStatus msg_;
};

class Init_BridgeRobotStatus_dt_can_tx_wheel
{
public:
  explicit Init_BridgeRobotStatus_dt_can_tx_wheel(::ros2_interfaces::msg::BridgeRobotStatus & msg)
  : msg_(msg)
  {}
  Init_BridgeRobotStatus_dt_can_tx_turret dt_can_tx_wheel(::ros2_interfaces::msg::BridgeRobotStatus::_dt_can_tx_wheel_type arg)
  {
    msg_.dt_can_tx_wheel = std::move(arg);
    return Init_BridgeRobotStatus_dt_can_tx_turret(msg_);
  }

private:
  ::ros2_interfaces::msg::BridgeRobotStatus msg_;
};

class Init_BridgeRobotStatus_dt_can_tx_joint
{
public:
  explicit Init_BridgeRobotStatus_dt_can_tx_joint(::ros2_interfaces::msg::BridgeRobotStatus & msg)
  : msg_(msg)
  {}
  Init_BridgeRobotStatus_dt_can_tx_wheel dt_can_tx_joint(::ros2_interfaces::msg::BridgeRobotStatus::_dt_can_tx_joint_type arg)
  {
    msg_.dt_can_tx_joint = std::move(arg);
    return Init_BridgeRobotStatus_dt_can_tx_wheel(msg_);
  }

private:
  ::ros2_interfaces::msg::BridgeRobotStatus msg_;
};

class Init_BridgeRobotStatus_dt_can_tx
{
public:
  explicit Init_BridgeRobotStatus_dt_can_tx(::ros2_interfaces::msg::BridgeRobotStatus & msg)
  : msg_(msg)
  {}
  Init_BridgeRobotStatus_dt_can_tx_joint dt_can_tx(::ros2_interfaces::msg::BridgeRobotStatus::_dt_can_tx_type arg)
  {
    msg_.dt_can_tx = std::move(arg);
    return Init_BridgeRobotStatus_dt_can_tx_joint(msg_);
  }

private:
  ::ros2_interfaces::msg::BridgeRobotStatus msg_;
};

class Init_BridgeRobotStatus_header
{
public:
  Init_BridgeRobotStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BridgeRobotStatus_dt_can_tx header(::ros2_interfaces::msg::BridgeRobotStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_BridgeRobotStatus_dt_can_tx(msg_);
  }

private:
  ::ros2_interfaces::msg::BridgeRobotStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interfaces::msg::BridgeRobotStatus>()
{
  return ros2_interfaces::msg::builder::Init_BridgeRobotStatus_header();
}

}  // namespace ros2_interfaces

#endif  // ROS2_INTERFACES__MSG__DETAIL__BRIDGE_ROBOT_STATUS__BUILDER_HPP_
