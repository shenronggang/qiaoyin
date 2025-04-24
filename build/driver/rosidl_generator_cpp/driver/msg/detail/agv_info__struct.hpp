// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from driver:msg/AgvInfo.idl
// generated code does not contain a copyright notice

#ifndef DRIVER__MSG__DETAIL__AGV_INFO__STRUCT_HPP_
#define DRIVER__MSG__DETAIL__AGV_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__driver__msg__AgvInfo __attribute__((deprecated))
#else
# define DEPRECATED__driver__msg__AgvInfo __declspec(deprecated)
#endif

namespace driver
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AgvInfo_
{
  using Type = AgvInfo_<ContainerAllocator>;

  explicit AgvInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
      this->rz = 0.0;
    }
  }

  explicit AgvInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
      this->rz = 0.0;
    }
  }

  // field types and members
  using _x_type =
    double;
  _x_type x;
  using _y_type =
    double;
  _y_type y;
  using _rz_type =
    double;
  _rz_type rz;

  // setters for named parameter idiom
  Type & set__x(
    const double & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const double & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__rz(
    const double & _arg)
  {
    this->rz = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    driver::msg::AgvInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const driver::msg::AgvInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<driver::msg::AgvInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<driver::msg::AgvInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      driver::msg::AgvInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<driver::msg::AgvInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      driver::msg::AgvInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<driver::msg::AgvInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<driver::msg::AgvInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<driver::msg::AgvInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__driver__msg__AgvInfo
    std::shared_ptr<driver::msg::AgvInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__driver__msg__AgvInfo
    std::shared_ptr<driver::msg::AgvInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AgvInfo_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->rz != other.rz) {
      return false;
    }
    return true;
  }
  bool operator!=(const AgvInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AgvInfo_

// alias to use template instance with default allocator
using AgvInfo =
  driver::msg::AgvInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace driver

#endif  // DRIVER__MSG__DETAIL__AGV_INFO__STRUCT_HPP_
