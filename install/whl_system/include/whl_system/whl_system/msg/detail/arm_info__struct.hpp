// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from whl_system:msg/ArmInfo.idl
// generated code does not contain a copyright notice

#ifndef WHL_SYSTEM__MSG__DETAIL__ARM_INFO__STRUCT_HPP_
#define WHL_SYSTEM__MSG__DETAIL__ARM_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__whl_system__msg__ArmInfo __attribute__((deprecated))
#else
# define DEPRECATED__whl_system__msg__ArmInfo __declspec(deprecated)
#endif

namespace whl_system
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
      std::fill<typename std::array<double, 7>::iterator, double>(this->joints.begin(), this->joints.end(), 0.0);
      std::fill<typename std::array<double, 7>::iterator, double>(this->pos.begin(), this->pos.end(), 0.0);
      std::fill<typename std::array<bool, 2>::iterator, bool>(this->gripper.begin(), this->gripper.end(), false);
      std::fill<typename std::array<double, 2>::iterator, double>(this->arm_speed.begin(), this->arm_speed.end(), 0.0);
    }
  }

  explicit ArmInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : joints(_alloc),
    pos(_alloc),
    gripper(_alloc),
    arm_speed(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 7>::iterator, double>(this->joints.begin(), this->joints.end(), 0.0);
      std::fill<typename std::array<double, 7>::iterator, double>(this->pos.begin(), this->pos.end(), 0.0);
      std::fill<typename std::array<bool, 2>::iterator, bool>(this->gripper.begin(), this->gripper.end(), false);
      std::fill<typename std::array<double, 2>::iterator, double>(this->arm_speed.begin(), this->arm_speed.end(), 0.0);
    }
  }

  // field types and members
  using _joints_type =
    std::array<double, 7>;
  _joints_type joints;
  using _pos_type =
    std::array<double, 7>;
  _pos_type pos;
  using _gripper_type =
    std::array<bool, 2>;
  _gripper_type gripper;
  using _arm_speed_type =
    std::array<double, 2>;
  _arm_speed_type arm_speed;

  // setters for named parameter idiom
  Type & set__joints(
    const std::array<double, 7> & _arg)
  {
    this->joints = _arg;
    return *this;
  }
  Type & set__pos(
    const std::array<double, 7> & _arg)
  {
    this->pos = _arg;
    return *this;
  }
  Type & set__gripper(
    const std::array<bool, 2> & _arg)
  {
    this->gripper = _arg;
    return *this;
  }
  Type & set__arm_speed(
    const std::array<double, 2> & _arg)
  {
    this->arm_speed = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    whl_system::msg::ArmInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const whl_system::msg::ArmInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<whl_system::msg::ArmInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<whl_system::msg::ArmInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      whl_system::msg::ArmInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<whl_system::msg::ArmInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      whl_system::msg::ArmInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<whl_system::msg::ArmInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<whl_system::msg::ArmInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<whl_system::msg::ArmInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__whl_system__msg__ArmInfo
    std::shared_ptr<whl_system::msg::ArmInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__whl_system__msg__ArmInfo
    std::shared_ptr<whl_system::msg::ArmInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ArmInfo_ & other) const
  {
    if (this->joints != other.joints) {
      return false;
    }
    if (this->pos != other.pos) {
      return false;
    }
    if (this->gripper != other.gripper) {
      return false;
    }
    if (this->arm_speed != other.arm_speed) {
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
  whl_system::msg::ArmInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace whl_system

#endif  // WHL_SYSTEM__MSG__DETAIL__ARM_INFO__STRUCT_HPP_
