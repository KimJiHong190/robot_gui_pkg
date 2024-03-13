// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robot_interfaces:msg/BridgeStringMultiArray.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_INTERFACES__MSG__DETAIL__BRIDGE_STRING_MULTI_ARRAY__STRUCT_H_
#define ROBOT_INTERFACES__MSG__DETAIL__BRIDGE_STRING_MULTI_ARRAY__STRUCT_H_

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
// Member 'string_values'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/BridgeStringMultiArray in the package robot_interfaces.
typedef struct robot_interfaces__msg__BridgeStringMultiArray
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String__Sequence name;
  rosidl_runtime_c__String__Sequence string_values;
} robot_interfaces__msg__BridgeStringMultiArray;

// Struct for a sequence of robot_interfaces__msg__BridgeStringMultiArray.
typedef struct robot_interfaces__msg__BridgeStringMultiArray__Sequence
{
  robot_interfaces__msg__BridgeStringMultiArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_interfaces__msg__BridgeStringMultiArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOT_INTERFACES__MSG__DETAIL__BRIDGE_STRING_MULTI_ARRAY__STRUCT_H_
