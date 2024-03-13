// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robot_interfaces:msg/BridgeStringMultiArray.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_INTERFACES__MSG__DETAIL__BRIDGE_STRING_MULTI_ARRAY__BUILDER_HPP_
#define ROBOT_INTERFACES__MSG__DETAIL__BRIDGE_STRING_MULTI_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robot_interfaces/msg/detail/bridge_string_multi_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robot_interfaces
{

namespace msg
{

namespace builder
{

class Init_BridgeStringMultiArray_string_values
{
public:
  explicit Init_BridgeStringMultiArray_string_values(::robot_interfaces::msg::BridgeStringMultiArray & msg)
  : msg_(msg)
  {}
  ::robot_interfaces::msg::BridgeStringMultiArray string_values(::robot_interfaces::msg::BridgeStringMultiArray::_string_values_type arg)
  {
    msg_.string_values = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_interfaces::msg::BridgeStringMultiArray msg_;
};

class Init_BridgeStringMultiArray_name
{
public:
  explicit Init_BridgeStringMultiArray_name(::robot_interfaces::msg::BridgeStringMultiArray & msg)
  : msg_(msg)
  {}
  Init_BridgeStringMultiArray_string_values name(::robot_interfaces::msg::BridgeStringMultiArray::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_BridgeStringMultiArray_string_values(msg_);
  }

private:
  ::robot_interfaces::msg::BridgeStringMultiArray msg_;
};

class Init_BridgeStringMultiArray_header
{
public:
  Init_BridgeStringMultiArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BridgeStringMultiArray_name header(::robot_interfaces::msg::BridgeStringMultiArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_BridgeStringMultiArray_name(msg_);
  }

private:
  ::robot_interfaces::msg::BridgeStringMultiArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_interfaces::msg::BridgeStringMultiArray>()
{
  return robot_interfaces::msg::builder::Init_BridgeStringMultiArray_header();
}

}  // namespace robot_interfaces

#endif  // ROBOT_INTERFACES__MSG__DETAIL__BRIDGE_STRING_MULTI_ARRAY__BUILDER_HPP_
