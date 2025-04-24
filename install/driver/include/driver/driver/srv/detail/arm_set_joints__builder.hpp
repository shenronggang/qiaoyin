// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from driver:srv/ArmSetJoints.idl
// generated code does not contain a copyright notice

#ifndef DRIVER__SRV__DETAIL__ARM_SET_JOINTS__BUILDER_HPP_
#define DRIVER__SRV__DETAIL__ARM_SET_JOINTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "driver/srv/detail/arm_set_joints__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace driver
{

namespace srv
{

namespace builder
{

class Init_ArmSetJoints_Request_speed
{
public:
  explicit Init_ArmSetJoints_Request_speed(::driver::srv::ArmSetJoints_Request & msg)
  : msg_(msg)
  {}
  ::driver::srv::ArmSetJoints_Request speed(::driver::srv::ArmSetJoints_Request::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::driver::srv::ArmSetJoints_Request msg_;
};

class Init_ArmSetJoints_Request_right_arm_joints
{
public:
  explicit Init_ArmSetJoints_Request_right_arm_joints(::driver::srv::ArmSetJoints_Request & msg)
  : msg_(msg)
  {}
  Init_ArmSetJoints_Request_speed right_arm_joints(::driver::srv::ArmSetJoints_Request::_right_arm_joints_type arg)
  {
    msg_.right_arm_joints = std::move(arg);
    return Init_ArmSetJoints_Request_speed(msg_);
  }

private:
  ::driver::srv::ArmSetJoints_Request msg_;
};

class Init_ArmSetJoints_Request_left_arm_joints
{
public:
  Init_ArmSetJoints_Request_left_arm_joints()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ArmSetJoints_Request_right_arm_joints left_arm_joints(::driver::srv::ArmSetJoints_Request::_left_arm_joints_type arg)
  {
    msg_.left_arm_joints = std::move(arg);
    return Init_ArmSetJoints_Request_right_arm_joints(msg_);
  }

private:
  ::driver::srv::ArmSetJoints_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::driver::srv::ArmSetJoints_Request>()
{
  return driver::srv::builder::Init_ArmSetJoints_Request_left_arm_joints();
}

}  // namespace driver


namespace driver
{

namespace srv
{

namespace builder
{

class Init_ArmSetJoints_Response_success
{
public:
  Init_ArmSetJoints_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::driver::srv::ArmSetJoints_Response success(::driver::srv::ArmSetJoints_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::driver::srv::ArmSetJoints_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::driver::srv::ArmSetJoints_Response>()
{
  return driver::srv::builder::Init_ArmSetJoints_Response_success();
}

}  // namespace driver

#endif  // DRIVER__SRV__DETAIL__ARM_SET_JOINTS__BUILDER_HPP_
