// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from driver:msg/ArmInfo.idl
// generated code does not contain a copyright notice

#ifndef DRIVER__MSG__DETAIL__ARM_INFO__BUILDER_HPP_
#define DRIVER__MSG__DETAIL__ARM_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "driver/msg/detail/arm_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace driver
{

namespace msg
{

namespace builder
{

class Init_ArmInfo_motor_on
{
public:
  explicit Init_ArmInfo_motor_on(::driver::msg::ArmInfo & msg)
  : msg_(msg)
  {}
  ::driver::msg::ArmInfo motor_on(::driver::msg::ArmInfo::_motor_on_type arg)
  {
    msg_.motor_on = std::move(arg);
    return std::move(msg_);
  }

private:
  ::driver::msg::ArmInfo msg_;
};

class Init_ArmInfo_speed
{
public:
  explicit Init_ArmInfo_speed(::driver::msg::ArmInfo & msg)
  : msg_(msg)
  {}
  Init_ArmInfo_motor_on speed(::driver::msg::ArmInfo::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_ArmInfo_motor_on(msg_);
  }

private:
  ::driver::msg::ArmInfo msg_;
};

class Init_ArmInfo_right_arm_cart
{
public:
  explicit Init_ArmInfo_right_arm_cart(::driver::msg::ArmInfo & msg)
  : msg_(msg)
  {}
  Init_ArmInfo_speed right_arm_cart(::driver::msg::ArmInfo::_right_arm_cart_type arg)
  {
    msg_.right_arm_cart = std::move(arg);
    return Init_ArmInfo_speed(msg_);
  }

private:
  ::driver::msg::ArmInfo msg_;
};

class Init_ArmInfo_left_arm_cart
{
public:
  explicit Init_ArmInfo_left_arm_cart(::driver::msg::ArmInfo & msg)
  : msg_(msg)
  {}
  Init_ArmInfo_right_arm_cart left_arm_cart(::driver::msg::ArmInfo::_left_arm_cart_type arg)
  {
    msg_.left_arm_cart = std::move(arg);
    return Init_ArmInfo_right_arm_cart(msg_);
  }

private:
  ::driver::msg::ArmInfo msg_;
};

class Init_ArmInfo_right_arm_joints
{
public:
  explicit Init_ArmInfo_right_arm_joints(::driver::msg::ArmInfo & msg)
  : msg_(msg)
  {}
  Init_ArmInfo_left_arm_cart right_arm_joints(::driver::msg::ArmInfo::_right_arm_joints_type arg)
  {
    msg_.right_arm_joints = std::move(arg);
    return Init_ArmInfo_left_arm_cart(msg_);
  }

private:
  ::driver::msg::ArmInfo msg_;
};

class Init_ArmInfo_left_arm_joints
{
public:
  Init_ArmInfo_left_arm_joints()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ArmInfo_right_arm_joints left_arm_joints(::driver::msg::ArmInfo::_left_arm_joints_type arg)
  {
    msg_.left_arm_joints = std::move(arg);
    return Init_ArmInfo_right_arm_joints(msg_);
  }

private:
  ::driver::msg::ArmInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::driver::msg::ArmInfo>()
{
  return driver::msg::builder::Init_ArmInfo_left_arm_joints();
}

}  // namespace driver

#endif  // DRIVER__MSG__DETAIL__ARM_INFO__BUILDER_HPP_
