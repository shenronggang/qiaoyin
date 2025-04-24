// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from driver:srv/ArmSetCart.idl
// generated code does not contain a copyright notice

#ifndef DRIVER__SRV__DETAIL__ARM_SET_CART__BUILDER_HPP_
#define DRIVER__SRV__DETAIL__ARM_SET_CART__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "driver/srv/detail/arm_set_cart__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace driver
{

namespace srv
{

namespace builder
{

class Init_ArmSetCart_Request_speed
{
public:
  explicit Init_ArmSetCart_Request_speed(::driver::srv::ArmSetCart_Request & msg)
  : msg_(msg)
  {}
  ::driver::srv::ArmSetCart_Request speed(::driver::srv::ArmSetCart_Request::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::driver::srv::ArmSetCart_Request msg_;
};

class Init_ArmSetCart_Request_right_arm_cart
{
public:
  explicit Init_ArmSetCart_Request_right_arm_cart(::driver::srv::ArmSetCart_Request & msg)
  : msg_(msg)
  {}
  Init_ArmSetCart_Request_speed right_arm_cart(::driver::srv::ArmSetCart_Request::_right_arm_cart_type arg)
  {
    msg_.right_arm_cart = std::move(arg);
    return Init_ArmSetCart_Request_speed(msg_);
  }

private:
  ::driver::srv::ArmSetCart_Request msg_;
};

class Init_ArmSetCart_Request_left_arm_cart
{
public:
  Init_ArmSetCart_Request_left_arm_cart()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ArmSetCart_Request_right_arm_cart left_arm_cart(::driver::srv::ArmSetCart_Request::_left_arm_cart_type arg)
  {
    msg_.left_arm_cart = std::move(arg);
    return Init_ArmSetCart_Request_right_arm_cart(msg_);
  }

private:
  ::driver::srv::ArmSetCart_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::driver::srv::ArmSetCart_Request>()
{
  return driver::srv::builder::Init_ArmSetCart_Request_left_arm_cart();
}

}  // namespace driver


namespace driver
{

namespace srv
{

namespace builder
{

class Init_ArmSetCart_Response_success
{
public:
  Init_ArmSetCart_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::driver::srv::ArmSetCart_Response success(::driver::srv::ArmSetCart_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::driver::srv::ArmSetCart_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::driver::srv::ArmSetCart_Response>()
{
  return driver::srv::builder::Init_ArmSetCart_Response_success();
}

}  // namespace driver

#endif  // DRIVER__SRV__DETAIL__ARM_SET_CART__BUILDER_HPP_
