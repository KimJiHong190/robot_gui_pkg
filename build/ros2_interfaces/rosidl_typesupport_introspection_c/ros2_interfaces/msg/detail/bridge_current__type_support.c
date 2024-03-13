// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ros2_interfaces:msg/BridgeCurrent.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ros2_interfaces/msg/detail/bridge_current__rosidl_typesupport_introspection_c.h"
#include "ros2_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ros2_interfaces/msg/detail/bridge_current__functions.h"
#include "ros2_interfaces/msg/detail/bridge_current__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `anchor_fix_current`
// Member `anchor_move_current`
// Member `ascender_motor_current`
// Member `wheelleg_joint_current`
// Member `wheelleg_turret_current`
// Member `wheelleg_wheel_current`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ros2_interfaces__msg__BridgeCurrent__rosidl_typesupport_introspection_c__BridgeCurrent_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros2_interfaces__msg__BridgeCurrent__init(message_memory);
}

void ros2_interfaces__msg__BridgeCurrent__rosidl_typesupport_introspection_c__BridgeCurrent_fini_function(void * message_memory)
{
  ros2_interfaces__msg__BridgeCurrent__fini(message_memory);
}

size_t ros2_interfaces__msg__BridgeCurrent__rosidl_typesupport_introspection_c__size_function__BridgeCurrent__anchor_fix_current(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * ros2_interfaces__msg__BridgeCurrent__rosidl_typesupport_introspection_c__get_const_function__BridgeCurrent__anchor_fix_current(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros2_interfaces__msg__BridgeCurrent__rosidl_typesupport_introspection_c__get_function__BridgeCurrent__anchor_fix_current(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros2_interfaces__msg__BridgeCurrent__rosidl_typesupport_introspection_c__fetch_function__BridgeCurrent__anchor_fix_current(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    ros2_interfaces__msg__BridgeCurrent__rosidl_typesupport_introspection_c__get_const_function__BridgeCurrent__anchor_fix_current(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void ros2_interfaces__msg__BridgeCurrent__rosidl_typesupport_introspection_c__assign_function__BridgeCurrent__anchor_fix_current(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    ros2_interfaces__msg__BridgeCurrent__rosidl_typesupport_introspection_c__get_function__BridgeCurrent__anchor_fix_current(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool ros2_interfaces__msg__BridgeCurrent__rosidl_typesupport_introspection_c__resize_function__BridgeCurrent__anchor_fix_current(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t ros2_interfaces__msg__BridgeCurrent__rosidl_typesupport_introspection_c__size_function__BridgeCurrent__anchor_move_current(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * ros2_interfaces__msg__BridgeCurrent__rosidl_typesupport_introspection_c__get_const_function__BridgeCurrent__anchor_move_current(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros2_interfaces__msg__BridgeCurrent__rosidl_typesupport_introspection_c__get_function__BridgeCurrent__anchor_move_current(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros2_interfaces__msg__BridgeCurrent__rosidl_typesupport_introspection_c__fetch_function__BridgeCurrent__anchor_move_current(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    ros2_interfaces__msg__BridgeCurrent__rosidl_typesupport_introspection_c__get_const_function__BridgeCurrent__anchor_move_current(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void ros2_interfaces__msg__BridgeCurrent__rosidl_typesupport_introspection_c__assign_function__BridgeCurrent__anchor_move_current(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    ros2_interfaces__msg__BridgeCurrent__rosidl_typesupport_introspection_c__get_function__BridgeCurrent__anchor_move_current(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool ros2_interfaces__msg__BridgeCurrent__rosidl_typesupport_introspection_c__resize_function__BridgeCurrent__anchor_move_current(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t ros2_interfaces__msg__BridgeCurrent__rosidl_typesupport_introspection_c__size_function__BridgeCurrent__ascender_motor_current(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * ros2_interfaces__msg__BridgeCurrent__rosidl_typesupport_introspection_c__get_const_function__BridgeCurrent__ascender_motor_current(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros2_interfaces__msg__BridgeCurrent__rosidl_typesupport_introspection_c__get_function__BridgeCurrent__ascender_motor_current(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros2_interfaces__msg__BridgeCurrent__rosidl_typesupport_introspection_c__fetch_function__BridgeCurrent__ascender_motor_current(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    ros2_interfaces__msg__BridgeCurrent__rosidl_typesupport_introspection_c__get_const_function__BridgeCurrent__ascender_motor_current(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void ros2_interfaces__msg__BridgeCurrent__rosidl_typesupport_introspection_c__assign_function__BridgeCurrent__ascender_motor_current(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    ros2_interfaces__msg__BridgeCurrent__rosidl_typesupport_introspection_c__get_function__BridgeCurrent__ascender_motor_current(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool ros2_interfaces__msg__BridgeCurrent__rosidl_typesupport_introspection_c__resize_function__BridgeCurrent__ascender_motor_current(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t ros2_interfaces__msg__BridgeCurrent__rosidl_typesupport_introspection_c__size_function__BridgeCurrent__wheelleg_joint_current(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * ros2_interfaces__msg__BridgeCurrent__rosidl_typesupport_introspection_c__get_const_function__BridgeCurrent__wheelleg_joint_current(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros2_interfaces__msg__BridgeCurrent__rosidl_typesupport_introspection_c__get_function__BridgeCurrent__wheelleg_joint_current(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros2_interfaces__msg__BridgeCurrent__rosidl_typesupport_introspection_c__fetch_function__BridgeCurrent__wheelleg_joint_current(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    ros2_interfaces__msg__BridgeCurrent__rosidl_typesupport_introspection_c__get_const_function__BridgeCurrent__wheelleg_joint_current(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void ros2_interfaces__msg__BridgeCurrent__rosidl_typesupport_introspection_c__assign_function__BridgeCurrent__wheelleg_joint_current(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    ros2_interfaces__msg__BridgeCurrent__rosidl_typesupport_introspection_c__get_function__BridgeCurrent__wheelleg_joint_current(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool ros2_interfaces__msg__BridgeCurrent__rosidl_typesupport_introspection_c__resize_function__BridgeCurrent__wheelleg_joint_current(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t ros2_interfaces__msg__BridgeCurrent__rosidl_typesupport_introspection_c__size_function__BridgeCurrent__wheelleg_turret_current(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * ros2_interfaces__msg__BridgeCurrent__rosidl_typesupport_introspection_c__get_const_function__BridgeCurrent__wheelleg_turret_current(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros2_interfaces__msg__BridgeCurrent__rosidl_typesupport_introspection_c__get_function__BridgeCurrent__wheelleg_turret_current(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros2_interfaces__msg__BridgeCurrent__rosidl_typesupport_introspection_c__fetch_function__BridgeCurrent__wheelleg_turret_current(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    ros2_interfaces__msg__BridgeCurrent__rosidl_typesupport_introspection_c__get_const_function__BridgeCurrent__wheelleg_turret_current(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void ros2_interfaces__msg__BridgeCurrent__rosidl_typesupport_introspection_c__assign_function__BridgeCurrent__wheelleg_turret_current(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    ros2_interfaces__msg__BridgeCurrent__rosidl_typesupport_introspection_c__get_function__BridgeCurrent__wheelleg_turret_current(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool ros2_interfaces__msg__BridgeCurrent__rosidl_typesupport_introspection_c__resize_function__BridgeCurrent__wheelleg_turret_current(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t ros2_interfaces__msg__BridgeCurrent__rosidl_typesupport_introspection_c__size_function__BridgeCurrent__wheelleg_wheel_current(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * ros2_interfaces__msg__BridgeCurrent__rosidl_typesupport_introspection_c__get_const_function__BridgeCurrent__wheelleg_wheel_current(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros2_interfaces__msg__BridgeCurrent__rosidl_typesupport_introspection_c__get_function__BridgeCurrent__wheelleg_wheel_current(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros2_interfaces__msg__BridgeCurrent__rosidl_typesupport_introspection_c__fetch_function__BridgeCurrent__wheelleg_wheel_current(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    ros2_interfaces__msg__BridgeCurrent__rosidl_typesupport_introspection_c__get_const_function__BridgeCurrent__wheelleg_wheel_current(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void ros2_interfaces__msg__BridgeCurrent__rosidl_typesupport_introspection_c__assign_function__BridgeCurrent__wheelleg_wheel_current(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    ros2_interfaces__msg__BridgeCurrent__rosidl_typesupport_introspection_c__get_function__BridgeCurrent__wheelleg_wheel_current(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool ros2_interfaces__msg__BridgeCurrent__rosidl_typesupport_introspection_c__resize_function__BridgeCurrent__wheelleg_wheel_current(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ros2_interfaces__msg__BridgeCurrent__rosidl_typesupport_introspection_c__BridgeCurrent_message_member_array[10] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interfaces__msg__BridgeCurrent, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "anchor_fix_current",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interfaces__msg__BridgeCurrent, anchor_fix_current),  // bytes offset in struct
    NULL,  // default value
    ros2_interfaces__msg__BridgeCurrent__rosidl_typesupport_introspection_c__size_function__BridgeCurrent__anchor_fix_current,  // size() function pointer
    ros2_interfaces__msg__BridgeCurrent__rosidl_typesupport_introspection_c__get_const_function__BridgeCurrent__anchor_fix_current,  // get_const(index) function pointer
    ros2_interfaces__msg__BridgeCurrent__rosidl_typesupport_introspection_c__get_function__BridgeCurrent__anchor_fix_current,  // get(index) function pointer
    ros2_interfaces__msg__BridgeCurrent__rosidl_typesupport_introspection_c__fetch_function__BridgeCurrent__anchor_fix_current,  // fetch(index, &value) function pointer
    ros2_interfaces__msg__BridgeCurrent__rosidl_typesupport_introspection_c__assign_function__BridgeCurrent__anchor_fix_current,  // assign(index, value) function pointer
    ros2_interfaces__msg__BridgeCurrent__rosidl_typesupport_introspection_c__resize_function__BridgeCurrent__anchor_fix_current  // resize(index) function pointer
  },
  {
    "anchor_move_current",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interfaces__msg__BridgeCurrent, anchor_move_current),  // bytes offset in struct
    NULL,  // default value
    ros2_interfaces__msg__BridgeCurrent__rosidl_typesupport_introspection_c__size_function__BridgeCurrent__anchor_move_current,  // size() function pointer
    ros2_interfaces__msg__BridgeCurrent__rosidl_typesupport_introspection_c__get_const_function__BridgeCurrent__anchor_move_current,  // get_const(index) function pointer
    ros2_interfaces__msg__BridgeCurrent__rosidl_typesupport_introspection_c__get_function__BridgeCurrent__anchor_move_current,  // get(index) function pointer
    ros2_interfaces__msg__BridgeCurrent__rosidl_typesupport_introspection_c__fetch_function__BridgeCurrent__anchor_move_current,  // fetch(index, &value) function pointer
    ros2_interfaces__msg__BridgeCurrent__rosidl_typesupport_introspection_c__assign_function__BridgeCurrent__anchor_move_current,  // assign(index, value) function pointer
    ros2_interfaces__msg__BridgeCurrent__rosidl_typesupport_introspection_c__resize_function__BridgeCurrent__anchor_move_current  // resize(index) function pointer
  },
  {
    "ascender_motor_current",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interfaces__msg__BridgeCurrent, ascender_motor_current),  // bytes offset in struct
    NULL,  // default value
    ros2_interfaces__msg__BridgeCurrent__rosidl_typesupport_introspection_c__size_function__BridgeCurrent__ascender_motor_current,  // size() function pointer
    ros2_interfaces__msg__BridgeCurrent__rosidl_typesupport_introspection_c__get_const_function__BridgeCurrent__ascender_motor_current,  // get_const(index) function pointer
    ros2_interfaces__msg__BridgeCurrent__rosidl_typesupport_introspection_c__get_function__BridgeCurrent__ascender_motor_current,  // get(index) function pointer
    ros2_interfaces__msg__BridgeCurrent__rosidl_typesupport_introspection_c__fetch_function__BridgeCurrent__ascender_motor_current,  // fetch(index, &value) function pointer
    ros2_interfaces__msg__BridgeCurrent__rosidl_typesupport_introspection_c__assign_function__BridgeCurrent__ascender_motor_current,  // assign(index, value) function pointer
    ros2_interfaces__msg__BridgeCurrent__rosidl_typesupport_introspection_c__resize_function__BridgeCurrent__ascender_motor_current  // resize(index) function pointer
  },
  {
    "wheelleg_joint_current",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interfaces__msg__BridgeCurrent, wheelleg_joint_current),  // bytes offset in struct
    NULL,  // default value
    ros2_interfaces__msg__BridgeCurrent__rosidl_typesupport_introspection_c__size_function__BridgeCurrent__wheelleg_joint_current,  // size() function pointer
    ros2_interfaces__msg__BridgeCurrent__rosidl_typesupport_introspection_c__get_const_function__BridgeCurrent__wheelleg_joint_current,  // get_const(index) function pointer
    ros2_interfaces__msg__BridgeCurrent__rosidl_typesupport_introspection_c__get_function__BridgeCurrent__wheelleg_joint_current,  // get(index) function pointer
    ros2_interfaces__msg__BridgeCurrent__rosidl_typesupport_introspection_c__fetch_function__BridgeCurrent__wheelleg_joint_current,  // fetch(index, &value) function pointer
    ros2_interfaces__msg__BridgeCurrent__rosidl_typesupport_introspection_c__assign_function__BridgeCurrent__wheelleg_joint_current,  // assign(index, value) function pointer
    ros2_interfaces__msg__BridgeCurrent__rosidl_typesupport_introspection_c__resize_function__BridgeCurrent__wheelleg_joint_current  // resize(index) function pointer
  },
  {
    "wheelleg_turret_current",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interfaces__msg__BridgeCurrent, wheelleg_turret_current),  // bytes offset in struct
    NULL,  // default value
    ros2_interfaces__msg__BridgeCurrent__rosidl_typesupport_introspection_c__size_function__BridgeCurrent__wheelleg_turret_current,  // size() function pointer
    ros2_interfaces__msg__BridgeCurrent__rosidl_typesupport_introspection_c__get_const_function__BridgeCurrent__wheelleg_turret_current,  // get_const(index) function pointer
    ros2_interfaces__msg__BridgeCurrent__rosidl_typesupport_introspection_c__get_function__BridgeCurrent__wheelleg_turret_current,  // get(index) function pointer
    ros2_interfaces__msg__BridgeCurrent__rosidl_typesupport_introspection_c__fetch_function__BridgeCurrent__wheelleg_turret_current,  // fetch(index, &value) function pointer
    ros2_interfaces__msg__BridgeCurrent__rosidl_typesupport_introspection_c__assign_function__BridgeCurrent__wheelleg_turret_current,  // assign(index, value) function pointer
    ros2_interfaces__msg__BridgeCurrent__rosidl_typesupport_introspection_c__resize_function__BridgeCurrent__wheelleg_turret_current  // resize(index) function pointer
  },
  {
    "wheelleg_wheel_current",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interfaces__msg__BridgeCurrent, wheelleg_wheel_current),  // bytes offset in struct
    NULL,  // default value
    ros2_interfaces__msg__BridgeCurrent__rosidl_typesupport_introspection_c__size_function__BridgeCurrent__wheelleg_wheel_current,  // size() function pointer
    ros2_interfaces__msg__BridgeCurrent__rosidl_typesupport_introspection_c__get_const_function__BridgeCurrent__wheelleg_wheel_current,  // get_const(index) function pointer
    ros2_interfaces__msg__BridgeCurrent__rosidl_typesupport_introspection_c__get_function__BridgeCurrent__wheelleg_wheel_current,  // get(index) function pointer
    ros2_interfaces__msg__BridgeCurrent__rosidl_typesupport_introspection_c__fetch_function__BridgeCurrent__wheelleg_wheel_current,  // fetch(index, &value) function pointer
    ros2_interfaces__msg__BridgeCurrent__rosidl_typesupport_introspection_c__assign_function__BridgeCurrent__wheelleg_wheel_current,  // assign(index, value) function pointer
    ros2_interfaces__msg__BridgeCurrent__rosidl_typesupport_introspection_c__resize_function__BridgeCurrent__wheelleg_wheel_current  // resize(index) function pointer
  },
  {
    "anchor_current_sum",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interfaces__msg__BridgeCurrent, anchor_current_sum),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ascender_current_sum",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interfaces__msg__BridgeCurrent, ascender_current_sum),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "wheelleg_current_sum",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interfaces__msg__BridgeCurrent, wheelleg_current_sum),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ros2_interfaces__msg__BridgeCurrent__rosidl_typesupport_introspection_c__BridgeCurrent_message_members = {
  "ros2_interfaces__msg",  // message namespace
  "BridgeCurrent",  // message name
  10,  // number of fields
  sizeof(ros2_interfaces__msg__BridgeCurrent),
  ros2_interfaces__msg__BridgeCurrent__rosidl_typesupport_introspection_c__BridgeCurrent_message_member_array,  // message members
  ros2_interfaces__msg__BridgeCurrent__rosidl_typesupport_introspection_c__BridgeCurrent_init_function,  // function to initialize message memory (memory has to be allocated)
  ros2_interfaces__msg__BridgeCurrent__rosidl_typesupport_introspection_c__BridgeCurrent_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ros2_interfaces__msg__BridgeCurrent__rosidl_typesupport_introspection_c__BridgeCurrent_message_type_support_handle = {
  0,
  &ros2_interfaces__msg__BridgeCurrent__rosidl_typesupport_introspection_c__BridgeCurrent_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros2_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interfaces, msg, BridgeCurrent)() {
  ros2_interfaces__msg__BridgeCurrent__rosidl_typesupport_introspection_c__BridgeCurrent_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!ros2_interfaces__msg__BridgeCurrent__rosidl_typesupport_introspection_c__BridgeCurrent_message_type_support_handle.typesupport_identifier) {
    ros2_interfaces__msg__BridgeCurrent__rosidl_typesupport_introspection_c__BridgeCurrent_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ros2_interfaces__msg__BridgeCurrent__rosidl_typesupport_introspection_c__BridgeCurrent_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
