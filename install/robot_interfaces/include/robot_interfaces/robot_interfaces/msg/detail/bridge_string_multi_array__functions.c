// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robot_interfaces:msg/BridgeStringMultiArray.idl
// generated code does not contain a copyright notice
#include "robot_interfaces/msg/detail/bridge_string_multi_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `name`
// Member `string_values`
#include "rosidl_runtime_c/string_functions.h"

bool
robot_interfaces__msg__BridgeStringMultiArray__init(robot_interfaces__msg__BridgeStringMultiArray * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    robot_interfaces__msg__BridgeStringMultiArray__fini(msg);
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__Sequence__init(&msg->name, 0)) {
    robot_interfaces__msg__BridgeStringMultiArray__fini(msg);
    return false;
  }
  // string_values
  if (!rosidl_runtime_c__String__Sequence__init(&msg->string_values, 0)) {
    robot_interfaces__msg__BridgeStringMultiArray__fini(msg);
    return false;
  }
  return true;
}

void
robot_interfaces__msg__BridgeStringMultiArray__fini(robot_interfaces__msg__BridgeStringMultiArray * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // name
  rosidl_runtime_c__String__Sequence__fini(&msg->name);
  // string_values
  rosidl_runtime_c__String__Sequence__fini(&msg->string_values);
}

bool
robot_interfaces__msg__BridgeStringMultiArray__are_equal(const robot_interfaces__msg__BridgeStringMultiArray * lhs, const robot_interfaces__msg__BridgeStringMultiArray * rhs)
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
  // string_values
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->string_values), &(rhs->string_values)))
  {
    return false;
  }
  return true;
}

bool
robot_interfaces__msg__BridgeStringMultiArray__copy(
  const robot_interfaces__msg__BridgeStringMultiArray * input,
  robot_interfaces__msg__BridgeStringMultiArray * output)
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
  // string_values
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->string_values), &(output->string_values)))
  {
    return false;
  }
  return true;
}

robot_interfaces__msg__BridgeStringMultiArray *
robot_interfaces__msg__BridgeStringMultiArray__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_interfaces__msg__BridgeStringMultiArray * msg = (robot_interfaces__msg__BridgeStringMultiArray *)allocator.allocate(sizeof(robot_interfaces__msg__BridgeStringMultiArray), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robot_interfaces__msg__BridgeStringMultiArray));
  bool success = robot_interfaces__msg__BridgeStringMultiArray__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robot_interfaces__msg__BridgeStringMultiArray__destroy(robot_interfaces__msg__BridgeStringMultiArray * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robot_interfaces__msg__BridgeStringMultiArray__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robot_interfaces__msg__BridgeStringMultiArray__Sequence__init(robot_interfaces__msg__BridgeStringMultiArray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_interfaces__msg__BridgeStringMultiArray * data = NULL;

  if (size) {
    data = (robot_interfaces__msg__BridgeStringMultiArray *)allocator.zero_allocate(size, sizeof(robot_interfaces__msg__BridgeStringMultiArray), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robot_interfaces__msg__BridgeStringMultiArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robot_interfaces__msg__BridgeStringMultiArray__fini(&data[i - 1]);
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
robot_interfaces__msg__BridgeStringMultiArray__Sequence__fini(robot_interfaces__msg__BridgeStringMultiArray__Sequence * array)
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
      robot_interfaces__msg__BridgeStringMultiArray__fini(&array->data[i]);
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

robot_interfaces__msg__BridgeStringMultiArray__Sequence *
robot_interfaces__msg__BridgeStringMultiArray__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_interfaces__msg__BridgeStringMultiArray__Sequence * array = (robot_interfaces__msg__BridgeStringMultiArray__Sequence *)allocator.allocate(sizeof(robot_interfaces__msg__BridgeStringMultiArray__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robot_interfaces__msg__BridgeStringMultiArray__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robot_interfaces__msg__BridgeStringMultiArray__Sequence__destroy(robot_interfaces__msg__BridgeStringMultiArray__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robot_interfaces__msg__BridgeStringMultiArray__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robot_interfaces__msg__BridgeStringMultiArray__Sequence__are_equal(const robot_interfaces__msg__BridgeStringMultiArray__Sequence * lhs, const robot_interfaces__msg__BridgeStringMultiArray__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robot_interfaces__msg__BridgeStringMultiArray__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robot_interfaces__msg__BridgeStringMultiArray__Sequence__copy(
  const robot_interfaces__msg__BridgeStringMultiArray__Sequence * input,
  robot_interfaces__msg__BridgeStringMultiArray__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robot_interfaces__msg__BridgeStringMultiArray);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robot_interfaces__msg__BridgeStringMultiArray * data =
      (robot_interfaces__msg__BridgeStringMultiArray *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robot_interfaces__msg__BridgeStringMultiArray__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robot_interfaces__msg__BridgeStringMultiArray__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robot_interfaces__msg__BridgeStringMultiArray__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
