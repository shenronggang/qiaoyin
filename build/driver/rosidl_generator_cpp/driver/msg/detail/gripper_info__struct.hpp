// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from driver:msg/GripperInfo.idl
// generated code does not contain a copyright notice

#ifndef DRIVER__MSG__DETAIL__GRIPPER_INFO__STRUCT_HPP_
#define DRIVER__MSG__DETAIL__GRIPPER_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__driver__msg__GripperInfo __attribute__((deprecated))
#else
# define DEPRECATED__driver__msg__GripperInfo __declspec(deprecated)
#endif

namespace driver
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GripperInfo_
{
  using Type = GripperInfo_<ContainerAllocator>;

  explicit GripperInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->left_gripper = false;
      this->right_gripper = false;
    }
  }

  explicit GripperInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->left_gripper = false;
      this->right_gripper = false;
    }
  }

  // field types and members
  using _left_gripper_type =
    bool;
  _left_gripper_type left_gripper;
  using _right_gripper_type =
    bool;
  _right_gripper_type right_gripper;

  // setters for named parameter idiom
  Type & set__left_gripper(
    const bool & _arg)
  {
    this->left_gripper = _arg;
    return *this;
  }
  Type & set__right_gripper(
    const bool & _arg)
  {
    this->right_gripper = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    driver::msg::GripperInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const driver::msg::GripperInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<driver::msg::GripperInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<driver::msg::GripperInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      driver::msg::GripperInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<driver::msg::GripperInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      driver::msg::GripperInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<driver::msg::GripperInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<driver::msg::GripperInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<driver::msg::GripperInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__driver__msg__GripperInfo
    std::shared_ptr<driver::msg::GripperInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__driver__msg__GripperInfo
    std::shared_ptr<driver::msg::GripperInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GripperInfo_ & other) const
  {
    if (this->left_gripper != other.left_gripper) {
      return false;
    }
    if (this->right_gripper != other.right_gripper) {
      return false;
    }
    return true;
  }
  bool operator!=(const GripperInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GripperInfo_

// alias to use template instance with default allocator
using GripperInfo =
  driver::msg::GripperInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace driver

#endif  // DRIVER__MSG__DETAIL__GRIPPER_INFO__STRUCT_HPP_
