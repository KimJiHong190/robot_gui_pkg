// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from robot_interfaces:msg/BridgeDt.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_INTERFACES__MSG__DETAIL__BRIDGE_DT__FUNCTIONS_H_
#define ROBOT_INTERFACES__MSG__DETAIL__BRIDGE_DT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "robot_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "robot_interfaces/msg/detail/bridge_dt__struct.h"

/// Initialize msg/BridgeDt message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * robot_interfaces__msg__BridgeDt
 * )) before or use
 * robot_interfaces__msg__BridgeDt__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_interfaces
bool
robot_interfaces__msg__BridgeDt__init(robot_interfaces__msg__BridgeDt * msg);

/// Finalize msg/BridgeDt message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_interfaces
void
robot_interfaces__msg__BridgeDt__fini(robot_interfaces__msg__BridgeDt * msg);

/// Create msg/BridgeDt message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * robot_interfaces__msg__BridgeDt__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_interfaces
robot_interfaces__msg__BridgeDt *
robot_interfaces__msg__BridgeDt__create();

/// Destroy msg/BridgeDt message.
/**
 * It calls
 * robot_interfaces__msg__BridgeDt__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_interfaces
void
robot_interfaces__msg__BridgeDt__destroy(robot_interfaces__msg__BridgeDt * msg);

/// Check for msg/BridgeDt message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_interfaces
bool
robot_interfaces__msg__BridgeDt__are_equal(const robot_interfaces__msg__BridgeDt * lhs, const robot_interfaces__msg__BridgeDt * rhs);

/// Copy a msg/BridgeDt message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_interfaces
bool
robot_interfaces__msg__BridgeDt__copy(
  const robot_interfaces__msg__BridgeDt * input,
  robot_interfaces__msg__BridgeDt * output);

/// Initialize array of msg/BridgeDt messages.
/**
 * It allocates the memory for the number of elements and calls
 * robot_interfaces__msg__BridgeDt__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_interfaces
bool
robot_interfaces__msg__BridgeDt__Sequence__init(robot_interfaces__msg__BridgeDt__Sequence * array, size_t size);

/// Finalize array of msg/BridgeDt messages.
/**
 * It calls
 * robot_interfaces__msg__BridgeDt__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_interfaces
void
robot_interfaces__msg__BridgeDt__Sequence__fini(robot_interfaces__msg__BridgeDt__Sequence * array);

/// Create array of msg/BridgeDt messages.
/**
 * It allocates the memory for the array and calls
 * robot_interfaces__msg__BridgeDt__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_interfaces
robot_interfaces__msg__BridgeDt__Sequence *
robot_interfaces__msg__BridgeDt__Sequence__create(size_t size);

/// Destroy array of msg/BridgeDt messages.
/**
 * It calls
 * robot_interfaces__msg__BridgeDt__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_interfaces
void
robot_interfaces__msg__BridgeDt__Sequence__destroy(robot_interfaces__msg__BridgeDt__Sequence * array);

/// Check for msg/BridgeDt message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_interfaces
bool
robot_interfaces__msg__BridgeDt__Sequence__are_equal(const robot_interfaces__msg__BridgeDt__Sequence * lhs, const robot_interfaces__msg__BridgeDt__Sequence * rhs);

/// Copy an array of msg/BridgeDt messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_interfaces
bool
robot_interfaces__msg__BridgeDt__Sequence__copy(
  const robot_interfaces__msg__BridgeDt__Sequence * input,
  robot_interfaces__msg__BridgeDt__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ROBOT_INTERFACES__MSG__DETAIL__BRIDGE_DT__FUNCTIONS_H_
