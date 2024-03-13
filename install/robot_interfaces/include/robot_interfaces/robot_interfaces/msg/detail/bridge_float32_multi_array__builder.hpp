// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robot_interfaces:msg/BridgeFloat32MultiArray.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_INTERFACES__MSG__DETAIL__BRIDGE_FLOAT32_MULTI_ARRAY__BUILDER_HPP_
#define ROBOT_INTERFACES__MSG__DETAIL__BRIDGE_FLOAT32_MULTI_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robot_interfaces/msg/detail/bridge_float32_multi_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robot_interfaces
{

namespace msg
{

namespace builder
{

class Init_BridgeFloat32MultiArray_float_values
{
public:
  explicit Init_BridgeFloat32MultiArray_float_values(::robot_interfaces::msg::BridgeFloat32MultiArray & msg)
  : msg_(msg)
  {}
  ::robot_interfaces::msg::BridgeFloat32MultiArray float_values(::robot_interfaces::msg::BridgeFloat32MultiArray::_float_values_type arg)
  {
    msg_.float_values = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_interfaces::msg::BridgeFloat32MultiArray msg_;
};

class Init_BridgeFloat32MultiArray_name
{
public:
  explicit Init_BridgeFloat32MultiArray_name(::robot_interfaces::msg::BridgeFloat32MultiArray & msg)
  : msg_(msg)
  {}
  Init_BridgeFloat32MultiArray_float_values name(::robot_interfaces::msg::BridgeFloat32MultiArray::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_BridgeFloat32MultiArray_float_values(msg_);
  }

private:
  ::robot_interfaces::msg::BridgeFloat32MultiArray msg_;
};

class Init_BridgeFloat32MultiArray_header
{
public:
  Init_BridgeFloat32MultiArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BridgeFloat32MultiArray_name header(::robot_interfaces::msg::BridgeFloat32MultiArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_BridgeFloat32MultiArray_name(msg_);
  }

private:
  ::robot_interfaces::msg::BridgeFloat32MultiArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_interfaces::msg::BridgeFloat32MultiArray>()
{
  return robot_interfaces::msg::builder::Init_BridgeFloat32MultiArray_header();
}

}  // namespace robot_interfaces

#endif  // ROBOT_INTERFACES__MSG__DETAIL__BRIDGE_FLOAT32_MULTI_ARRAY__BUILDER_HPP_
