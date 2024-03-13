// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ros2_interfaces:msg/BridgeCurrent.idl
// generated code does not contain a copyright notice
#include "ros2_interfaces/msg/detail/bridge_current__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ros2_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ros2_interfaces/msg/detail/bridge_current__struct.h"
#include "ros2_interfaces/msg/detail/bridge_current__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/primitives_sequence.h"  // anchor_fix_current, anchor_move_current, ascender_motor_current, wheelleg_joint_current, wheelleg_turret_current, wheelleg_wheel_current
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // anchor_fix_current, anchor_move_current, ascender_motor_current, wheelleg_joint_current, wheelleg_turret_current, wheelleg_wheel_current
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_ros2_interfaces
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_ros2_interfaces
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_ros2_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _BridgeCurrent__ros_msg_type = ros2_interfaces__msg__BridgeCurrent;

static bool _BridgeCurrent__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _BridgeCurrent__ros_msg_type * ros_message = static_cast<const _BridgeCurrent__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->header, cdr))
    {
      return false;
    }
  }

  // Field name: anchor_fix_current
  {
    size_t size = ros_message->anchor_fix_current.size;
    auto array_ptr = ros_message->anchor_fix_current.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: anchor_move_current
  {
    size_t size = ros_message->anchor_move_current.size;
    auto array_ptr = ros_message->anchor_move_current.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: ascender_motor_current
  {
    size_t size = ros_message->ascender_motor_current.size;
    auto array_ptr = ros_message->ascender_motor_current.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: wheelleg_joint_current
  {
    size_t size = ros_message->wheelleg_joint_current.size;
    auto array_ptr = ros_message->wheelleg_joint_current.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: wheelleg_turret_current
  {
    size_t size = ros_message->wheelleg_turret_current.size;
    auto array_ptr = ros_message->wheelleg_turret_current.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: wheelleg_wheel_current
  {
    size_t size = ros_message->wheelleg_wheel_current.size;
    auto array_ptr = ros_message->wheelleg_wheel_current.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: anchor_current_sum
  {
    cdr << ros_message->anchor_current_sum;
  }

  // Field name: ascender_current_sum
  {
    cdr << ros_message->ascender_current_sum;
  }

  // Field name: wheelleg_current_sum
  {
    cdr << ros_message->wheelleg_current_sum;
  }

  return true;
}

static bool _BridgeCurrent__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _BridgeCurrent__ros_msg_type * ros_message = static_cast<_BridgeCurrent__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->header))
    {
      return false;
    }
  }

  // Field name: anchor_fix_current
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->anchor_fix_current.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->anchor_fix_current);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->anchor_fix_current, size)) {
      fprintf(stderr, "failed to create array for field 'anchor_fix_current'");
      return false;
    }
    auto array_ptr = ros_message->anchor_fix_current.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: anchor_move_current
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->anchor_move_current.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->anchor_move_current);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->anchor_move_current, size)) {
      fprintf(stderr, "failed to create array for field 'anchor_move_current'");
      return false;
    }
    auto array_ptr = ros_message->anchor_move_current.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: ascender_motor_current
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->ascender_motor_current.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->ascender_motor_current);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->ascender_motor_current, size)) {
      fprintf(stderr, "failed to create array for field 'ascender_motor_current'");
      return false;
    }
    auto array_ptr = ros_message->ascender_motor_current.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: wheelleg_joint_current
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->wheelleg_joint_current.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->wheelleg_joint_current);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->wheelleg_joint_current, size)) {
      fprintf(stderr, "failed to create array for field 'wheelleg_joint_current'");
      return false;
    }
    auto array_ptr = ros_message->wheelleg_joint_current.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: wheelleg_turret_current
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->wheelleg_turret_current.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->wheelleg_turret_current);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->wheelleg_turret_current, size)) {
      fprintf(stderr, "failed to create array for field 'wheelleg_turret_current'");
      return false;
    }
    auto array_ptr = ros_message->wheelleg_turret_current.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: wheelleg_wheel_current
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->wheelleg_wheel_current.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->wheelleg_wheel_current);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->wheelleg_wheel_current, size)) {
      fprintf(stderr, "failed to create array for field 'wheelleg_wheel_current'");
      return false;
    }
    auto array_ptr = ros_message->wheelleg_wheel_current.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: anchor_current_sum
  {
    cdr >> ros_message->anchor_current_sum;
  }

  // Field name: ascender_current_sum
  {
    cdr >> ros_message->ascender_current_sum;
  }

  // Field name: wheelleg_current_sum
  {
    cdr >> ros_message->wheelleg_current_sum;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros2_interfaces
size_t get_serialized_size_ros2_interfaces__msg__BridgeCurrent(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _BridgeCurrent__ros_msg_type * ros_message = static_cast<const _BridgeCurrent__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name anchor_fix_current
  {
    size_t array_size = ros_message->anchor_fix_current.size;
    auto array_ptr = ros_message->anchor_fix_current.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name anchor_move_current
  {
    size_t array_size = ros_message->anchor_move_current.size;
    auto array_ptr = ros_message->anchor_move_current.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ascender_motor_current
  {
    size_t array_size = ros_message->ascender_motor_current.size;
    auto array_ptr = ros_message->ascender_motor_current.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wheelleg_joint_current
  {
    size_t array_size = ros_message->wheelleg_joint_current.size;
    auto array_ptr = ros_message->wheelleg_joint_current.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wheelleg_turret_current
  {
    size_t array_size = ros_message->wheelleg_turret_current.size;
    auto array_ptr = ros_message->wheelleg_turret_current.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wheelleg_wheel_current
  {
    size_t array_size = ros_message->wheelleg_wheel_current.size;
    auto array_ptr = ros_message->wheelleg_wheel_current.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name anchor_current_sum
  {
    size_t item_size = sizeof(ros_message->anchor_current_sum);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ascender_current_sum
  {
    size_t item_size = sizeof(ros_message->ascender_current_sum);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wheelleg_current_sum
  {
    size_t item_size = sizeof(ros_message->wheelleg_current_sum);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _BridgeCurrent__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ros2_interfaces__msg__BridgeCurrent(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros2_interfaces
size_t max_serialized_size_ros2_interfaces__msg__BridgeCurrent(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: anchor_fix_current
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: anchor_move_current
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: ascender_motor_current
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: wheelleg_joint_current
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: wheelleg_turret_current
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: wheelleg_wheel_current
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: anchor_current_sum
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: ascender_current_sum
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: wheelleg_current_sum
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _BridgeCurrent__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ros2_interfaces__msg__BridgeCurrent(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_BridgeCurrent = {
  "ros2_interfaces::msg",
  "BridgeCurrent",
  _BridgeCurrent__cdr_serialize,
  _BridgeCurrent__cdr_deserialize,
  _BridgeCurrent__get_serialized_size,
  _BridgeCurrent__max_serialized_size
};

static rosidl_message_type_support_t _BridgeCurrent__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_BridgeCurrent,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros2_interfaces, msg, BridgeCurrent)() {
  return &_BridgeCurrent__type_support;
}

#if defined(__cplusplus)
}
#endif
