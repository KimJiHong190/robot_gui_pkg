// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robot_interfaces:msg/BridgeError.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_INTERFACES__MSG__DETAIL__BRIDGE_ERROR__STRUCT_H_
#define ROBOT_INTERFACES__MSG__DETAIL__BRIDGE_ERROR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'error_joint_stuck'
// Member 'is_error_over_current'
// Member 'is_error_over_range'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/BridgeError in the package robot_interfaces.
typedef struct robot_interfaces__msg__BridgeError
{
  std_msgs__msg__Header header;
  int64_t error_can;
  rosidl_runtime_c__int64__Sequence error_joint_stuck;
  rosidl_runtime_c__int64__Sequence is_error_over_current;
  rosidl_runtime_c__int64__Sequence is_error_over_range;
} robot_interfaces__msg__BridgeError;

// Struct for a sequence of robot_interfaces__msg__BridgeError.
typedef struct robot_interfaces__msg__BridgeError__Sequence
{
  robot_interfaces__msg__BridgeError * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_interfaces__msg__BridgeError__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOT_INTERFACES__MSG__DETAIL__BRIDGE_ERROR__STRUCT_H_
