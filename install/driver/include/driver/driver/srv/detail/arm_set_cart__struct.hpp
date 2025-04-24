// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from driver:srv/ArmSetCart.idl
// generated code does not contain a copyright notice

#ifndef DRIVER__SRV__DETAIL__ARM_SET_CART__STRUCT_HPP_
#define DRIVER__SRV__DETAIL__ARM_SET_CART__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__driver__srv__ArmSetCart_Request __attribute__((deprecated))
#else
# define DEPRECATED__driver__srv__ArmSetCart_Request __declspec(deprecated)
#endif

namespace driver
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ArmSetCart_Request_
{
  using Type = ArmSetCart_Request_<ContainerAllocator>;

  explicit ArmSetCart_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 7>::iterator, double>(this->left_arm_cart.begin(), this->left_arm_cart.end(), 0.0);
      std::fill<typename std::array<double, 7>::iterator, double>(this->right_arm_cart.begin(), this->right_arm_cart.end(), 0.0);
      std::fill<typename std::array<double, 2>::iterator, double>(this->speed.begin(), this->speed.end(), 0.0);
    }
  }

  explicit ArmSetCart_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : left_arm_cart(_alloc),
    right_arm_cart(_alloc),
    speed(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 7>::iterator, double>(this->left_arm_cart.begin(), this->left_arm_cart.end(), 0.0);
      std::fill<typename std::array<double, 7>::iterator, double>(this->right_arm_cart.begin(), this->right_arm_cart.end(), 0.0);
      std::fill<typename std::array<double, 2>::iterator, double>(this->speed.begin(), this->speed.end(), 0.0);
    }
  }

  // field types and members
  using _left_arm_cart_type =
    std::array<double, 7>;
  _left_arm_cart_type left_arm_cart;
  using _right_arm_cart_type =
    std::array<double, 7>;
  _right_arm_cart_type right_arm_cart;
  using _speed_type =
    std::array<double, 2>;
  _speed_type speed;

  // setters for named parameter idiom
  Type & set__left_arm_cart(
    const std::array<double, 7> & _arg)
  {
    this->left_arm_cart = _arg;
    return *this;
  }
  Type & set__right_arm_cart(
    const std::array<double, 7> & _arg)
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

  // constant declarations

  // pointer types
  using RawPtr =
    driver::srv::ArmSetCart_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const driver::srv::ArmSetCart_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<driver::srv::ArmSetCart_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<driver::srv::ArmSetCart_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      driver::srv::ArmSetCart_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<driver::srv::ArmSetCart_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      driver::srv::ArmSetCart_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<driver::srv::ArmSetCart_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<driver::srv::ArmSetCart_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<driver::srv::ArmSetCart_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__driver__srv__ArmSetCart_Request
    std::shared_ptr<driver::srv::ArmSetCart_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__driver__srv__ArmSetCart_Request
    std::shared_ptr<driver::srv::ArmSetCart_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ArmSetCart_Request_ & other) const
  {
    if (this->left_arm_cart != other.left_arm_cart) {
      return false;
    }
    if (this->right_arm_cart != other.right_arm_cart) {
      return false;
    }
    if (this->speed != other.speed) {
      return false;
    }
    return true;
  }
  bool operator!=(const ArmSetCart_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ArmSetCart_Request_

// alias to use template instance with default allocator
using ArmSetCart_Request =
  driver::srv::ArmSetCart_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace driver


#ifndef _WIN32
# define DEPRECATED__driver__srv__ArmSetCart_Response __attribute__((deprecated))
#else
# define DEPRECATED__driver__srv__ArmSetCart_Response __declspec(deprecated)
#endif

namespace driver
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ArmSetCart_Response_
{
  using Type = ArmSetCart_Response_<ContainerAllocator>;

  explicit ArmSetCart_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit ArmSetCart_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    driver::srv::ArmSetCart_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const driver::srv::ArmSetCart_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<driver::srv::ArmSetCart_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<driver::srv::ArmSetCart_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      driver::srv::ArmSetCart_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<driver::srv::ArmSetCart_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      driver::srv::ArmSetCart_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<driver::srv::ArmSetCart_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<driver::srv::ArmSetCart_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<driver::srv::ArmSetCart_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__driver__srv__ArmSetCart_Response
    std::shared_ptr<driver::srv::ArmSetCart_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__driver__srv__ArmSetCart_Response
    std::shared_ptr<driver::srv::ArmSetCart_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ArmSetCart_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const ArmSetCart_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ArmSetCart_Response_

// alias to use template instance with default allocator
using ArmSetCart_Response =
  driver::srv::ArmSetCart_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace driver

namespace driver
{

namespace srv
{

struct ArmSetCart
{
  using Request = driver::srv::ArmSetCart_Request;
  using Response = driver::srv::ArmSetCart_Response;
};

}  // namespace srv

}  // namespace driver

#endif  // DRIVER__SRV__DETAIL__ARM_SET_CART__STRUCT_HPP_
