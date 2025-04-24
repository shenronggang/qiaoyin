// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from whl_system:msg/AgvInfo.idl
// generated code does not contain a copyright notice

#ifndef WHL_SYSTEM__MSG__DETAIL__AGV_INFO__STRUCT_HPP_
#define WHL_SYSTEM__MSG__DETAIL__AGV_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__whl_system__msg__AgvInfo __attribute__((deprecated))
#else
# define DEPRECATED__whl_system__msg__AgvInfo __declspec(deprecated)
#endif

namespace whl_system
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
      std::fill<typename std::array<double, 2>::iterator, double>(this->agv_move_speed.begin(), this->agv_move_speed.end(), 0.0);
      std::fill<typename std::array<double, 3>::iterator, double>(this->q_agv_speed.begin(), this->q_agv_speed.end(), 0.0);
    }
  }

  explicit AgvInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : agv_move_speed(_alloc),
    q_agv_speed(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 2>::iterator, double>(this->agv_move_speed.begin(), this->agv_move_speed.end(), 0.0);
      std::fill<typename std::array<double, 3>::iterator, double>(this->q_agv_speed.begin(), this->q_agv_speed.end(), 0.0);
    }
  }

  // field types and members
  using _agv_move_speed_type =
    std::array<double, 2>;
  _agv_move_speed_type agv_move_speed;
  using _q_agv_speed_type =
    std::array<double, 3>;
  _q_agv_speed_type q_agv_speed;

  // setters for named parameter idiom
  Type & set__agv_move_speed(
    const std::array<double, 2> & _arg)
  {
    this->agv_move_speed = _arg;
    return *this;
  }
  Type & set__q_agv_speed(
    const std::array<double, 3> & _arg)
  {
    this->q_agv_speed = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    whl_system::msg::AgvInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const whl_system::msg::AgvInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<whl_system::msg::AgvInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<whl_system::msg::AgvInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      whl_system::msg::AgvInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<whl_system::msg::AgvInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      whl_system::msg::AgvInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<whl_system::msg::AgvInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<whl_system::msg::AgvInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<whl_system::msg::AgvInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__whl_system__msg__AgvInfo
    std::shared_ptr<whl_system::msg::AgvInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__whl_system__msg__AgvInfo
    std::shared_ptr<whl_system::msg::AgvInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AgvInfo_ & other) const
  {
    if (this->agv_move_speed != other.agv_move_speed) {
      return false;
    }
    if (this->q_agv_speed != other.q_agv_speed) {
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
  whl_system::msg::AgvInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace whl_system

#endif  // WHL_SYSTEM__MSG__DETAIL__AGV_INFO__STRUCT_HPP_
