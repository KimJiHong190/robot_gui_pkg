// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robot_interfaces:msg/BridgeDt.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_INTERFACES__MSG__DETAIL__BRIDGE_DT__BUILDER_HPP_
#define ROBOT_INTERFACES__MSG__DETAIL__BRIDGE_DT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robot_interfaces/msg/detail/bridge_dt__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robot_interfaces
{

namespace msg
{

namespace builder
{

class Init_BridgeDt_dt_mean_can_rx
{
public:
  explicit Init_BridgeDt_dt_mean_can_rx(::robot_interfaces::msg::BridgeDt & msg)
  : msg_(msg)
  {}
  ::robot_interfaces::msg::BridgeDt dt_mean_can_rx(::robot_interfaces::msg::BridgeDt::_dt_mean_can_rx_type arg)
  {
    msg_.dt_mean_can_rx = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_interfaces::msg::BridgeDt msg_;
};

class Init_BridgeDt_dt_mean_can_tx_turret
{
public:
  explicit Init_BridgeDt_dt_mean_can_tx_turret(::robot_interfaces::msg::BridgeDt & msg)
  : msg_(msg)
  {}
  Init_BridgeDt_dt_mean_can_rx dt_mean_can_tx_turret(::robot_interfaces::msg::BridgeDt::_dt_mean_can_tx_turret_type arg)
  {
    msg_.dt_mean_can_tx_turret = std::move(arg);
    return Init_BridgeDt_dt_mean_can_rx(msg_);
  }

private:
  ::robot_interfaces::msg::BridgeDt msg_;
};

class Init_BridgeDt_dt_mean_can_tx_wheel
{
public:
  explicit Init_BridgeDt_dt_mean_can_tx_wheel(::robot_interfaces::msg::BridgeDt & msg)
  : msg_(msg)
  {}
  Init_BridgeDt_dt_mean_can_tx_turret dt_mean_can_tx_wheel(::robot_interfaces::msg::BridgeDt::_dt_mean_can_tx_wheel_type arg)
  {
    msg_.dt_mean_can_tx_wheel = std::move(arg);
    return Init_BridgeDt_dt_mean_can_tx_turret(msg_);
  }

private:
  ::robot_interfaces::msg::BridgeDt msg_;
};

class Init_BridgeDt_dt_mean_can_tx_joint
{
public:
  explicit Init_BridgeDt_dt_mean_can_tx_joint(::robot_interfaces::msg::BridgeDt & msg)
  : msg_(msg)
  {}
  Init_BridgeDt_dt_mean_can_tx_wheel dt_mean_can_tx_joint(::robot_interfaces::msg::BridgeDt::_dt_mean_can_tx_joint_type arg)
  {
    msg_.dt_mean_can_tx_joint = std::move(arg);
    return Init_BridgeDt_dt_mean_can_tx_wheel(msg_);
  }

private:
  ::robot_interfaces::msg::BridgeDt msg_;
};

class Init_BridgeDt_dt_mean_can_tx
{
public:
  explicit Init_BridgeDt_dt_mean_can_tx(::robot_interfaces::msg::BridgeDt & msg)
  : msg_(msg)
  {}
  Init_BridgeDt_dt_mean_can_tx_joint dt_mean_can_tx(::robot_interfaces::msg::BridgeDt::_dt_mean_can_tx_type arg)
  {
    msg_.dt_mean_can_tx = std::move(arg);
    return Init_BridgeDt_dt_mean_can_tx_joint(msg_);
  }

private:
  ::robot_interfaces::msg::BridgeDt msg_;
};

class Init_BridgeDt_dt_can_rx
{
public:
  explicit Init_BridgeDt_dt_can_rx(::robot_interfaces::msg::BridgeDt & msg)
  : msg_(msg)
  {}
  Init_BridgeDt_dt_mean_can_tx dt_can_rx(::robot_interfaces::msg::BridgeDt::_dt_can_rx_type arg)
  {
    msg_.dt_can_rx = std::move(arg);
    return Init_BridgeDt_dt_mean_can_tx(msg_);
  }

private:
  ::robot_interfaces::msg::BridgeDt msg_;
};

class Init_BridgeDt_dt_can_tx_turret
{
public:
  explicit Init_BridgeDt_dt_can_tx_turret(::robot_interfaces::msg::BridgeDt & msg)
  : msg_(msg)
  {}
  Init_BridgeDt_dt_can_rx dt_can_tx_turret(::robot_interfaces::msg::BridgeDt::_dt_can_tx_turret_type arg)
  {
    msg_.dt_can_tx_turret = std::move(arg);
    return Init_BridgeDt_dt_can_rx(msg_);
  }

private:
  ::robot_interfaces::msg::BridgeDt msg_;
};

class Init_BridgeDt_dt_can_tx_wheel
{
public:
  explicit Init_BridgeDt_dt_can_tx_wheel(::robot_interfaces::msg::BridgeDt & msg)
  : msg_(msg)
  {}
  Init_BridgeDt_dt_can_tx_turret dt_can_tx_wheel(::robot_interfaces::msg::BridgeDt::_dt_can_tx_wheel_type arg)
  {
    msg_.dt_can_tx_wheel = std::move(arg);
    return Init_BridgeDt_dt_can_tx_turret(msg_);
  }

private:
  ::robot_interfaces::msg::BridgeDt msg_;
};

class Init_BridgeDt_dt_can_tx_joint
{
public:
  explicit Init_BridgeDt_dt_can_tx_joint(::robot_interfaces::msg::BridgeDt & msg)
  : msg_(msg)
  {}
  Init_BridgeDt_dt_can_tx_wheel dt_can_tx_joint(::robot_interfaces::msg::BridgeDt::_dt_can_tx_joint_type arg)
  {
    msg_.dt_can_tx_joint = std::move(arg);
    return Init_BridgeDt_dt_can_tx_wheel(msg_);
  }

private:
  ::robot_interfaces::msg::BridgeDt msg_;
};

class Init_BridgeDt_dt_can_tx
{
public:
  explicit Init_BridgeDt_dt_can_tx(::robot_interfaces::msg::BridgeDt & msg)
  : msg_(msg)
  {}
  Init_BridgeDt_dt_can_tx_joint dt_can_tx(::robot_interfaces::msg::BridgeDt::_dt_can_tx_type arg)
  {
    msg_.dt_can_tx = std::move(arg);
    return Init_BridgeDt_dt_can_tx_joint(msg_);
  }

private:
  ::robot_interfaces::msg::BridgeDt msg_;
};

class Init_BridgeDt_header
{
public:
  Init_BridgeDt_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BridgeDt_dt_can_tx header(::robot_interfaces::msg::BridgeDt::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_BridgeDt_dt_can_tx(msg_);
  }

private:
  ::robot_interfaces::msg::BridgeDt msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_interfaces::msg::BridgeDt>()
{
  return robot_interfaces::msg::builder::Init_BridgeDt_header();
}

}  // namespace robot_interfaces

#endif  // ROBOT_INTERFACES__MSG__DETAIL__BRIDGE_DT__BUILDER_HPP_
