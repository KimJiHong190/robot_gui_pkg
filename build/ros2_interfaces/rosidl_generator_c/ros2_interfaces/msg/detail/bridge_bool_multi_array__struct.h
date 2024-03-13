// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interfaces:msg/BridgeBoolMultiArray.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACES__MSG__DETAIL__BRIDGE_BOOL_MULTI_ARRAY__STRUCT_H_
#define ROS2_INTERFACES__MSG__DETAIL__BRIDGE_BOOL_MULTI_ARRAY__STRUCT_H_

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
// Member 'bool_values'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/BridgeBoolMultiArray in the package ros2_interfaces.
typedef struct ros2_interfaces__msg__BridgeBoolMultiArray
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String__Sequence name;
  rosidl_runtime_c__boolean__Sequence bool_values;
} ros2_interfaces__msg__BridgeBoolMultiArray;

// Struct for a sequence of ros2_interfaces__msg__BridgeBoolMultiArray.
typedef struct ros2_interfaces__msg__BridgeBoolMultiArray__Sequence
{
  ros2_interfaces__msg__BridgeBoolMultiArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interfaces__msg__BridgeBoolMultiArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACES__MSG__DETAIL__BRIDGE_BOOL_MULTI_ARRAY__STRUCT_H_
