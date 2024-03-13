// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from robot_interfaces:msg/BridgeFloat32MultiArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "robot_interfaces/msg/detail/bridge_float32_multi_array__rosidl_typesupport_introspection_c.h"
#include "robot_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "robot_interfaces/msg/detail/bridge_float32_multi_array__functions.h"
#include "robot_interfaces/msg/detail/bridge_float32_multi_array__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `float_values`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void robot_interfaces__msg__BridgeFloat32MultiArray__rosidl_typesupport_introspection_c__BridgeFloat32MultiArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robot_interfaces__msg__BridgeFloat32MultiArray__init(message_memory);
}

void robot_interfaces__msg__BridgeFloat32MultiArray__rosidl_typesupport_introspection_c__BridgeFloat32MultiArray_fini_function(void * message_memory)
{
  robot_interfaces__msg__BridgeFloat32MultiArray__fini(message_memory);
}

size_t robot_interfaces__msg__BridgeFloat32MultiArray__rosidl_typesupport_introspection_c__size_function__BridgeFloat32MultiArray__name(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * robot_interfaces__msg__BridgeFloat32MultiArray__rosidl_typesupport_introspection_c__get_const_function__BridgeFloat32MultiArray__name(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * robot_interfaces__msg__BridgeFloat32MultiArray__rosidl_typesupport_introspection_c__get_function__BridgeFloat32MultiArray__name(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void robot_interfaces__msg__BridgeFloat32MultiArray__rosidl_typesupport_introspection_c__fetch_function__BridgeFloat32MultiArray__name(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    robot_interfaces__msg__BridgeFloat32MultiArray__rosidl_typesupport_introspection_c__get_const_function__BridgeFloat32MultiArray__name(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void robot_interfaces__msg__BridgeFloat32MultiArray__rosidl_typesupport_introspection_c__assign_function__BridgeFloat32MultiArray__name(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    robot_interfaces__msg__BridgeFloat32MultiArray__rosidl_typesupport_introspection_c__get_function__BridgeFloat32MultiArray__name(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool robot_interfaces__msg__BridgeFloat32MultiArray__rosidl_typesupport_introspection_c__resize_function__BridgeFloat32MultiArray__name(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t robot_interfaces__msg__BridgeFloat32MultiArray__rosidl_typesupport_introspection_c__size_function__BridgeFloat32MultiArray__float_values(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * robot_interfaces__msg__BridgeFloat32MultiArray__rosidl_typesupport_introspection_c__get_const_function__BridgeFloat32MultiArray__float_values(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * robot_interfaces__msg__BridgeFloat32MultiArray__rosidl_typesupport_introspection_c__get_function__BridgeFloat32MultiArray__float_values(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void robot_interfaces__msg__BridgeFloat32MultiArray__rosidl_typesupport_introspection_c__fetch_function__BridgeFloat32MultiArray__float_values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    robot_interfaces__msg__BridgeFloat32MultiArray__rosidl_typesupport_introspection_c__get_const_function__BridgeFloat32MultiArray__float_values(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void robot_interfaces__msg__BridgeFloat32MultiArray__rosidl_typesupport_introspection_c__assign_function__BridgeFloat32MultiArray__float_values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    robot_interfaces__msg__BridgeFloat32MultiArray__rosidl_typesupport_introspection_c__get_function__BridgeFloat32MultiArray__float_values(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool robot_interfaces__msg__BridgeFloat32MultiArray__rosidl_typesupport_introspection_c__resize_function__BridgeFloat32MultiArray__float_values(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember robot_interfaces__msg__BridgeFloat32MultiArray__rosidl_typesupport_introspection_c__BridgeFloat32MultiArray_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_interfaces__msg__BridgeFloat32MultiArray, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_interfaces__msg__BridgeFloat32MultiArray, name),  // bytes offset in struct
    NULL,  // default value
    robot_interfaces__msg__BridgeFloat32MultiArray__rosidl_typesupport_introspection_c__size_function__BridgeFloat32MultiArray__name,  // size() function pointer
    robot_interfaces__msg__BridgeFloat32MultiArray__rosidl_typesupport_introspection_c__get_const_function__BridgeFloat32MultiArray__name,  // get_const(index) function pointer
    robot_interfaces__msg__BridgeFloat32MultiArray__rosidl_typesupport_introspection_c__get_function__BridgeFloat32MultiArray__name,  // get(index) function pointer
    robot_interfaces__msg__BridgeFloat32MultiArray__rosidl_typesupport_introspection_c__fetch_function__BridgeFloat32MultiArray__name,  // fetch(index, &value) function pointer
    robot_interfaces__msg__BridgeFloat32MultiArray__rosidl_typesupport_introspection_c__assign_function__BridgeFloat32MultiArray__name,  // assign(index, value) function pointer
    robot_interfaces__msg__BridgeFloat32MultiArray__rosidl_typesupport_introspection_c__resize_function__BridgeFloat32MultiArray__name  // resize(index) function pointer
  },
  {
    "float_values",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_interfaces__msg__BridgeFloat32MultiArray, float_values),  // bytes offset in struct
    NULL,  // default value
    robot_interfaces__msg__BridgeFloat32MultiArray__rosidl_typesupport_introspection_c__size_function__BridgeFloat32MultiArray__float_values,  // size() function pointer
    robot_interfaces__msg__BridgeFloat32MultiArray__rosidl_typesupport_introspection_c__get_const_function__BridgeFloat32MultiArray__float_values,  // get_const(index) function pointer
    robot_interfaces__msg__BridgeFloat32MultiArray__rosidl_typesupport_introspection_c__get_function__BridgeFloat32MultiArray__float_values,  // get(index) function pointer
    robot_interfaces__msg__BridgeFloat32MultiArray__rosidl_typesupport_introspection_c__fetch_function__BridgeFloat32MultiArray__float_values,  // fetch(index, &value) function pointer
    robot_interfaces__msg__BridgeFloat32MultiArray__rosidl_typesupport_introspection_c__assign_function__BridgeFloat32MultiArray__float_values,  // assign(index, value) function pointer
    robot_interfaces__msg__BridgeFloat32MultiArray__rosidl_typesupport_introspection_c__resize_function__BridgeFloat32MultiArray__float_values  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers robot_interfaces__msg__BridgeFloat32MultiArray__rosidl_typesupport_introspection_c__BridgeFloat32MultiArray_message_members = {
  "robot_interfaces__msg",  // message namespace
  "BridgeFloat32MultiArray",  // message name
  3,  // number of fields
  sizeof(robot_interfaces__msg__BridgeFloat32MultiArray),
  robot_interfaces__msg__BridgeFloat32MultiArray__rosidl_typesupport_introspection_c__BridgeFloat32MultiArray_message_member_array,  // message members
  robot_interfaces__msg__BridgeFloat32MultiArray__rosidl_typesupport_introspection_c__BridgeFloat32MultiArray_init_function,  // function to initialize message memory (memory has to be allocated)
  robot_interfaces__msg__BridgeFloat32MultiArray__rosidl_typesupport_introspection_c__BridgeFloat32MultiArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t robot_interfaces__msg__BridgeFloat32MultiArray__rosidl_typesupport_introspection_c__BridgeFloat32MultiArray_message_type_support_handle = {
  0,
  &robot_interfaces__msg__BridgeFloat32MultiArray__rosidl_typesupport_introspection_c__BridgeFloat32MultiArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robot_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_interfaces, msg, BridgeFloat32MultiArray)() {
  robot_interfaces__msg__BridgeFloat32MultiArray__rosidl_typesupport_introspection_c__BridgeFloat32MultiArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!robot_interfaces__msg__BridgeFloat32MultiArray__rosidl_typesupport_introspection_c__BridgeFloat32MultiArray_message_type_support_handle.typesupport_identifier) {
    robot_interfaces__msg__BridgeFloat32MultiArray__rosidl_typesupport_introspection_c__BridgeFloat32MultiArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &robot_interfaces__msg__BridgeFloat32MultiArray__rosidl_typesupport_introspection_c__BridgeFloat32MultiArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
