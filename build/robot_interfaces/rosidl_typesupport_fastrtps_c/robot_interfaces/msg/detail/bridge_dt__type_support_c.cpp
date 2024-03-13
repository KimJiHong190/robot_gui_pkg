// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from robot_interfaces:msg/BridgeDt.idl
// generated code does not contain a copyright notice
#include "robot_interfaces/msg/detail/bridge_dt__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "robot_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "robot_interfaces/msg/detail/bridge_dt__struct.h"
#include "robot_interfaces/msg/detail/bridge_dt__functions.h"
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

#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_robot_interfaces
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_robot_interfaces
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_robot_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _BridgeDt__ros_msg_type = robot_interfaces__msg__BridgeDt;

static bool _BridgeDt__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _BridgeDt__ros_msg_type * ros_message = static_cast<const _BridgeDt__ros_msg_type *>(untyped_ros_message);
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

  // Field name: dt_can_tx
  {
    cdr << ros_message->dt_can_tx;
  }

  // Field name: dt_can_tx_joint
  {
    cdr << ros_message->dt_can_tx_joint;
  }

  // Field name: dt_can_tx_wheel
  {
    cdr << ros_message->dt_can_tx_wheel;
  }

  // Field name: dt_can_tx_turret
  {
    cdr << ros_message->dt_can_tx_turret;
  }

  // Field name: dt_can_rx
  {
    cdr << ros_message->dt_can_rx;
  }

  // Field name: dt_mean_can_tx
  {
    cdr << ros_message->dt_mean_can_tx;
  }

  // Field name: dt_mean_can_tx_joint
  {
    cdr << ros_message->dt_mean_can_tx_joint;
  }

  // Field name: dt_mean_can_tx_wheel
  {
    cdr << ros_message->dt_mean_can_tx_wheel;
  }

  // Field name: dt_mean_can_tx_turret
  {
    cdr << ros_message->dt_mean_can_tx_turret;
  }

  // Field name: dt_mean_can_rx
  {
    cdr << ros_message->dt_mean_can_rx;
  }

  return true;
}

static bool _BridgeDt__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _BridgeDt__ros_msg_type * ros_message = static_cast<_BridgeDt__ros_msg_type *>(untyped_ros_message);
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

  // Field name: dt_can_tx
  {
    cdr >> ros_message->dt_can_tx;
  }

  // Field name: dt_can_tx_joint
  {
    cdr >> ros_message->dt_can_tx_joint;
  }

  // Field name: dt_can_tx_wheel
  {
    cdr >> ros_message->dt_can_tx_wheel;
  }

  // Field name: dt_can_tx_turret
  {
    cdr >> ros_message->dt_can_tx_turret;
  }

  // Field name: dt_can_rx
  {
    cdr >> ros_message->dt_can_rx;
  }

  // Field name: dt_mean_can_tx
  {
    cdr >> ros_message->dt_mean_can_tx;
  }

  // Field name: dt_mean_can_tx_joint
  {
    cdr >> ros_message->dt_mean_can_tx_joint;
  }

  // Field name: dt_mean_can_tx_wheel
  {
    cdr >> ros_message->dt_mean_can_tx_wheel;
  }

  // Field name: dt_mean_can_tx_turret
  {
    cdr >> ros_message->dt_mean_can_tx_turret;
  }

  // Field name: dt_mean_can_rx
  {
    cdr >> ros_message->dt_mean_can_rx;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robot_interfaces
size_t get_serialized_size_robot_interfaces__msg__BridgeDt(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _BridgeDt__ros_msg_type * ros_message = static_cast<const _BridgeDt__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name dt_can_tx
  {
    size_t item_size = sizeof(ros_message->dt_can_tx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dt_can_tx_joint
  {
    size_t item_size = sizeof(ros_message->dt_can_tx_joint);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dt_can_tx_wheel
  {
    size_t item_size = sizeof(ros_message->dt_can_tx_wheel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dt_can_tx_turret
  {
    size_t item_size = sizeof(ros_message->dt_can_tx_turret);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dt_can_rx
  {
    size_t item_size = sizeof(ros_message->dt_can_rx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dt_mean_can_tx
  {
    size_t item_size = sizeof(ros_message->dt_mean_can_tx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dt_mean_can_tx_joint
  {
    size_t item_size = sizeof(ros_message->dt_mean_can_tx_joint);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dt_mean_can_tx_wheel
  {
    size_t item_size = sizeof(ros_message->dt_mean_can_tx_wheel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dt_mean_can_tx_turret
  {
    size_t item_size = sizeof(ros_message->dt_mean_can_tx_turret);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dt_mean_can_rx
  {
    size_t item_size = sizeof(ros_message->dt_mean_can_rx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _BridgeDt__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_robot_interfaces__msg__BridgeDt(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robot_interfaces
size_t max_serialized_size_robot_interfaces__msg__BridgeDt(
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
  // member: dt_can_tx
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: dt_can_tx_joint
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: dt_can_tx_wheel
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: dt_can_tx_turret
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: dt_can_rx
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: dt_mean_can_tx
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: dt_mean_can_tx_joint
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: dt_mean_can_tx_wheel
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: dt_mean_can_tx_turret
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: dt_mean_can_rx
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _BridgeDt__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_robot_interfaces__msg__BridgeDt(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_BridgeDt = {
  "robot_interfaces::msg",
  "BridgeDt",
  _BridgeDt__cdr_serialize,
  _BridgeDt__cdr_deserialize,
  _BridgeDt__get_serialized_size,
  _BridgeDt__max_serialized_size
};

static rosidl_message_type_support_t _BridgeDt__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_BridgeDt,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robot_interfaces, msg, BridgeDt)() {
  return &_BridgeDt__type_support;
}

#if defined(__cplusplus)
}
#endif
