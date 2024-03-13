// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ros2_interfaces:msg/BridgeJointStateWithAccel.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ros2_interfaces/msg/detail/bridge_joint_state_with_accel__rosidl_typesupport_introspection_c.h"
#include "ros2_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ros2_interfaces/msg/detail/bridge_joint_state_with_accel__functions.h"
#include "ros2_interfaces/msg/detail/bridge_joint_state_with_accel__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `position`
// Member `velocity`
// Member `acceleration`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ros2_interfaces__msg__BridgeJointStateWithAccel__rosidl_typesupport_introspection_c__BridgeJointStateWithAccel_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros2_interfaces__msg__BridgeJointStateWithAccel__init(message_memory);
}

void ros2_interfaces__msg__BridgeJointStateWithAccel__rosidl_typesupport_introspection_c__BridgeJointStateWithAccel_fini_function(void * message_memory)
{
  ros2_interfaces__msg__BridgeJointStateWithAccel__fini(message_memory);
}

size_t ros2_interfaces__msg__BridgeJointStateWithAccel__rosidl_typesupport_introspection_c__size_function__BridgeJointStateWithAccel__name(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * ros2_interfaces__msg__BridgeJointStateWithAccel__rosidl_typesupport_introspection_c__get_const_function__BridgeJointStateWithAccel__name(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros2_interfaces__msg__BridgeJointStateWithAccel__rosidl_typesupport_introspection_c__get_function__BridgeJointStateWithAccel__name(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros2_interfaces__msg__BridgeJointStateWithAccel__rosidl_typesupport_introspection_c__fetch_function__BridgeJointStateWithAccel__name(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    ros2_interfaces__msg__BridgeJointStateWithAccel__rosidl_typesupport_introspection_c__get_const_function__BridgeJointStateWithAccel__name(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void ros2_interfaces__msg__BridgeJointStateWithAccel__rosidl_typesupport_introspection_c__assign_function__BridgeJointStateWithAccel__name(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    ros2_interfaces__msg__BridgeJointStateWithAccel__rosidl_typesupport_introspection_c__get_function__BridgeJointStateWithAccel__name(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool ros2_interfaces__msg__BridgeJointStateWithAccel__rosidl_typesupport_introspection_c__resize_function__BridgeJointStateWithAccel__name(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t ros2_interfaces__msg__BridgeJointStateWithAccel__rosidl_typesupport_introspection_c__size_function__BridgeJointStateWithAccel__position(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * ros2_interfaces__msg__BridgeJointStateWithAccel__rosidl_typesupport_introspection_c__get_const_function__BridgeJointStateWithAccel__position(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros2_interfaces__msg__BridgeJointStateWithAccel__rosidl_typesupport_introspection_c__get_function__BridgeJointStateWithAccel__position(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros2_interfaces__msg__BridgeJointStateWithAccel__rosidl_typesupport_introspection_c__fetch_function__BridgeJointStateWithAccel__position(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    ros2_interfaces__msg__BridgeJointStateWithAccel__rosidl_typesupport_introspection_c__get_const_function__BridgeJointStateWithAccel__position(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void ros2_interfaces__msg__BridgeJointStateWithAccel__rosidl_typesupport_introspection_c__assign_function__BridgeJointStateWithAccel__position(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    ros2_interfaces__msg__BridgeJointStateWithAccel__rosidl_typesupport_introspection_c__get_function__BridgeJointStateWithAccel__position(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool ros2_interfaces__msg__BridgeJointStateWithAccel__rosidl_typesupport_introspection_c__resize_function__BridgeJointStateWithAccel__position(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t ros2_interfaces__msg__BridgeJointStateWithAccel__rosidl_typesupport_introspection_c__size_function__BridgeJointStateWithAccel__velocity(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * ros2_interfaces__msg__BridgeJointStateWithAccel__rosidl_typesupport_introspection_c__get_const_function__BridgeJointStateWithAccel__velocity(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros2_interfaces__msg__BridgeJointStateWithAccel__rosidl_typesupport_introspection_c__get_function__BridgeJointStateWithAccel__velocity(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros2_interfaces__msg__BridgeJointStateWithAccel__rosidl_typesupport_introspection_c__fetch_function__BridgeJointStateWithAccel__velocity(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    ros2_interfaces__msg__BridgeJointStateWithAccel__rosidl_typesupport_introspection_c__get_const_function__BridgeJointStateWithAccel__velocity(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void ros2_interfaces__msg__BridgeJointStateWithAccel__rosidl_typesupport_introspection_c__assign_function__BridgeJointStateWithAccel__velocity(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    ros2_interfaces__msg__BridgeJointStateWithAccel__rosidl_typesupport_introspection_c__get_function__BridgeJointStateWithAccel__velocity(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool ros2_interfaces__msg__BridgeJointStateWithAccel__rosidl_typesupport_introspection_c__resize_function__BridgeJointStateWithAccel__velocity(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t ros2_interfaces__msg__BridgeJointStateWithAccel__rosidl_typesupport_introspection_c__size_function__BridgeJointStateWithAccel__acceleration(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * ros2_interfaces__msg__BridgeJointStateWithAccel__rosidl_typesupport_introspection_c__get_const_function__BridgeJointStateWithAccel__acceleration(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros2_interfaces__msg__BridgeJointStateWithAccel__rosidl_typesupport_introspection_c__get_function__BridgeJointStateWithAccel__acceleration(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros2_interfaces__msg__BridgeJointStateWithAccel__rosidl_typesupport_introspection_c__fetch_function__BridgeJointStateWithAccel__acceleration(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    ros2_interfaces__msg__BridgeJointStateWithAccel__rosidl_typesupport_introspection_c__get_const_function__BridgeJointStateWithAccel__acceleration(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void ros2_interfaces__msg__BridgeJointStateWithAccel__rosidl_typesupport_introspection_c__assign_function__BridgeJointStateWithAccel__acceleration(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    ros2_interfaces__msg__BridgeJointStateWithAccel__rosidl_typesupport_introspection_c__get_function__BridgeJointStateWithAccel__acceleration(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool ros2_interfaces__msg__BridgeJointStateWithAccel__rosidl_typesupport_introspection_c__resize_function__BridgeJointStateWithAccel__acceleration(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ros2_interfaces__msg__BridgeJointStateWithAccel__rosidl_typesupport_introspection_c__BridgeJointStateWithAccel_message_member_array[5] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interfaces__msg__BridgeJointStateWithAccel, header),  // bytes offset in struct
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
    offsetof(ros2_interfaces__msg__BridgeJointStateWithAccel, name),  // bytes offset in struct
    NULL,  // default value
    ros2_interfaces__msg__BridgeJointStateWithAccel__rosidl_typesupport_introspection_c__size_function__BridgeJointStateWithAccel__name,  // size() function pointer
    ros2_interfaces__msg__BridgeJointStateWithAccel__rosidl_typesupport_introspection_c__get_const_function__BridgeJointStateWithAccel__name,  // get_const(index) function pointer
    ros2_interfaces__msg__BridgeJointStateWithAccel__rosidl_typesupport_introspection_c__get_function__BridgeJointStateWithAccel__name,  // get(index) function pointer
    ros2_interfaces__msg__BridgeJointStateWithAccel__rosidl_typesupport_introspection_c__fetch_function__BridgeJointStateWithAccel__name,  // fetch(index, &value) function pointer
    ros2_interfaces__msg__BridgeJointStateWithAccel__rosidl_typesupport_introspection_c__assign_function__BridgeJointStateWithAccel__name,  // assign(index, value) function pointer
    ros2_interfaces__msg__BridgeJointStateWithAccel__rosidl_typesupport_introspection_c__resize_function__BridgeJointStateWithAccel__name  // resize(index) function pointer
  },
  {
    "position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interfaces__msg__BridgeJointStateWithAccel, position),  // bytes offset in struct
    NULL,  // default value
    ros2_interfaces__msg__BridgeJointStateWithAccel__rosidl_typesupport_introspection_c__size_function__BridgeJointStateWithAccel__position,  // size() function pointer
    ros2_interfaces__msg__BridgeJointStateWithAccel__rosidl_typesupport_introspection_c__get_const_function__BridgeJointStateWithAccel__position,  // get_const(index) function pointer
    ros2_interfaces__msg__BridgeJointStateWithAccel__rosidl_typesupport_introspection_c__get_function__BridgeJointStateWithAccel__position,  // get(index) function pointer
    ros2_interfaces__msg__BridgeJointStateWithAccel__rosidl_typesupport_introspection_c__fetch_function__BridgeJointStateWithAccel__position,  // fetch(index, &value) function pointer
    ros2_interfaces__msg__BridgeJointStateWithAccel__rosidl_typesupport_introspection_c__assign_function__BridgeJointStateWithAccel__position,  // assign(index, value) function pointer
    ros2_interfaces__msg__BridgeJointStateWithAccel__rosidl_typesupport_introspection_c__resize_function__BridgeJointStateWithAccel__position  // resize(index) function pointer
  },
  {
    "velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interfaces__msg__BridgeJointStateWithAccel, velocity),  // bytes offset in struct
    NULL,  // default value
    ros2_interfaces__msg__BridgeJointStateWithAccel__rosidl_typesupport_introspection_c__size_function__BridgeJointStateWithAccel__velocity,  // size() function pointer
    ros2_interfaces__msg__BridgeJointStateWithAccel__rosidl_typesupport_introspection_c__get_const_function__BridgeJointStateWithAccel__velocity,  // get_const(index) function pointer
    ros2_interfaces__msg__BridgeJointStateWithAccel__rosidl_typesupport_introspection_c__get_function__BridgeJointStateWithAccel__velocity,  // get(index) function pointer
    ros2_interfaces__msg__BridgeJointStateWithAccel__rosidl_typesupport_introspection_c__fetch_function__BridgeJointStateWithAccel__velocity,  // fetch(index, &value) function pointer
    ros2_interfaces__msg__BridgeJointStateWithAccel__rosidl_typesupport_introspection_c__assign_function__BridgeJointStateWithAccel__velocity,  // assign(index, value) function pointer
    ros2_interfaces__msg__BridgeJointStateWithAccel__rosidl_typesupport_introspection_c__resize_function__BridgeJointStateWithAccel__velocity  // resize(index) function pointer
  },
  {
    "acceleration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interfaces__msg__BridgeJointStateWithAccel, acceleration),  // bytes offset in struct
    NULL,  // default value
    ros2_interfaces__msg__BridgeJointStateWithAccel__rosidl_typesupport_introspection_c__size_function__BridgeJointStateWithAccel__acceleration,  // size() function pointer
    ros2_interfaces__msg__BridgeJointStateWithAccel__rosidl_typesupport_introspection_c__get_const_function__BridgeJointStateWithAccel__acceleration,  // get_const(index) function pointer
    ros2_interfaces__msg__BridgeJointStateWithAccel__rosidl_typesupport_introspection_c__get_function__BridgeJointStateWithAccel__acceleration,  // get(index) function pointer
    ros2_interfaces__msg__BridgeJointStateWithAccel__rosidl_typesupport_introspection_c__fetch_function__BridgeJointStateWithAccel__acceleration,  // fetch(index, &value) function pointer
    ros2_interfaces__msg__BridgeJointStateWithAccel__rosidl_typesupport_introspection_c__assign_function__BridgeJointStateWithAccel__acceleration,  // assign(index, value) function pointer
    ros2_interfaces__msg__BridgeJointStateWithAccel__rosidl_typesupport_introspection_c__resize_function__BridgeJointStateWithAccel__acceleration  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ros2_interfaces__msg__BridgeJointStateWithAccel__rosidl_typesupport_introspection_c__BridgeJointStateWithAccel_message_members = {
  "ros2_interfaces__msg",  // message namespace
  "BridgeJointStateWithAccel",  // message name
  5,  // number of fields
  sizeof(ros2_interfaces__msg__BridgeJointStateWithAccel),
  ros2_interfaces__msg__BridgeJointStateWithAccel__rosidl_typesupport_introspection_c__BridgeJointStateWithAccel_message_member_array,  // message members
  ros2_interfaces__msg__BridgeJointStateWithAccel__rosidl_typesupport_introspection_c__BridgeJointStateWithAccel_init_function,  // function to initialize message memory (memory has to be allocated)
  ros2_interfaces__msg__BridgeJointStateWithAccel__rosidl_typesupport_introspection_c__BridgeJointStateWithAccel_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ros2_interfaces__msg__BridgeJointStateWithAccel__rosidl_typesupport_introspection_c__BridgeJointStateWithAccel_message_type_support_handle = {
  0,
  &ros2_interfaces__msg__BridgeJointStateWithAccel__rosidl_typesupport_introspection_c__BridgeJointStateWithAccel_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros2_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interfaces, msg, BridgeJointStateWithAccel)() {
  ros2_interfaces__msg__BridgeJointStateWithAccel__rosidl_typesupport_introspection_c__BridgeJointStateWithAccel_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!ros2_interfaces__msg__BridgeJointStateWithAccel__rosidl_typesupport_introspection_c__BridgeJointStateWithAccel_message_type_support_handle.typesupport_identifier) {
    ros2_interfaces__msg__BridgeJointStateWithAccel__rosidl_typesupport_introspection_c__BridgeJointStateWithAccel_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ros2_interfaces__msg__BridgeJointStateWithAccel__rosidl_typesupport_introspection_c__BridgeJointStateWithAccel_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
