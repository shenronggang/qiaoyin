// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from driver:msg/ArmInfo.idl
// generated code does not contain a copyright notice

#ifndef DRIVER__MSG__DETAIL__ARM_INFO__STRUCT_HPP_
#define DRIVER__MSG__DETAIL__ARM_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__driver__msg__ArmInfo __attribute__((deprecated))
#else
# define DEPRECATED__driver__msg__ArmInfo __declspec(deprecated)
#endif

namespace driver
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ArmInfo_
{
  using Type = ArmInfo_<ContainerAllocator>;

  explicit ArmInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 7>::iterator, double>(this->left_arm_joints.begin(), this->left_arm_joints.end(), 0.0);
      std::fill<typename std::array<double, 7>::iterator, double>(this->right_arm_joints.begin(), this->right_arm_joints.end(), 0.0);
      std::fill<typename std::array<double, 6>::iterator, double>(this->left_arm_cart.begin(), this->left_arm_cart.end(), 0.0);
      std::fill<typename std::array<double, 6>::iterator, double>(this->right_arm_cart.begin(), this->right_arm_cart.end(), 0.0);
      std::fill<typename std::array<double, 2>::iterator, double>(this->speed.begin(), this->speed.end(), 0.0);
      this->motor_on = false;
    }
  }

  explicit ArmInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : left_arm_joints(_alloc),
    right_arm_joints(_alloc),
    left_arm_cart(_alloc),
    right_arm_cart(_alloc),
    speed(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 7>::iterator, double>(this->left_arm_joints.begin(), this->left_arm_joints.end(), 0.0);
      std::fill<typename std::array<double, 7>::iterator, double>(this->right_arm_joints.begin(), this->right_arm_joints.end(), 0.0);
      std::fill<typename std::array<double, 6>::iterator, double>(this->left_arm_cart.begin(), this->left_arm_cart.end(), 0.0);
      std::fill<typename std::array<double, 6>::iterator, double>(this->right_arm_cart.begin(), this->right_arm_cart.end(), 0.0);
      std::fill<typename std::array<double, 2>::iterator, double>(this->speed.begin(), this->speed.end(), 0.0);
      this->motor_on = false;
    }
  }

  // field types and members
  using _left_arm_joints_type =
    std::array<double, 7>;
  _left_arm_joints_type left_arm_joints;
  using _right_arm_joints_type =
    std::array<double, 7>;
  _right_arm_joints_type right_arm_joints;
  using _left_arm_cart_type =
    std::array<double, 6>;
  _left_arm_cart_type left_arm_cart;
  using _right_arm_cart_type =
    std::array<double, 6>;
  _right_arm_cart_type right_arm_cart;
  using _speed_type =
    std::array<double, 2>;
  _speed_type speed;
  using _motor_on_type =
    bool;
  _motor_on_type motor_on;

  // setters for named parameter idiom
  Type & set__left_arm_joints(
    const std::array<double, 7> & _arg)
  {
    this->left_arm_joints = _arg;
    return *this;
  }
  Type & set__right_arm_joints(
    const std::array<double, 7> & _arg)
  {
    this->right_arm_joints = _arg;
    return *this;
  }
  Type & set__left_arm_cart(
    const std::array<double, 6> & _arg)
  {
    this->left_arm_cart = _arg;
    return *this;
  }
  Type & set__right_arm_cart(
    const std::array<double, 6> & _arg)
  {
    this->right_arm_cart = _arg;
    return *this;
  }
  Type & set__speed(
    const std::array<double, 2> & _arg)
  {
    this->speed = _arg;
    return *this;
  }
  Type & set__motor_on(
    const bool & _arg)
  {
    this->motor_on = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    driver::msg::ArmInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const driver::msg::ArmInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<driver::msg::ArmInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<driver::msg::ArmInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      driver::msg::ArmInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<driver::msg::ArmInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      driver::msg::ArmInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<driver::msg::ArmInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<driver::msg::ArmInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<driver::msg::ArmInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__driver__msg__ArmInfo
    std::shared_ptr<driver::msg::ArmInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__driver__msg__ArmInfo
    std::shared_ptr<driver::msg::ArmInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ArmInfo_ & other) const
  {
    if (this->left_arm_joints != other.left_arm_joints) {
      return false;
    }
    if (this->right_arm_joints != other.right_arm_joints) {
      return false;
    }
    if (this->left_arm_cart != other.left_arm_cart) {
      return false;
    }
    if (this->right_arm_cart != other.right_arm_cart) {
      return false;
    }
    if (this->speed != other.speed) {
      return false;
    }
    if (this->motor_on != other.motor_on) {
      return false;
    }
    return true;
  }
  bool operator!=(const ArmInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ArmInfo_

// alias to use template instance with default allocator
using ArmInfo =
  driver::msg::ArmInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace driver

#endif  // DRIVER__MSG__DETAIL__ARM_INFO__STRUCT_HPP_
