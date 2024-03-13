// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from robot_interfaces:msg/BridgeFloat32MultiArray.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "robot_interfaces/msg/detail/bridge_float32_multi_array__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace robot_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void BridgeFloat32MultiArray_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) robot_interfaces::msg::BridgeFloat32MultiArray(_init);
}

void BridgeFloat32MultiArray_fini_function(void * message_memory)
{
  auto typed_message = static_cast<robot_interfaces::msg::BridgeFloat32MultiArray *>(message_memory);
  typed_message->~BridgeFloat32MultiArray();
}

size_t size_function__BridgeFloat32MultiArray__name(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__BridgeFloat32MultiArray__name(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__BridgeFloat32MultiArray__name(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__BridgeFloat32MultiArray__name(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__BridgeFloat32MultiArray__name(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__BridgeFloat32MultiArray__name(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__BridgeFloat32MultiArray__name(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__BridgeFloat32MultiArray__name(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__BridgeFloat32MultiArray__float_values(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__BridgeFloat32MultiArray__float_values(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__BridgeFloat32MultiArray__float_values(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__BridgeFloat32MultiArray__float_values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__BridgeFloat32MultiArray__float_values(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__BridgeFloat32MultiArray__float_values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__BridgeFloat32MultiArray__float_values(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__BridgeFloat32MultiArray__float_values(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember BridgeFloat32MultiArray_message_member_array[3] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_interfaces::msg::BridgeFloat32MultiArray, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_interfaces::msg::BridgeFloat32MultiArray, name),  // bytes offset in struct
    nullptr,  // default value
    size_function__BridgeFloat32MultiArray__name,  // size() function pointer
    get_const_function__BridgeFloat32MultiArray__name,  // get_const(index) function pointer
    get_function__BridgeFloat32MultiArray__name,  // get(index) function pointer
    fetch_function__BridgeFloat32MultiArray__name,  // fetch(index, &value) function pointer
    assign_function__BridgeFloat32MultiArray__name,  // assign(index, value) function pointer
    resize_function__BridgeFloat32MultiArray__name  // resize(index) function pointer
  },
  {
    "float_values",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_interfaces::msg::BridgeFloat32MultiArray, float_values),  // bytes offset in struct
    nullptr,  // default value
    size_function__BridgeFloat32MultiArray__float_values,  // size() function pointer
    get_const_function__BridgeFloat32MultiArray__float_values,  // get_const(index) function pointer
    get_function__BridgeFloat32MultiArray__float_values,  // get(index) function pointer
    fetch_function__BridgeFloat32MultiArray__float_values,  // fetch(index, &value) function pointer
    assign_function__BridgeFloat32MultiArray__float_values,  // assign(index, value) function pointer
    resize_function__BridgeFloat32MultiArray__float_values  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers BridgeFloat32MultiArray_message_members = {
  "robot_interfaces::msg",  // message namespace
  "BridgeFloat32MultiArray",  // message name
  3,  // number of fields
  sizeof(robot_interfaces::msg::BridgeFloat32MultiArray),
  BridgeFloat32MultiArray_message_member_array,  // message members
  BridgeFloat32MultiArray_init_function,  // function to initialize message memory (memory has to be allocated)
  BridgeFloat32MultiArray_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t BridgeFloat32MultiArray_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &BridgeFloat32MultiArray_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace robot_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robot_interfaces::msg::BridgeFloat32MultiArray>()
{
  return &::robot_interfaces::msg::rosidl_typesupport_introspection_cpp::BridgeFloat32MultiArray_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robot_interfaces, msg, BridgeFloat32MultiArray)() {
  return &::robot_interfaces::msg::rosidl_typesupport_introspection_cpp::BridgeFloat32MultiArray_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
