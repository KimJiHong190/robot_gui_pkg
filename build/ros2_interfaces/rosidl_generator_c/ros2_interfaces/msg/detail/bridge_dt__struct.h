// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interfaces:msg/BridgeDt.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACES__MSG__DETAIL__BRIDGE_DT__STRUCT_H_
#define ROS2_INTERFACES__MSG__DETAIL__BRIDGE_DT__STRUCT_H_

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

/// Struct defined in msg/BridgeDt in the package ros2_interfaces.
typedef struct ros2_interfaces__msg__BridgeDt
{
  std_msgs__msg__Header header;
  double dt_can_tx;
  double dt_can_tx_joint;
  double dt_can_tx_wheel;
  double dt_can_tx_turret;
  double dt_can_rx;
  double dt_mean_can_tx;
  double dt_mean_can_tx_joint;
  double dt_mean_can_tx_wheel;
  double dt_mean_can_tx_turret;
  double dt_mean_can_rx;
} ros2_interfaces__msg__BridgeDt;

// Struct for a sequence of ros2_interfaces__msg__BridgeDt.
typedef struct ros2_interfaces__msg__BridgeDt__Sequence
{
  ros2_interfaces__msg__BridgeDt * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interfaces__msg__BridgeDt__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACES__MSG__DETAIL__BRIDGE_DT__STRUCT_H_
