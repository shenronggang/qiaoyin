// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from whl_system:msg/ArmInfo.idl
// generated code does not contain a copyright notice

#ifndef WHL_SYSTEM__MSG__DETAIL__ARM_INFO__BUILDER_HPP_
#define WHL_SYSTEM__MSG__DETAIL__ARM_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "whl_system/msg/detail/arm_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace whl_system
{

namespace msg
{

namespace builder
{

class Init_ArmInfo_arm_speed
{
public:
  explicit Init_ArmInfo_arm_speed(::whl_system::msg::ArmInfo & msg)
  : msg_(msg)
  {}
  ::whl_system::msg::ArmInfo arm_speed(::whl_system::msg::ArmInfo::_arm_speed_type arg)
  {
    msg_.arm_speed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::whl_system::msg::ArmInfo msg_;
};

class Init_ArmInfo_gripper
{
public:
  explicit Init_ArmInfo_gripper(::whl_system::msg::ArmInfo & msg)
  : msg_(msg)
  {}
  Init_ArmInfo_arm_speed gripper(::whl_system::msg::ArmInfo::_gripper_type arg)
  {
    msg_.gripper = std::move(arg);
    return Init_ArmInfo_arm_speed(msg_);
  }

private:
  ::whl_system::msg::ArmInfo msg_;
};

class Init_ArmInfo_pos
{
public:
  explicit Init_ArmInfo_pos(::whl_system::msg::ArmInfo & msg)
  : msg_(msg)
  {}
  Init_ArmInfo_gripper pos(::whl_system::msg::ArmInfo::_pos_type arg)
  {
    msg_.pos = std::move(arg);
    return Init_ArmInfo_gripper(msg_);
  }

private:
  ::whl_system::msg::ArmInfo msg_;
};

class Init_ArmInfo_joints
{
public:
  Init_ArmInfo_joints()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ArmInfo_pos joints(::whl_system::msg::ArmInfo::_joints_type arg)
  {
    msg_.joints = std::move(arg);
    return Init_ArmInfo_pos(msg_);
  }

private:
  ::whl_system::msg::ArmInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::whl_system::msg::ArmInfo>()
{
  return whl_system::msg::builder::Init_ArmInfo_joints();
}

}  // namespace whl_system

#endif  // WHL_SYSTEM__MSG__DETAIL__ARM_INFO__BUILDER_HPP_
