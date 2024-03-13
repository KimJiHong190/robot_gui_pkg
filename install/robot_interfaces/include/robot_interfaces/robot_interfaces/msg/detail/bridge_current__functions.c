// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robot_interfaces:msg/BridgeCurrent.idl
// generated code does not contain a copyright notice
#include "robot_interfaces/msg/detail/bridge_current__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `anchor_fix_current`
// Member `anchor_move_current`
// Member `ascender_motor_current`
// Member `wheelleg_joint_current`
// Member `wheelleg_turret_current`
// Member `wheelleg_wheel_current`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
robot_interfaces__msg__BridgeCurrent__init(robot_interfaces__msg__BridgeCurrent * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    robot_interfaces__msg__BridgeCurrent__fini(msg);
    return false;
  }
  // anchor_fix_current
  if (!rosidl_runtime_c__double__Sequence__init(&msg->anchor_fix_current, 0)) {
    robot_interfaces__msg__BridgeCurrent__fini(msg);
    return false;
  }
  // anchor_move_current
  if (!rosidl_runtime_c__double__Sequence__init(&msg->anchor_move_current, 0)) {
    robot_interfaces__msg__BridgeCurrent__fini(msg);
    return false;
  }
  // ascender_motor_current
  if (!rosidl_runtime_c__double__Sequence__init(&msg->ascender_motor_current, 0)) {
    robot_interfaces__msg__BridgeCurrent__fini(msg);
    return false;
  }
  // wheelleg_joint_current
  if (!rosidl_runtime_c__double__Sequence__init(&msg->wheelleg_joint_current, 0)) {
    robot_interfaces__msg__BridgeCurrent__fini(msg);
    return false;
  }
  // wheelleg_turret_current
  if (!rosidl_runtime_c__double__Sequence__init(&msg->wheelleg_turret_current, 0)) {
    robot_interfaces__msg__BridgeCurrent__fini(msg);
    return false;
  }
  // wheelleg_wheel_current
  if (!rosidl_runtime_c__double__Sequence__init(&msg->wheelleg_wheel_current, 0)) {
    robot_interfaces__msg__BridgeCurrent__fini(msg);
    return false;
  }
  // anchor_current_sum
  // ascender_current_sum
  // wheelleg_current_sum
  return true;
}

void
robot_interfaces__msg__BridgeCurrent__fini(robot_interfaces__msg__BridgeCurrent * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // anchor_fix_current
  rosidl_runtime_c__double__Sequence__fini(&msg->anchor_fix_current);
  // anchor_move_current
  rosidl_runtime_c__double__Sequence__fini(&msg->anchor_move_current);
  // ascender_motor_current
  rosidl_runtime_c__double__Sequence__fini(&msg->ascender_motor_current);
  // wheelleg_joint_current
  rosidl_runtime_c__double__Sequence__fini(&msg->wheelleg_joint_current);
  // wheelleg_turret_current
  rosidl_runtime_c__double__Sequence__fini(&msg->wheelleg_turret_current);
  // wheelleg_wheel_current
  rosidl_runtime_c__double__Sequence__fini(&msg->wheelleg_wheel_current);
  // anchor_current_sum
  // ascender_current_sum
  // wheelleg_current_sum
}

bool
robot_interfaces__msg__BridgeCurrent__are_equal(const robot_interfaces__msg__BridgeCurrent * lhs, const robot_interfaces__msg__BridgeCurrent * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // anchor_fix_current
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->anchor_fix_current), &(rhs->anchor_fix_current)))
  {
    return false;
  }
  // anchor_move_current
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->anchor_move_current), &(rhs->anchor_move_current)))
  {
    return false;
  }
  // ascender_motor_current
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->ascender_motor_current), &(rhs->ascender_motor_current)))
  {
    return false;
  }
  // wheelleg_joint_current
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->wheelleg_joint_current), &(rhs->wheelleg_joint_current)))
  {
    return false;
  }
  // wheelleg_turret_current
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->wheelleg_turret_current), &(rhs->wheelleg_turret_current)))
  {
    return false;
  }
  // wheelleg_wheel_current
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->wheelleg_wheel_current), &(rhs->wheelleg_wheel_current)))
  {
    return false;
  }
  // anchor_current_sum
  if (lhs->anchor_current_sum != rhs->anchor_current_sum) {
    return false;
  }
  // ascender_current_sum
  if (lhs->ascender_current_sum != rhs->ascender_current_sum) {
    return false;
  }
  // wheelleg_current_sum
  if (lhs->wheelleg_current_sum != rhs->wheelleg_current_sum) {
    return false;
  }
  return true;
}

