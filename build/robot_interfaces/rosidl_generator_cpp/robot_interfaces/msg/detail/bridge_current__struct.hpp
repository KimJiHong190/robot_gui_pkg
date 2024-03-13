// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robot_interfaces:msg/BridgeCurrent.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_INTERFACES__MSG__DETAIL__BRIDGE_CURRENT__STRUCT_HPP_
#define ROBOT_INTERFACES__MSG__DETAIL__BRIDGE_CURRENT__STRUCT_HPP_

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
# define DEPRECATED__robot_interfaces__msg__BridgeCurrent __attribute__((deprecated))
#else
# define DEPRECATED__robot_interfaces__msg__BridgeCurrent __declspec(deprecated)
#endif

namespace robot_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BridgeCurrent_
{
  using Type = BridgeCurrent_<ContainerAllocator>;

  explicit BridgeCurrent_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->anchor_current_sum = 0.0;
      this->ascender_current_sum = 0.0;
      this->wheelleg_current_sum = 0.0;
    }
  }

  explicit BridgeCurrent_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->anchor_current_sum = 0.0;
      this->ascender_current_sum = 0.0;
      this->wheelleg_current_sum = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _anchor_fix_current_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _anchor_fix_current_type anchor_fix_current;
  using _anchor_move_current_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _anchor_move_current_type anchor_move_current;
  using _ascender_motor_current_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _ascender_motor_current_type ascender_motor_current;
  using _wheelleg_joint_current_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _wheelleg_joint_current_type wheelleg_joint_current;
  using _wheelleg_turret_current_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _wheelleg_turret_current_type wheelleg_turret_current;
  using _wheelleg_wheel_current_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _wheelleg_wheel_current_type wheelleg_wheel_current;
  using _anchor_current_sum_type =
    double;
  _anchor_current_sum_type anchor_current_sum;
  using _ascender_current_sum_type =
    double;
  _ascender_current_sum_type ascender_current_sum;
  using _wheelleg_current_sum_type =
    double;
  _wheelleg_current_sum_type wheelleg_current_sum;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__anchor_fix_current(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->anchor_fix_current = _arg;
    return *this;
  }
  Type & set__anchor_move_current(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->anchor_move_current = _arg;
    return *this;
  }
  Type & set__ascender_motor_current(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->ascender_motor_current = _arg;
    return *this;
  }
  Type & set__wheelleg_joint_current(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->wheelleg_joint_current = _arg;
    return *this;
  }
  Type & set__wheelleg_turret_current(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->wheelleg_turret_current = _arg;
    return *this;
  }
  Type & set__wheelleg_wheel_current(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->wheelleg_wheel_current = _arg;
    return *this;
  }
  Type & set__anchor_current_sum(
    const double & _arg)
  {
    this->anchor_current_sum = _arg;
    return *this;
  }
  Type & set__ascender_current_sum(
    const double & _arg)
  {
    this->ascender_current_sum = _arg;
    return *this;
  }
  Type & set__wheelleg_current_sum(
    const double & _arg)
  {
    this->wheelleg_current_sum = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robot_interfaces::msg::BridgeCurrent_<ContainerAllocator> *;
  using ConstRawPtr =
    const robot_interfaces::msg::BridgeCurrent_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robot_interfaces::msg::BridgeCurrent_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robot_interfaces::msg::BridgeCurrent_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robot_interfaces::msg::BridgeCurrent_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robot_interfaces::msg::BridgeCurrent_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robot_interfaces::msg::BridgeCurrent_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robot_interfaces::msg::BridgeCurrent_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robot_interfaces::msg::BridgeCurrent_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robot_interfaces::msg::BridgeCurrent_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robot_interfaces__msg__BridgeCurrent
    std::shared_ptr<robot_interfaces::msg::BridgeCurrent_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robot_interfaces__msg__BridgeCurrent
    std::shared_ptr<robot_interfaces::msg::BridgeCurrent_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BridgeCurrent_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->anchor_fix_current != other.anchor_fix_current) {
      return false;
    }
    if (this->anchor_move_current != other.anchor_move_current) {
      return false;
    }
    if (this->ascender_motor_current != other.ascender_motor_current) {
      return false;
    }
    if (this->wheelleg_joint_current != other.wheelleg_joint_current) {
      return false;
    }
    if (this->wheelleg_turret_current != other.wheelleg_turret_current) {
      return false;
    }
    if (this->wheelleg_wheel_current != other.wheelleg_wheel_current) {
      return false;
    }
    if (this->anchor_current_sum != other.anchor_current_sum) {
      return false;
    }
    if (this->ascender_current_sum != other.ascender_current_sum) {
      return false;
    }
    if (this->wheelleg_current_sum != other.wheelleg_current_sum) {
      return false;
    }
    return true;
  }
  bool operator!=(const BridgeCurrent_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BridgeCurrent_

// alias to use template instance with default allocator
using BridgeCurrent =
  robot_interfaces::msg::BridgeCurrent_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace robot_interfaces

#endif  // ROBOT_INTERFACES__MSG__DETAIL__BRIDGE_CURRENT__STRUCT_HPP_
