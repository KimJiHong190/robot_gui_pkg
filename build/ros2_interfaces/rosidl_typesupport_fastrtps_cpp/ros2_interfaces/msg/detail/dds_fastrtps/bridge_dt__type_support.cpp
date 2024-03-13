// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from ros2_interfaces:msg/BridgeDt.idl
// generated code does not contain a copyright notice
#include "ros2_interfaces/msg/detail/bridge_dt__rosidl_typesupport_fastrtps_cpp.hpp"
#include "ros2_interfaces/msg/detail/bridge_dt__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs


namespace ros2_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros2_interfaces
cdr_serialize(
  const ros2_interfaces::msg::BridgeDt & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: dt_can_tx
  cdr << ros_message.dt_can_tx;
  // Member: dt_can_tx_joint
  cdr << ros_message.dt_can_tx_joint;
  // Member: dt_can_tx_wheel
  cdr << ros_message.dt_can_tx_wheel;
  // Member: dt_can_tx_turret
  cdr << ros_message.dt_can_tx_turret;
  // Member: dt_can_rx
  cdr << ros_message.dt_can_rx;
  // Member: dt_mean_can_tx
  cdr << ros_message.dt_mean_can_tx;
  // Member: dt_mean_can_tx_joint
  cdr << ros_message.dt_mean_can_tx_joint;
  // Member: dt_mean_can_tx_wheel
  cdr << ros_message.dt_mean_can_tx_wheel;
  // Member: dt_mean_can_tx_turret
  cdr << ros_message.dt_mean_can_tx_turret;
  // Member: dt_mean_can_rx
  cdr << ros_message.dt_mean_can_rx;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros2_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ros2_interfaces::msg::BridgeDt & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: dt_can_tx
  cdr >> ros_message.dt_can_tx;

  // Member: dt_can_tx_joint
  cdr >> ros_message.dt_can_tx_joint;

  // Member: dt_can_tx_wheel
  cdr >> ros_message.dt_can_tx_wheel;

  // Member: dt_can_tx_turret
  cdr >> ros_message.dt_can_tx_turret;

  // Member: dt_can_rx
  cdr >> ros_message.dt_can_rx;

  // Member: dt_mean_can_tx
  cdr >> ros_message.dt_mean_can_tx;

  // Member: dt_mean_can_tx_joint
  cdr >> ros_message.dt_mean_can_tx_joint;

  // Member: dt_mean_can_tx_wheel
  cdr >> ros_message.dt_mean_can_tx_wheel;

  // Member: dt_mean_can_tx_turret
  cdr >> ros_message.dt_mean_can_tx_turret;

  // Member: dt_mean_can_rx
  cdr >> ros_message.dt_mean_can_rx;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros2_interfaces
get_serialized_size(
  const ros2_interfaces::msg::BridgeDt & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);
  // Member: dt_can_tx
  {
    size_t item_size = sizeof(ros_message.dt_can_tx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dt_can_tx_joint
  {
    size_t item_size = sizeof(ros_message.dt_can_tx_joint);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dt_can_tx_wheel
  {
    size_t item_size = sizeof(ros_message.dt_can_tx_wheel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dt_can_tx_turret
  {
    size_t item_size = sizeof(ros_message.dt_can_tx_turret);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dt_can_rx
  {
    size_t item_size = sizeof(ros_message.dt_can_rx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dt_mean_can_tx
  {
    size_t item_size = sizeof(ros_message.dt_mean_can_tx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dt_mean_can_tx_joint
  {
    size_t item_size = sizeof(ros_message.dt_mean_can_tx_joint);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dt_mean_can_tx_wheel
  {
    size_t item_size = sizeof(ros_message.dt_mean_can_tx_wheel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dt_mean_can_tx_turret
  {
    size_t item_size = sizeof(ros_message.dt_mean_can_tx_turret);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dt_mean_can_rx
  {
    size_t item_size = sizeof(ros_message.dt_mean_can_rx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros2_interfaces
max_serialized_size_BridgeDt(
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


  // Member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: dt_can_tx
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: dt_can_tx_joint
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: dt_can_tx_wheel
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: dt_can_tx_turret
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: dt_can_rx
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: dt_mean_can_tx
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: dt_mean_can_tx_joint
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: dt_mean_can_tx_wheel
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: dt_mean_can_tx_turret
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: dt_mean_can_rx
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _BridgeDt__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const ros2_interfaces::msg::BridgeDt *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _BridgeDt__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<ros2_interfaces::msg::BridgeDt *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _BridgeDt__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const ros2_interfaces::msg::BridgeDt *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _BridgeDt__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_BridgeDt(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _BridgeDt__callbacks = {
  "ros2_interfaces::msg",
  "BridgeDt",
  _BridgeDt__cdr_serialize,
  _BridgeDt__cdr_deserialize,
  _BridgeDt__get_serialized_size,
  _BridgeDt__max_serialized_size
};

static rosidl_message_type_support_t _BridgeDt__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_BridgeDt__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace ros2_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_ros2_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<ros2_interfaces::msg::BridgeDt>()
{
  return &ros2_interfaces::msg::typesupport_fastrtps_cpp::_BridgeDt__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ros2_interfaces, msg, BridgeDt)() {
  return &ros2_interfaces::msg::typesupport_fastrtps_cpp::_BridgeDt__handle;
}

#ifdef __cplusplus
}
#endif
