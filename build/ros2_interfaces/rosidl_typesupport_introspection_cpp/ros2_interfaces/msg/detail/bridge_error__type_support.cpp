// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from ros2_interfaces:msg/BridgeError.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "ros2_interfaces/msg/detail/bridge_error__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace ros2_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void BridgeError_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ros2_interfaces::msg::BridgeError(_init);
}

void BridgeError_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ros2_interfaces::msg::BridgeError *>(message_memory);
  typed_message->~BridgeError();
}

size_t size_function__BridgeError__error_joint_stuck(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int64_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__BridgeError__error_joint_stuck(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int64_t> *>(untyped_member);
  return &member[index];
}

void * get_function__BridgeError__error_joint_stuck(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int64_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__BridgeError__error_joint_stuck(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int64_t *>(
    get_const_function__BridgeError__error_joint_stuck(untyped_member, index));
  auto & value = *reinterpret_cast<int64_t *>(untyped_value);
  value = item;
}

void assign_function__BridgeError__error_joint_stuck(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int64_t *>(
    get_function__BridgeError__error_joint_stuck(untyped_member, index));
  const auto & value = *reinterpret_cast<const int64_t *>(untyped_value);
  item = value;
}

void resize_function__BridgeError__error_joint_stuck(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int64_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__BridgeError__is_error_over_current(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int64_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__BridgeError__is_error_over_current(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int64_t> *>(untyped_member);
  return &member[index];
}

void * get_function__BridgeError__is_error_over_current(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int64_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__BridgeError__is_error_over_current(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int64_t *>(
    get_const_function__BridgeError__is_error_over_current(untyped_member, index));
  auto & value = *reinterpret_cast<int64_t *>(untyped_value);
  value = item;
}

void assign_function__BridgeError__is_error_over_current(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int64_t *>(
    get_function__BridgeError__is_error_over_current(untyped_member, index));
  const auto & value = *reinterpret_cast<const int64_t *>(untyped_value);
  item = value;
}

void resize_function__BridgeError__is_error_over_current(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int64_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__BridgeError__is_error_over_range(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int64_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__BridgeError__is_error_over_range(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int64_t> *>(untyped_member);
  return &member[index];
}

void * get_function__BridgeError__is_error_over_range(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int64_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__BridgeError__is_error_over_range(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int64_t *>(
    get_const_function__BridgeError__is_error_over_range(untyped_member, index));
  auto & value = *reinterpret_cast<int64_t *>(untyped_value);
  value = item;
}

void assign_function__BridgeError__is_error_over_range(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int64_t *>(
    get_function__BridgeError__is_error_over_range(untyped_member, index));
  const auto & value = *reinterpret_cast<const int64_t *>(untyped_value);
  item = value;
}

void resize_function__BridgeError__is_error_over_range(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int64_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember BridgeError_message_member_array[5] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interfaces::msg::BridgeError, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "error_can",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interfaces::msg::BridgeError, error_can),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "error_joint_stuck",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interfaces::msg::BridgeError, error_joint_stuck),  // bytes offset in struct
    nullptr,  // default value
    size_function__BridgeError__error_joint_stuck,  // size() function pointer
    get_const_function__BridgeError__error_joint_stuck,  // get_const(index) function pointer
    get_function__BridgeError__error_joint_stuck,  // get(index) function pointer
    fetch_function__BridgeError__error_joint_stuck,  // fetch(index, &value) function pointer
    assign_function__BridgeError__error_joint_stuck,  // assign(index, value) function pointer
    resize_function__BridgeError__error_joint_stuck  // resize(index) function pointer
  },
  {
    "is_error_over_current",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interfaces::msg::BridgeError, is_error_over_current),  // bytes offset in struct
    nullptr,  // default value
    size_function__BridgeError__is_error_over_current,  // size() function pointer
    get_const_function__BridgeError__is_error_over_current,  // get_const(index) function pointer
    get_function__BridgeError__is_error_over_current,  // get(index) function pointer
    fetch_function__BridgeError__is_error_over_current,  // fetch(index, &value) function pointer
    assign_function__BridgeError__is_error_over_current,  // assign(index, value) function pointer
    resize_function__BridgeError__is_error_over_current  // resize(index) function pointer
  },
  {
    "is_error_over_range",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interfaces::msg::BridgeError, is_error_over_range),  // bytes offset in struct
    nullptr,  // default value
    size_function__BridgeError__is_error_over_range,  // size() function pointer
    get_const_function__BridgeError__is_error_over_range,  // get_const(index) function pointer
    get_function__BridgeError__is_error_over_range,  // get(index) function pointer
    fetch_function__BridgeError__is_error_over_range,  // fetch(index, &value) function pointer
    assign_function__BridgeError__is_error_over_range,  // assign(index, value) function pointer
    resize_function__BridgeError__is_error_over_range  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers BridgeError_message_members = {
  "ros2_interfaces::msg",  // message namespace
  "BridgeError",  // message name
  5,  // number of fields
  sizeof(ros2_interfaces::msg::BridgeError),
  BridgeError_message_member_array,  // message members
  BridgeError_init_function,  // function to initialize message memory (memory has to be allocated)
  BridgeError_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t BridgeError_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &BridgeError_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace ros2_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ros2_interfaces::msg::BridgeError>()
{
  return &::ros2_interfaces::msg::rosidl_typesupport_introspection_cpp::BridgeError_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ros2_interfaces, msg, BridgeError)() {
  return &::ros2_interfaces::msg::rosidl_typesupport_introspection_cpp::BridgeError_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
