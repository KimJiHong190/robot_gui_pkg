// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from robot_interfaces:msg/BridgeCurrent.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "robot_interfaces/msg/detail/bridge_current__struct.hpp"
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

void BridgeCurrent_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) robot_interfaces::msg::BridgeCurrent(_init);
}

void BridgeCurrent_fini_function(void * message_memory)
{
  auto typed_message = static_cast<robot_interfaces::msg::BridgeCurrent *>(message_memory);
  typed_message->~BridgeCurrent();
}

size_t size_function__BridgeCurrent__anchor_fix_current(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__BridgeCurrent__anchor_fix_current(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__BridgeCurrent__anchor_fix_current(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__BridgeCurrent__anchor_fix_current(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__BridgeCurrent__anchor_fix_current(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__BridgeCurrent__anchor_fix_current(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__BridgeCurrent__anchor_fix_current(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__BridgeCurrent__anchor_fix_current(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__BridgeCurrent__anchor_move_current(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__BridgeCurrent__anchor_move_current(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__BridgeCurrent__anchor_move_current(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__BridgeCurrent__anchor_move_current(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__BridgeCurrent__anchor_move_current(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__BridgeCurrent__anchor_move_current(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__BridgeCurrent__anchor_move_current(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__BridgeCurrent__anchor_move_current(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__BridgeCurrent__ascender_motor_current(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__BridgeCurrent__ascender_motor_current(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__BridgeCurrent__ascender_motor_current(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__BridgeCurrent__ascender_motor_current(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__BridgeCurrent__ascender_motor_current(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__BridgeCurrent__ascender_motor_current(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__BridgeCurrent__ascender_motor_current(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__BridgeCurrent__ascender_motor_current(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__BridgeCurrent__wheelleg_joint_current(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__BridgeCurrent__wheelleg_joint_current(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__BridgeCurrent__wheelleg_joint_current(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__BridgeCurrent__wheelleg_joint_current(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__BridgeCurrent__wheelleg_joint_current(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__BridgeCurrent__wheelleg_joint_current(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__BridgeCurrent__wheelleg_joint_current(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__BridgeCurrent__wheelleg_joint_current(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__BridgeCurrent__wheelleg_turret_current(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__BridgeCurrent__wheelleg_turret_current(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__BridgeCurrent__wheelleg_turret_current(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__BridgeCurrent__wheelleg_turret_current(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__BridgeCurrent__wheelleg_turret_current(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__BridgeCurrent__wheelleg_turret_current(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__BridgeCurrent__wheelleg_turret_current(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__BridgeCurrent__wheelleg_turret_current(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__BridgeCurrent__wheelleg_wheel_current(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__BridgeCurrent__wheelleg_wheel_current(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__BridgeCurrent__wheelleg_wheel_current(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__BridgeCurrent__wheelleg_wheel_current(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__BridgeCurrent__wheelleg_wheel_current(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__BridgeCurrent__wheelleg_wheel_current(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__BridgeCurrent__wheelleg_wheel_current(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__BridgeCurrent__wheelleg_wheel_current(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember BridgeCurrent_message_member_array[10] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_interfaces::msg::BridgeCurrent, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "anchor_fix_current",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_interfaces::msg::BridgeCurrent, anchor_fix_current),  // bytes offset in struct
    nullptr,  // default value
    size_function__BridgeCurrent__anchor_fix_current,  // size() function pointer
    get_const_function__BridgeCurrent__anchor_fix_current,  // get_const(index) function pointer
    get_function__BridgeCurrent__anchor_fix_current,  // get(index) function pointer
    fetch_function__BridgeCurrent__anchor_fix_current,  // fetch(index, &value) function pointer
    assign_function__BridgeCurrent__anchor_fix_current,  // assign(index, value) function pointer
    resize_function__BridgeCurrent__anchor_fix_current  // resize(index) function pointer
  },
  {
    "anchor_move_current",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_interfaces::msg::BridgeCurrent, anchor_move_current),  // bytes offset in struct
    nullptr,  // default value
    size_function__BridgeCurrent__anchor_move_current,  // size() function pointer
    get_const_function__BridgeCurrent__anchor_move_current,  // get_const(index) function pointer
    get_function__BridgeCurrent__anchor_move_current,  // get(index) function pointer
    fetch_function__BridgeCurrent__anchor_move_current,  // fetch(index, &value) function pointer
    assign_function__BridgeCurrent__anchor_move_current,  // assign(index, value) function pointer
    resize_function__BridgeCurrent__anchor_move_current  // resize(index) function pointer
  },
  {
    "ascender_motor_current",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_interfaces::msg::BridgeCurrent, ascender_motor_current),  // bytes offset in struct
    nullptr,  // default value
    size_function__BridgeCurrent__ascender_motor_current,  // size() function pointer
    get_const_function__BridgeCurrent__ascender_motor_current,  // get_const(index) function pointer
    get_function__BridgeCurrent__ascender_motor_current,  // get(index) function pointer
    fetch_function__BridgeCurrent__ascender_motor_current,  // fetch(index, &value) function pointer
    assign_function__BridgeCurrent__ascender_motor_current,  // assign(index, value) function pointer
    resize_function__BridgeCurrent__ascender_motor_current  // resize(index) function pointer
  },
  {
    "wheelleg_joint_current",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_interfaces::msg::BridgeCurrent, wheelleg_joint_current),  // bytes offset in struct
    nullptr,  // default value
    size_function__BridgeCurrent__wheelleg_joint_current,  // size() function pointer
    get_const_function__BridgeCurrent__wheelleg_joint_current,  // get_const(index) function pointer
    get_function__BridgeCurrent__wheelleg_joint_current,  // get(index) function pointer
    fetch_function__BridgeCurrent__wheelleg_joint_current,  // fetch(index, &value) function pointer
    assign_function__BridgeCurrent__wheelleg_joint_current,  // assign(index, value) function pointer
    resize_function__BridgeCurrent__wheelleg_joint_current  // resize(index) function pointer
  },
  {
    "wheelleg_turret_current",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_interfaces::msg::BridgeCurrent, wheelleg_turret_current),  // bytes offset in struct
    nullptr,  // default value
    size_function__BridgeCurrent__wheelleg_turret_current,  // size() function pointer
    get_const_function__BridgeCurrent__wheelleg_turret_current,  // get_const(index) function pointer
    get_function__BridgeCurrent__wheelleg_turret_current,  // get(index) function pointer
    fetch_function__BridgeCurrent__wheelleg_turret_current,  // fetch(index, &value) function pointer
    assign_function__BridgeCurrent__wheelleg_turret_current,  // assign(index, value) function pointer
    resize_function__BridgeCurrent__wheelleg_turret_current  // resize(index) function pointer
  },
  {
    "wheelleg_wheel_current",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_interfaces::msg::BridgeCurrent, wheelleg_wheel_current),  // bytes offset in struct
    nullptr,  // default value
    size_function__BridgeCurrent__wheelleg_wheel_current,  // size() function pointer
    get_const_function__BridgeCurrent__wheelleg_wheel_current,  // get_const(index) function pointer
    get_function__BridgeCurrent__wheelleg_wheel_current,  // get(index) function pointer
    fetch_function__BridgeCurrent__wheelleg_wheel_current,  // fetch(index, &value) function pointer
    assign_function__BridgeCurrent__wheelleg_wheel_current,  // assign(index, value) function pointer
    resize_function__BridgeCurrent__wheelleg_wheel_current  // resize(index) function pointer
  },
  {
    "anchor_current_sum",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_interfaces::msg::BridgeCurrent, anchor_current_sum),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "ascender_current_sum",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_interfaces::msg::BridgeCurrent, ascender_current_sum),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "wheelleg_current_sum",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_interfaces::msg::BridgeCurrent, wheelleg_current_sum),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers BridgeCurrent_message_members = {
  "robot_interfaces::msg",  // message namespace
  "BridgeCurrent",  // message name
  10,  // number of fields
  sizeof(robot_interfaces::msg::BridgeCurrent),
  BridgeCurrent_message_member_array,  // message members
  BridgeCurrent_init_function,  // function to initialize message memory (memory has to be allocated)
  BridgeCurrent_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t BridgeCurrent_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &BridgeCurrent_message_members,
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
get_message_type_support_handle<robot_interfaces::msg::BridgeCurrent>()
{
  return &::robot_interfaces::msg::rosidl_typesupport_introspection_cpp::BridgeCurrent_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robot_interfaces, msg, BridgeCurrent)() {
  return &::robot_interfaces::msg::rosidl_typesupport_introspection_cpp::BridgeCurrent_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
