// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robot_interfaces:msg/BridgeFloat32MultiArray.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_INTERFACES__MSG__DETAIL__BRIDGE_FLOAT32_MULTI_ARRAY__STRUCT_H_
#define ROBOT_INTERFACES__MSG__DETAIL__BRIDGE_FLOAT32_MULTI_ARRAY__STRUCT_H_

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
// Member 'float_values'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/BridgeFloat32MultiArray in the package robot_interfaces.
typedef struct robot_interfaces__msg__BridgeFloat32MultiArray
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String__Sequence name;
  rosidl_runtime_c__double__Sequence float_values;
} robot_interfaces__msg__BridgeFloat32MultiArray;

// Struct for a sequence of robot_interfaces__msg__BridgeFloat32MultiArray.
typedef struct robot_interfaces__msg__BridgeFloat32MultiArray__Sequence
{
  robot_interfaces__msg__BridgeFloat32MultiArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_interfaces__msg__BridgeFloat32MultiArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOT_INTERFACES__MSG__DETAIL__BRIDGE_FLOAT32_MULTI_ARRAY__STRUCT_H_