bool
robot_interfaces__msg__BridgeCurrent__copy(
  const robot_interfaces__msg__BridgeCurrent * input,
  robot_interfaces__msg__BridgeCurrent * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // anchor_fix_current
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->anchor_fix_current), &(output->anchor_fix_current)))
  {
    return false;
  }
  // anchor_move_current
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->anchor_move_current), &(output->anchor_move_current)))
  {
    return false;
  }
  // ascender_motor_current
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->ascender_motor_current), &(output->ascender_motor_current)))
  {
    return false;
  }
  // wheelleg_joint_current
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->wheelleg_joint_current), &(output->wheelleg_joint_current)))
  {
    return false;
  }
  // wheelleg_turret_current
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->wheelleg_turret_current), &(output->wheelleg_turret_current)))
  {
    return false;
  }
  // wheelleg_wheel_current
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->wheelleg_wheel_current), &(output->wheelleg_wheel_current)))
  {
    return false;
  }
  // anchor_current_sum
  output->anchor_current_sum = input->anchor_current_sum;
  // ascender_current_sum
  output->ascender_current_sum = input->ascender_current_sum;
  // wheelleg_current_sum
  output->wheelleg_current_sum = input->wheelleg_current_sum;
  return true;
}

robot_interfaces__msg__BridgeCurrent *
robot_interfaces__msg__BridgeCurrent__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_interfaces__msg__BridgeCurrent * msg = (robot_interfaces__msg__BridgeCurrent *)allocator.allocate(sizeof(robot_interfaces__msg__BridgeCurrent), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robot_interfaces__msg__BridgeCurrent));
  bool success = robot_interfaces__msg__BridgeCurrent__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robot_interfaces__msg__BridgeCurrent__destroy(robot_interfaces__msg__BridgeCurrent * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robot_interfaces__msg__BridgeCurrent__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robot_interfaces__msg__BridgeCurrent__Sequence__init(robot_interfaces__msg__BridgeCurrent__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_interfaces__msg__BridgeCurrent * data = NULL;

  if (size) {
    data = (robot_interfaces__msg__BridgeCurrent *)allocator.zero_allocate(size, sizeof(robot_interfaces__msg__BridgeCurrent), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robot_interfaces__msg__BridgeCurrent__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robot_interfaces__msg__BridgeCurrent__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
robot_interfaces__msg__BridgeCurrent__Sequence__fini(robot_interfaces__msg__BridgeCurrent__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      robot_interfaces__msg__BridgeCurrent__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

robot_interfaces__msg__BridgeCurrent__Sequence *
robot_interfaces__msg__BridgeCurrent__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_interfaces__msg__BridgeCurrent__Sequence * array = (robot_interfaces__msg__BridgeCurrent__Sequence *)allocator.allocate(sizeof(robot_interfaces__msg__BridgeCurrent__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robot_interfaces__msg__BridgeCurrent__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robot_interfaces__msg__BridgeCurrent__Sequence__destroy(robot_interfaces__msg__BridgeCurrent__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robot_interfaces__msg__BridgeCurrent__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robot_interfaces__msg__BridgeCurrent__Sequence__are_equal(const robot_interfaces__msg__BridgeCurrent__Sequence * lhs, const robot_interfaces__msg__BridgeCurrent__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robot_interfaces__msg__BridgeCurrent__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robot_interfaces__msg__BridgeCurrent__Sequence__copy(
  const robot_interfaces__msg__BridgeCurrent__Sequence * input,
  robot_interfaces__msg__BridgeCurrent__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robot_interfaces__msg__BridgeCurrent);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robot_interfaces__msg__BridgeCurrent * data =
      (robot_interfaces__msg__BridgeCurrent *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robot_interfaces__msg__BridgeCurrent__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robot_interfaces__msg__BridgeCurrent__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robot_interfaces__msg__BridgeCurrent__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
