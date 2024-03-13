// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interfaces:msg/BridgeCurrent.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACES__MSG__DETAIL__BRIDGE_CURRENT__STRUCT_H_
#define ROS2_INTERFACES__MSG__DETAIL__BRIDGE_CURRENT__STRUCT_H_

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
// Member 'anchor_fix_current'
// Member 'anchor_move_current'
// Member 'ascender_motor_current'
// Member 'wheelleg_joint_current'
// Member 'wheelleg_turret_current'
// Member 'wheelleg_wheel_current'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/BridgeCurrent in the package ros2_interfaces.
typedef struct ros2_interfaces__msg__BridgeCurrent
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__double__Sequence anchor_fix_current;
  rosidl_runtime_c__double__Sequence anchor_move_current;
  rosidl_runtime_c__double__Sequence ascender_motor_current;
  rosidl_runtime_c__double__Sequence wheelleg_joint_current;
  rosidl_runtime_c__double__Sequence wheelleg_turret_current;
  rosidl_runtime_c__double__Sequence wheelleg_wheel_current;
  double anchor_current_sum;
  double ascender_current_sum;
  double wheelleg_current_sum;
} ros2_interfaces__msg__BridgeCurrent;

// Struct for a sequence of ros2_interfaces__msg__BridgeCurrent.
typedef struct ros2_interfaces__msg__BridgeCurrent__Sequence
{
  ros2_interfaces__msg__BridgeCurrent * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interfaces__msg__BridgeCurrent__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACES__MSG__DETAIL__BRIDGE_CURRENT__STRUCT_H_
