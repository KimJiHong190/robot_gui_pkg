// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robot_interfaces:msg/BridgeBoolMultiArray.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_INTERFACES__MSG__DETAIL__BRIDGE_BOOL_MULTI_ARRAY__BUILDER_HPP_
#define ROBOT_INTERFACES__MSG__DETAIL__BRIDGE_BOOL_MULTI_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robot_interfaces/msg/detail/bridge_bool_multi_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robot_interfaces
{

namespace msg
{

namespace builder
{

class Init_BridgeBoolMultiArray_bool_values
{
public:
  explicit Init_BridgeBoolMultiArray_bool_values(::robot_interfaces::msg::BridgeBoolMultiArray & msg)
  : msg_(msg)
  {}
  ::robot_interfaces::msg::BridgeBoolMultiArray bool_values(::robot_interfaces::msg::BridgeBoolMultiArray::_bool_values_type arg)
  {
    msg_.bool_values = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_interfaces::msg::BridgeBoolMultiArray msg_;
};

class Init_BridgeBoolMultiArray_name
{
public:
  explicit Init_BridgeBoolMultiArray_name(::robot_interfaces::msg::BridgeBoolMultiArray & msg)
  : msg_(msg)
  {}
  Init_BridgeBoolMultiArray_bool_values name(::robot_interfaces::msg::BridgeBoolMultiArray::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_BridgeBoolMultiArray_bool_values(msg_);
  }

private:
  ::robot_interfaces::msg::BridgeBoolMultiArray msg_;
};

class Init_BridgeBoolMultiArray_header
{
public:
  Init_BridgeBoolMultiArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BridgeBoolMultiArray_name header(::robot_interfaces::msg::BridgeBoolMultiArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_BridgeBoolMultiArray_name(msg_);
  }

private:
  ::robot_interfaces::msg::BridgeBoolMultiArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_interfaces::msg::BridgeBoolMultiArray>()
{
  return robot_interfaces::msg::builder::Init_BridgeBoolMultiArray_header();
}

}  // namespace robot_interfaces

#endif  // ROBOT_INTERFACES__MSG__DETAIL__BRIDGE_BOOL_MULTI_ARRAY__BUILDER_HPP_
