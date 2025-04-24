// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from driver:srv/ArmEnable.idl
// generated code does not contain a copyright notice

#ifndef DRIVER__SRV__DETAIL__ARM_ENABLE__BUILDER_HPP_
#define DRIVER__SRV__DETAIL__ARM_ENABLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "driver/srv/detail/arm_enable__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace driver
{

namespace srv
{

namespace builder
{

class Init_ArmEnable_Request_enable
{
public:
  Init_ArmEnable_Request_enable()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::driver::srv::ArmEnable_Request enable(::driver::srv::ArmEnable_Request::_enable_type arg)
  {
    msg_.enable = std::move(arg);
    return std::move(msg_);
  }

private:
  ::driver::srv::ArmEnable_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::driver::srv::ArmEnable_Request>()
{
  return driver::srv::builder::Init_ArmEnable_Request_enable();
}

}  // namespace driver


namespace driver
{

namespace srv
{

namespace builder
{

class Init_ArmEnable_Response_success
{
public:
  Init_ArmEnable_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::driver::srv::ArmEnable_Response success(::driver::srv::ArmEnable_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::driver::srv::ArmEnable_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::driver::srv::ArmEnable_Response>()
{
  return driver::srv::builder::Init_ArmEnable_Response_success();
}

}  // namespace driver

#endif  // DRIVER__SRV__DETAIL__ARM_ENABLE__BUILDER_HPP_
