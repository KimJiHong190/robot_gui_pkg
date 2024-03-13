// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_interfaces:msg/BridgeDt.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACES__MSG__DETAIL__BRIDGE_DT__STRUCT_HPP_
#define ROS2_INTERFACES__MSG__DETAIL__BRIDGE_DT__STRUCT_HPP_

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
# define DEPRECATED__ros2_interfaces__msg__BridgeDt __attribute__((deprecated))
#else
# define DEPRECATED__ros2_interfaces__msg__BridgeDt __declspec(deprecated)
#endif

namespace ros2_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BridgeDt_
{
  using Type = BridgeDt_<ContainerAllocator>;

  explicit BridgeDt_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->dt_can_tx = 0.0;
      this->dt_can_tx_joint = 0.0;
      this->dt_can_tx_wheel = 0.0;
      this->dt_can_tx_turret = 0.0;
      this->dt_can_rx = 0.0;
      this->dt_mean_can_tx = 0.0;
      this->dt_mean_can_tx_joint = 0.0;
      this->dt_mean_can_tx_wheel = 0.0;
      this->dt_mean_can_tx_turret = 0.0;
      this->dt_mean_can_rx = 0.0;
    }
  }

  explicit BridgeDt_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->dt_can_tx = 0.0;
      this->dt_can_tx_joint = 0.0;
      this->dt_can_tx_wheel = 0.0;
      this->dt_can_tx_turret = 0.0;
      this->dt_can_rx = 0.0;
      this->dt_mean_can_tx = 0.0;
      this->dt_mean_can_tx_joint = 0.0;
      this->dt_mean_can_tx_wheel = 0.0;
      this->dt_mean_can_tx_turret = 0.0;
      this->dt_mean_can_rx = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _dt_can_tx_type =
    double;
  _dt_can_tx_type dt_can_tx;
  using _dt_can_tx_joint_type =
    double;
  _dt_can_tx_joint_type dt_can_tx_joint;
  using _dt_can_tx_wheel_type =
    double;
  _dt_can_tx_wheel_type dt_can_tx_wheel;
  using _dt_can_tx_turret_type =
    double;
  _dt_can_tx_turret_type dt_can_tx_turret;
  using _dt_can_rx_type =
    double;
  _dt_can_rx_type dt_can_rx;
  using _dt_mean_can_tx_type =
    double;
  _dt_mean_can_tx_type dt_mean_can_tx;
  using _dt_mean_can_tx_joint_type =
    double;
  _dt_mean_can_tx_joint_type dt_mean_can_tx_joint;
  using _dt_mean_can_tx_wheel_type =
    double;
  _dt_mean_can_tx_wheel_type dt_mean_can_tx_wheel;
  using _dt_mean_can_tx_turret_type =
    double;
  _dt_mean_can_tx_turret_type dt_mean_can_tx_turret;
  using _dt_mean_can_rx_type =
    double;
  _dt_mean_can_rx_type dt_mean_can_rx;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__dt_can_tx(
    const double & _arg)
  {
    this->dt_can_tx = _arg;
    return *this;
  }
  Type & set__dt_can_tx_joint(
    const double & _arg)
  {
    this->dt_can_tx_joint = _arg;
    return *this;
  }
  Type & set__dt_can_tx_wheel(
    const double & _arg)
  {
    this->dt_can_tx_wheel = _arg;
    return *this;
  }
  Type & set__dt_can_tx_turret(
    const double & _arg)
  {
    this->dt_can_tx_turret = _arg;
    return *this;
  }
  Type & set__dt_can_rx(
    const double & _arg)
  {
    this->dt_can_rx = _arg;
    return *this;
  }
  Type & set__dt_mean_can_tx(
    const double & _arg)
  {
    this->dt_mean_can_tx = _arg;
    return *this;
  }
  Type & set__dt_mean_can_tx_joint(
    const double & _arg)
  {
    this->dt_mean_can_tx_joint = _arg;
    return *this;
  }
  Type & set__dt_mean_can_tx_wheel(
    const double & _arg)
  {
    this->dt_mean_can_tx_wheel = _arg;
    return *this;
  }
  Type & set__dt_mean_can_tx_turret(
    const double & _arg)
  {
    this->dt_mean_can_tx_turret = _arg;
    return *this;
  }
  Type & set__dt_mean_can_rx(
    const double & _arg)
  {
    this->dt_mean_can_rx = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_interfaces::msg::BridgeDt_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_interfaces::msg::BridgeDt_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_interfaces::msg::BridgeDt_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_interfaces::msg::BridgeDt_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_interfaces::msg::BridgeDt_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_interfaces::msg::BridgeDt_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_interfaces::msg::BridgeDt_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_interfaces::msg::BridgeDt_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_interfaces::msg::BridgeDt_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_interfaces::msg::BridgeDt_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_interfaces__msg__BridgeDt
    std::shared_ptr<ros2_interfaces::msg::BridgeDt_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_interfaces__msg__BridgeDt
    std::shared_ptr<ros2_interfaces::msg::BridgeDt_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BridgeDt_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->dt_can_tx != other.dt_can_tx) {
      return false;
    }
    if (this->dt_can_tx_joint != other.dt_can_tx_joint) {
      return false;
    }
    if (this->dt_can_tx_wheel != other.dt_can_tx_wheel) {
      return false;
    }
    if (this->dt_can_tx_turret != other.dt_can_tx_turret) {
      return false;
    }
    if (this->dt_can_rx != other.dt_can_rx) {
      return false;
    }
    if (this->dt_mean_can_tx != other.dt_mean_can_tx) {
      return false;
    }
    if (this->dt_mean_can_tx_joint != other.dt_mean_can_tx_joint) {
      return false;
    }
    if (this->dt_mean_can_tx_wheel != other.dt_mean_can_tx_wheel) {
      return false;
    }
    if (this->dt_mean_can_tx_turret != other.dt_mean_can_tx_turret) {
      return false;
    }
    if (this->dt_mean_can_rx != other.dt_mean_can_rx) {
      return false;
    }
    return true;
  }
  bool operator!=(const BridgeDt_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BridgeDt_

// alias to use template instance with default allocator
using BridgeDt =
  ros2_interfaces::msg::BridgeDt_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros2_interfaces

#endif  // ROS2_INTERFACES__MSG__DETAIL__BRIDGE_DT__STRUCT_HPP_
