// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interfaces:msg/BridgeBoolMultiArray.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACES__MSG__DETAIL__BRIDGE_BOOL_MULTI_ARRAY__BUILDER_HPP_
#define ROS2_INTERFACES__MSG__DETAIL__BRIDGE_BOOL_MULTI_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interfaces/msg/detail/bridge_bool_multi_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interfaces
{

namespace msg
{

namespace builder
{

class Init_BridgeBoolMultiArray_bool_values
{
public:
  explicit Init_BridgeBoolMultiArray_bool_values(::ros2_interfaces::msg::BridgeBoolMultiArray & msg)
  : msg_(msg)
  {}
  ::ros2_interfaces::msg::BridgeBoolMultiArray bool_values(::ros2_interfaces::msg::BridgeBoolMultiArray::_bool_values_type arg)
  {
    msg_.bool_values = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interfaces::msg::BridgeBoolMultiArray msg_;
};

class Init_BridgeBoolMultiArray_name
{
public:
  explicit Init_BridgeBoolMultiArray_name(::ros2_interfaces::msg::BridgeBoolMultiArray & msg)
  : msg_(msg)
  {}
  Init_BridgeBoolMultiArray_bool_values name(::ros2_interfaces::msg::BridgeBoolMultiArray::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_BridgeBoolMultiArray_bool_values(msg_);
  }

private:
  ::ros2_interfaces::msg::BridgeBoolMultiArray msg_;
};

class Init_BridgeBoolMultiArray_header
{
public:
  Init_BridgeBoolMultiArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BridgeBoolMultiArray_name header(::ros2_interfaces::msg::BridgeBoolMultiArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_BridgeBoolMultiArray_name(msg_);
  }

private:
  ::ros2_interfaces::msg::BridgeBoolMultiArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interfaces::msg::BridgeBoolMultiArray>()
{
  return ros2_interfaces::msg::builder::Init_BridgeBoolMultiArray_header();
}

}  // namespace ros2_interfaces

#endif  // ROS2_INTERFACES__MSG__DETAIL__BRIDGE_BOOL_MULTI_ARRAY__BUILDER_HPP_
