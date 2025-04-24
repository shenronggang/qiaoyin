// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from driver:srv/ArmEnable.idl
// generated code does not contain a copyright notice

#ifndef DRIVER__SRV__DETAIL__ARM_ENABLE__STRUCT_HPP_
#define DRIVER__SRV__DETAIL__ARM_ENABLE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__driver__srv__ArmEnable_Request __attribute__((deprecated))
#else
# define DEPRECATED__driver__srv__ArmEnable_Request __declspec(deprecated)
#endif

namespace driver
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ArmEnable_Request_
{
  using Type = ArmEnable_Request_<ContainerAllocator>;

  explicit ArmEnable_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->enable = false;
    }
  }

  explicit ArmEnable_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->enable = false;
    }
  }

  // field types and members
  using _enable_type =
    bool;
  _enable_type enable;

  // setters for named parameter idiom
  Type & set__enable(
    const bool & _arg)
  {
    this->enable = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    driver::srv::ArmEnable_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const driver::srv::ArmEnable_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<driver::srv::ArmEnable_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<driver::srv::ArmEnable_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      driver::srv::ArmEnable_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<driver::srv::ArmEnable_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      driver::srv::ArmEnable_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<driver::srv::ArmEnable_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<driver::srv::ArmEnable_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<driver::srv::ArmEnable_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__driver__srv__ArmEnable_Request
    std::shared_ptr<driver::srv::ArmEnable_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__driver__srv__ArmEnable_Request
    std::shared_ptr<driver::srv::ArmEnable_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ArmEnable_Request_ & other) const
  {
    if (this->enable != other.enable) {
      return false;
    }
    return true;
  }
  bool operator!=(const ArmEnable_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ArmEnable_Request_

// alias to use template instance with default allocator
using ArmEnable_Request =
  driver::srv::ArmEnable_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace driver


#ifndef _WIN32
# define DEPRECATED__driver__srv__ArmEnable_Response __attribute__((deprecated))
#else
# define DEPRECATED__driver__srv__ArmEnable_Response __declspec(deprecated)
#endif

namespace driver
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ArmEnable_Response_
{
  using Type = ArmEnable_Response_<ContainerAllocator>;

  explicit ArmEnable_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit ArmEnable_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    driver::srv::ArmEnable_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const driver::srv::ArmEnable_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<driver::srv::ArmEnable_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<driver::srv::ArmEnable_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      driver::srv::ArmEnable_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<driver::srv::ArmEnable_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      driver::srv::ArmEnable_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<driver::srv::ArmEnable_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<driver::srv::ArmEnable_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<driver::srv::ArmEnable_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__driver__srv__ArmEnable_Response
    std::shared_ptr<driver::srv::ArmEnable_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__driver__srv__ArmEnable_Response
    std::shared_ptr<driver::srv::ArmEnable_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ArmEnable_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const ArmEnable_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ArmEnable_Response_

// alias to use template instance with default allocator
using ArmEnable_Response =
  driver::srv::ArmEnable_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace driver

namespace driver
{

namespace srv
{

struct ArmEnable
{
  using Request = driver::srv::ArmEnable_Request;
  using Response = driver::srv::ArmEnable_Response;
};

}  // namespace srv

}  // namespace driver

#endif  // DRIVER__SRV__DETAIL__ARM_ENABLE__STRUCT_HPP_
