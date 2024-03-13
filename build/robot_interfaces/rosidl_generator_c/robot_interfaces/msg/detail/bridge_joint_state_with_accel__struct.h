// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robot_interfaces:msg/BridgeJointStateWithAccel.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_INTERFACES__MSG__DETAIL__BRIDGE_JOINT_STATE_WITH_ACCEL__STRUCT_H_
#define ROBOT_INTERFACES__MSG__DETAIL__BRIDGE_JOINT_STATE_WITH_ACCEL__STRUCT_H_

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
// Member 'name'
#include "rosidl_runtime_c/string.h"
// Member 'position'
// Member 'velocity'
// Member 'acceleration'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/BridgeJointStateWithAccel in the package robot_interfaces.
typedef struct robot_interfaces__msg__BridgeJointStateWithAccel
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String__Sequence name;
  rosidl_runtime_c__double__Sequence position;
  rosidl_runtime_c__double__Sequence velocity;
  rosidl_runtime_c__double__Sequence acceleration;
} robot_interfaces__msg__BridgeJointStateWithAccel;

// Struct for a sequence of robot_interfaces__msg__BridgeJointStateWithAccel.
typedef struct robot_interfaces__msg__BridgeJointStateWithAccel__Sequence
{
  robot_interfaces__msg__BridgeJointStateWithAccel * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_interfaces__msg__BridgeJointStateWithAccel__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOT_INTERFACES__MSG__DETAIL__BRIDGE_JOINT_STATE_WITH_ACCEL__STRUCT_H_
