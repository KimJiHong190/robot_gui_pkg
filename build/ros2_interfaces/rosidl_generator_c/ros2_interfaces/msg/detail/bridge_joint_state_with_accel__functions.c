// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros2_interfaces:msg/BridgeJointStateWithAccel.idl
// generated code does not contain a copyright notice
#include "ros2_interfaces/msg/detail/bridge_joint_state_with_accel__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `position`
// Member `velocity`
// Member `acceleration`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
ros2_interfaces__msg__BridgeJointStateWithAccel__init(ros2_interfaces__msg__BridgeJointStateWithAccel * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    ros2_interfaces__msg__BridgeJointStateWithAccel__fini(msg);
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__Sequence__init(&msg->name, 0)) {
    ros2_interfaces__msg__BridgeJointStateWithAccel__fini(msg);
    return false;
  }
  // position
  if (!rosidl_runtime_c__double__Sequence__init(&msg->position, 0)) {
    ros2_interfaces__msg__BridgeJointStateWithAccel__fini(msg);
    return false;
  }
  // velocity
  if (!rosidl_runtime_c__double__Sequence__init(&msg->velocity, 0)) {
    ros2_interfaces__msg__BridgeJointStateWithAccel__fini(msg);
    return false;
  }
  // acceleration
  if (!rosidl_runtime_c__double__Sequence__init(&msg->acceleration, 0)) {
    ros2_interfaces__msg__BridgeJointStateWithAccel__fini(msg);
    return false;
  }
  return true;
}

void
ros2_interfaces__msg__BridgeJointStateWithAccel__fini(ros2_interfaces__msg__BridgeJointStateWithAccel * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // name
  rosidl_runtime_c__String__Sequence__fini(&msg->name);
  // position
  rosidl_runtime_c__double__Sequence__fini(&msg->position);
  // velocity
  rosidl_runtime_c__double__Sequence__fini(&msg->velocity);
  // acceleration
  rosidl_runtime_c__double__Sequence__fini(&msg->acceleration);
}

bool
ros2_interfaces__msg__BridgeJointStateWithAccel__are_equal(const ros2_interfaces__msg__BridgeJointStateWithAccel * lhs, const ros2_interfaces__msg__BridgeJointStateWithAccel * rhs)
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
  // name
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // position
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->position), &(rhs->position)))
  {
    return false;
  }
  // velocity
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->velocity), &(rhs->velocity)))
  {
    return false;
  }
  // acceleration
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->acceleration), &(rhs->acceleration)))
  {
    return false;
  }
  return true;
}

bool
ros2_interfaces__msg__BridgeJointStateWithAccel__copy(
  const ros2_interfaces__msg__BridgeJointStateWithAccel * input,
  ros2_interfaces__msg__BridgeJointStateWithAccel * output)
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
  // name
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // position
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->position), &(output->position)))
  {
    return false;
  }
  // velocity
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->velocity), &(output->velocity)))
  {
    return false;
  }
  // acceleration
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->acceleration), &(output->acceleration)))
  {
    return false;
  }
  return true;
}

ros2_interfaces__msg__BridgeJointStateWithAccel *
ros2_interfaces__msg__BridgeJointStateWithAccel__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interfaces__msg__BridgeJointStateWithAccel * msg = (ros2_interfaces__msg__BridgeJointStateWithAccel *)allocator.allocate(sizeof(ros2_interfaces__msg__BridgeJointStateWithAccel), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_interfaces__msg__BridgeJointStateWithAccel));
  bool success = ros2_interfaces__msg__BridgeJointStateWithAccel__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros2_interfaces__msg__BridgeJointStateWithAccel__destroy(ros2_interfaces__msg__BridgeJointStateWithAccel * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros2_interfaces__msg__BridgeJointStateWithAccel__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros2_interfaces__msg__BridgeJointStateWithAccel__Sequence__init(ros2_interfaces__msg__BridgeJointStateWithAccel__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interfaces__msg__BridgeJointStateWithAccel * data = NULL;

  if (size) {
    data = (ros2_interfaces__msg__BridgeJointStateWithAccel *)allocator.zero_allocate(size, sizeof(ros2_interfaces__msg__BridgeJointStateWithAccel), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_interfaces__msg__BridgeJointStateWithAccel__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_interfaces__msg__BridgeJointStateWithAccel__fini(&data[i - 1]);
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
ros2_interfaces__msg__BridgeJointStateWithAccel__Sequence__fini(ros2_interfaces__msg__BridgeJointStateWithAccel__Sequence * array)
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
      ros2_interfaces__msg__BridgeJointStateWithAccel__fini(&array->data[i]);
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

ros2_interfaces__msg__BridgeJointStateWithAccel__Sequence *
ros2_interfaces__msg__BridgeJointStateWithAccel__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_interfaces__msg__BridgeJointStateWithAccel__Sequence * array = (ros2_interfaces__msg__BridgeJointStateWithAccel__Sequence *)allocator.allocate(sizeof(ros2_interfaces__msg__BridgeJointStateWithAccel__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros2_interfaces__msg__BridgeJointStateWithAccel__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros2_interfaces__msg__BridgeJointStateWithAccel__Sequence__destroy(ros2_interfaces__msg__BridgeJointStateWithAccel__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros2_interfaces__msg__BridgeJointStateWithAccel__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros2_interfaces__msg__BridgeJointStateWithAccel__Sequence__are_equal(const ros2_interfaces__msg__BridgeJointStateWithAccel__Sequence * lhs, const ros2_interfaces__msg__BridgeJointStateWithAccel__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2_interfaces__msg__BridgeJointStateWithAccel__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2_interfaces__msg__BridgeJointStateWithAccel__Sequence__copy(
  const ros2_interfaces__msg__BridgeJointStateWithAccel__Sequence * input,
  ros2_interfaces__msg__BridgeJointStateWithAccel__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2_interfaces__msg__BridgeJointStateWithAccel);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros2_interfaces__msg__BridgeJointStateWithAccel * data =
      (ros2_interfaces__msg__BridgeJointStateWithAccel *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2_interfaces__msg__BridgeJointStateWithAccel__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros2_interfaces__msg__BridgeJointStateWithAccel__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros2_interfaces__msg__BridgeJointStateWithAccel__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
