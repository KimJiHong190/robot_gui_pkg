// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robot_interfaces:msg/BridgeError.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_INTERFACES__MSG__DETAIL__BRIDGE_ERROR__STRUCT_HPP_
#define ROBOT_INTERFACES__MSG__DETAIL__BRIDGE_ERROR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__robot_interfaces__msg__BridgeError __attribute__((deprecated))
#else
# define DEPRECATED__robot_interfaces__msg__BridgeError __declspec(deprecated)
#endif

namespace robot_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BridgeError_
{
  using Type = BridgeError_<ContainerAllocator>;

  explicit BridgeError_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->error_can = 0ll;
    }
  }

  explicit BridgeError_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->error_can = 0ll;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _error_can_type =
    int64_t;
  _error_can_type error_can;
  using _error_joint_stuck_type =
    std::vector<int64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int64_t>>;
  _error_joint_stuck_type error_joint_stuck;
  using _is_error_over_current_type =
    std::vector<int64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int64_t>>;
  _is_error_over_current_type is_error_over_current;
  using _is_error_over_range_type =
    std::vector<int64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int64_t>>;
  _is_error_over_range_type is_error_over_range;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__error_can(
    const int64_t & _arg)
  {
    this->error_can = _arg;
    return *this;
  }
  Type & set__error_joint_stuck(
    const std::vector<int64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int64_t>> & _arg)
  {
    this->error_joint_stuck = _arg;
    return *this;
  }
  Type & set__is_error_over_current(
    const std::vector<int64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int64_t>> & _arg)
  {
    this->is_error_over_current = _arg;
    return *this;
  }
  Type & set__is_error_over_range(
    const std::vector<int64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int64_t>> & _arg)
  {
    this->is_error_over_range = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robot_interfaces::msg::BridgeError_<ContainerAllocator> *;
  using ConstRawPtr =
    const robot_interfaces::msg::BridgeError_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robot_interfaces::msg::BridgeError_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robot_interfaces::msg::BridgeError_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robot_interfaces::msg::BridgeError_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robot_interfaces::msg::BridgeError_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robot_interfaces::msg::BridgeError_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robot_interfaces::msg::BridgeError_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robot_interfaces::msg::BridgeError_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robot_interfaces::msg::BridgeError_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robot_interfaces__msg__BridgeError
    std::shared_ptr<robot_interfaces::msg::BridgeError_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robot_interfaces__msg__BridgeError
    std::shared_ptr<robot_interfaces::msg::BridgeError_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BridgeError_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->error_can != other.error_can) {
      return false;
    }
    if (this->error_joint_stuck != other.error_joint_stuck) {
      return false;
    }
    if (this->is_error_over_current != other.is_error_over_current) {
      return false;
    }
    if (this->is_error_over_range != other.is_error_over_range) {
      return false;
    }
    return true;
  }
  bool operator!=(const BridgeError_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BridgeError_

// alias to use template instance with default allocator
using BridgeError =
  robot_interfaces::msg::BridgeError_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace robot_interfaces

#endif  // ROBOT_INTERFACES__MSG__DETAIL__BRIDGE_ERROR__STRUCT_HPP_
