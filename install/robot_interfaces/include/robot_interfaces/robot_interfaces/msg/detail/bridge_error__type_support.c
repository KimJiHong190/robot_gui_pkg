// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from robot_interfaces:msg/BridgeError.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "robot_interfaces/msg/detail/bridge_error__rosidl_typesupport_introspection_c.h"
#include "robot_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "robot_interfaces/msg/detail/bridge_error__functions.h"
#include "robot_interfaces/msg/detail/bridge_error__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `error_joint_stuck`
// Member `is_error_over_current`
// Member `is_error_over_range`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void robot_interfaces__msg__BridgeError__rosidl_typesupport_introspection_c__BridgeError_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robot_interfaces__msg__BridgeError__init(message_memory);
}

void robot_interfaces__msg__BridgeError__rosidl_typesupport_introspection_c__BridgeError_fini_function(void * message_memory)
{
  robot_interfaces__msg__BridgeError__fini(message_memory);
}

size_t robot_interfaces__msg__BridgeError__rosidl_typesupport_introspection_c__size_function__BridgeError__error_joint_stuck(
  const void * untyped_member)
{
  const rosidl_runtime_c__int64__Sequence * member =
    (const rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return member->size;
}

const void * robot_interfaces__msg__BridgeError__rosidl_typesupport_introspection_c__get_const_function__BridgeError__error_joint_stuck(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int64__Sequence * member =
    (const rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return &member->data[index];
}

void * robot_interfaces__msg__BridgeError__rosidl_typesupport_introspection_c__get_function__BridgeError__error_joint_stuck(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int64__Sequence * member =
    (rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return &member->data[index];
}

void robot_interfaces__msg__BridgeError__rosidl_typesupport_introspection_c__fetch_function__BridgeError__error_joint_stuck(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int64_t * item =
    ((const int64_t *)
    robot_interfaces__msg__BridgeError__rosidl_typesupport_introspection_c__get_const_function__BridgeError__error_joint_stuck(untyped_member, index));
  int64_t * value =
    (int64_t *)(untyped_value);
  *value = *item;
}

void robot_interfaces__msg__BridgeError__rosidl_typesupport_introspection_c__assign_function__BridgeError__error_joint_stuck(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int64_t * item =
    ((int64_t *)
    robot_interfaces__msg__BridgeError__rosidl_typesupport_introspection_c__get_function__BridgeError__error_joint_stuck(untyped_member, index));
  const int64_t * value =
    (const int64_t *)(untyped_value);
  *item = *value;
}

bool robot_interfaces__msg__BridgeError__rosidl_typesupport_introspection_c__resize_function__BridgeError__error_joint_stuck(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int64__Sequence * member =
    (rosidl_runtime_c__int64__Sequence *)(untyped_member);
  rosidl_runtime_c__int64__Sequence__fini(member);
  return rosidl_runtime_c__int64__Sequence__init(member, size);
}

size_t robot_interfaces__msg__BridgeError__rosidl_typesupport_introspection_c__size_function__BridgeError__is_error_over_current(
  const void * untyped_member)
{
  const rosidl_runtime_c__int64__Sequence * member =
    (const rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return member->size;
}

const void * robot_interfaces__msg__BridgeError__rosidl_typesupport_introspection_c__get_const_function__BridgeError__is_error_over_current(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int64__Sequence * member =
    (const rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return &member->data[index];
}

void * robot_interfaces__msg__BridgeError__rosidl_typesupport_introspection_c__get_function__BridgeError__is_error_over_current(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int64__Sequence * member =
    (rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return &member->data[index];
}

void robot_interfaces__msg__BridgeError__rosidl_typesupport_introspection_c__fetch_function__BridgeError__is_error_over_current(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int64_t * item =
    ((const int64_t *)
    robot_interfaces__msg__BridgeError__rosidl_typesupport_introspection_c__get_const_function__BridgeError__is_error_over_current(untyped_member, index));
  int64_t * value =
    (int64_t *)(untyped_value);
  *value = *item;
}

void robot_interfaces__msg__BridgeError__rosidl_typesupport_introspection_c__assign_function__BridgeError__is_error_over_current(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int64_t * item =
    ((int64_t *)
    robot_interfaces__msg__BridgeError__rosidl_typesupport_introspection_c__get_function__BridgeError__is_error_over_current(untyped_member, index));
  const int64_t * value =
    (const int64_t *)(untyped_value);
  *item = *value;
}

bool robot_interfaces__msg__BridgeError__rosidl_typesupport_introspection_c__resize_function__BridgeError__is_error_over_current(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int64__Sequence * member =
    (rosidl_runtime_c__int64__Sequence *)(untyped_member);
  rosidl_runtime_c__int64__Sequence__fini(member);
  return rosidl_runtime_c__int64__Sequence__init(member, size);
}

size_t robot_interfaces__msg__BridgeError__rosidl_typesupport_introspection_c__size_function__BridgeError__is_error_over_range(
  const void * untyped_member)
{
  const rosidl_runtime_c__int64__Sequence * member =
    (const rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return member->size;
}

const void * robot_interfaces__msg__BridgeError__rosidl_typesupport_introspection_c__get_const_function__BridgeError__is_error_over_range(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int64__Sequence * member =
    (const rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return &member->data[index];
}

void * robot_interfaces__msg__BridgeError__rosidl_typesupport_introspection_c__get_function__BridgeError__is_error_over_range(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int64__Sequence * member =
    (rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return &member->data[index];
}

void robot_interfaces__msg__BridgeError__rosidl_typesupport_introspection_c__fetch_function__BridgeError__is_error_over_range(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int64_t * item =
    ((const int64_t *)
    robot_interfaces__msg__BridgeError__rosidl_typesupport_introspection_c__get_const_function__BridgeError__is_error_over_range(untyped_member, index));
  int64_t * value =
    (int64_t *)(untyped_value);
  *value = *item;
}

void robot_interfaces__msg__BridgeError__rosidl_typesupport_introspection_c__assign_function__BridgeError__is_error_over_range(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int64_t * item =
    ((int64_t *)
    robot_interfaces__msg__BridgeError__rosidl_typesupport_introspection_c__get_function__BridgeError__is_error_over_range(untyped_member, index));
  const int64_t * value =
    (const int64_t *)(untyped_value);
  *item = *value;
}

bool robot_interfaces__msg__BridgeError__rosidl_typesupport_introspection_c__resize_function__BridgeError__is_error_over_range(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int64__Sequence * member =
    (rosidl_runtime_c__int64__Sequence *)(untyped_member);
  rosidl_runtime_c__int64__Sequence__fini(member);
  return rosidl_runtime_c__int64__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember robot_interfaces__msg__BridgeError__rosidl_typesupport_introspection_c__BridgeError_message_member_array[5] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_interfaces__msg__BridgeError, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "error_can",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_interfaces__msg__BridgeError, error_can),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "error_joint_stuck",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_interfaces__msg__BridgeError, error_joint_stuck),  // bytes offset in struct
    NULL,  // default value
    robot_interfaces__msg__BridgeError__rosidl_typesupport_introspection_c__size_function__BridgeError__error_joint_stuck,  // size() function pointer
    robot_interfaces__msg__BridgeError__rosidl_typesupport_introspection_c__get_const_function__BridgeError__error_joint_stuck,  // get_const(index) function pointer
    robot_interfaces__msg__BridgeError__rosidl_typesupport_introspection_c__get_function__BridgeError__error_joint_stuck,  // get(index) function pointer
    robot_interfaces__msg__BridgeError__rosidl_typesupport_introspection_c__fetch_function__BridgeError__error_joint_stuck,  // fetch(index, &value) function pointer
    robot_interfaces__msg__BridgeError__rosidl_typesupport_introspection_c__assign_function__BridgeError__error_joint_stuck,  // assign(index, value) function pointer
    robot_interfaces__msg__BridgeError__rosidl_typesupport_introspection_c__resize_function__BridgeError__error_joint_stuck  // resize(index) function pointer
  },
  {
    "is_error_over_current",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_interfaces__msg__BridgeError, is_error_over_current),  // bytes offset in struct
    NULL,  // default value
    robot_interfaces__msg__BridgeError__rosidl_typesupport_introspection_c__size_function__BridgeError__is_error_over_current,  // size() function pointer
    robot_interfaces__msg__BridgeError__rosidl_typesupport_introspection_c__get_const_function__BridgeError__is_error_over_current,  // get_const(index) function pointer
    robot_interfaces__msg__BridgeError__rosidl_typesupport_introspection_c__get_function__BridgeError__is_error_over_current,  // get(index) function pointer
    robot_interfaces__msg__BridgeError__rosidl_typesupport_introspection_c__fetch_function__BridgeError__is_error_over_current,  // fetch(index, &value) function pointer
    robot_interfaces__msg__BridgeError__rosidl_typesupport_introspection_c__assign_function__BridgeError__is_error_over_current,  // assign(index, value) function pointer
    robot_interfaces__msg__BridgeError__rosidl_typesupport_introspection_c__resize_function__BridgeError__is_error_over_current  // resize(index) function pointer
  },
  {
    "is_error_over_range",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_interfaces__msg__BridgeError, is_error_over_range),  // bytes offset in struct
    NULL,  // default value
    robot_interfaces__msg__BridgeError__rosidl_typesupport_introspection_c__size_function__BridgeError__is_error_over_range,  // size() function pointer
    robot_interfaces__msg__BridgeError__rosidl_typesupport_introspection_c__get_const_function__BridgeError__is_error_over_range,  // get_const(index) function pointer
    robot_interfaces__msg__BridgeError__rosidl_typesupport_introspection_c__get_function__BridgeError__is_error_over_range,  // get(index) function pointer
    robot_interfaces__msg__BridgeError__rosidl_typesupport_introspection_c__fetch_function__BridgeError__is_error_over_range,  // fetch(index, &value) function pointer
    robot_interfaces__msg__BridgeError__rosidl_typesupport_introspection_c__assign_function__BridgeError__is_error_over_range,  // assign(index, value) function pointer
    robot_interfaces__msg__BridgeError__rosidl_typesupport_introspection_c__resize_function__BridgeError__is_error_over_range  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers robot_interfaces__msg__BridgeError__rosidl_typesupport_introspection_c__BridgeError_message_members = {
  "robot_interfaces__msg",  // message namespace
  "BridgeError",  // message name
  5,  // number of fields
  sizeof(robot_interfaces__msg__BridgeError),
  robot_interfaces__msg__BridgeError__rosidl_typesupport_introspection_c__BridgeError_message_member_array,  // message members
  robot_interfaces__msg__BridgeError__rosidl_typesupport_introspection_c__BridgeError_init_function,  // function to initialize message memory (memory has to be allocated)
  robot_interfaces__msg__BridgeError__rosidl_typesupport_introspection_c__BridgeError_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t robot_interfaces__msg__BridgeError__rosidl_typesupport_introspection_c__BridgeError_message_type_support_handle = {
  0,
  &robot_interfaces__msg__BridgeError__rosidl_typesupport_introspection_c__BridgeError_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robot_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_interfaces, msg, BridgeError)() {
  robot_interfaces__msg__BridgeError__rosidl_typesupport_introspection_c__BridgeError_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!robot_interfaces__msg__BridgeError__rosidl_typesupport_introspection_c__BridgeError_message_type_support_handle.typesupport_identifier) {
    robot_interfaces__msg__BridgeError__rosidl_typesupport_introspection_c__BridgeError_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &robot_interfaces__msg__BridgeError__rosidl_typesupport_introspection_c__BridgeError_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
