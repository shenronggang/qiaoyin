// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from driver:msg/GripperInfo.idl
// generated code does not contain a copyright notice

#ifndef DRIVER__MSG__DETAIL__GRIPPER_INFO__BUILDER_HPP_
#define DRIVER__MSG__DETAIL__GRIPPER_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "driver/msg/detail/gripper_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace driver
{

namespace msg
{

namespace builder
{

class Init_GripperInfo_right_gripper
{
public:
  explicit Init_GripperInfo_right_gripper(::driver::msg::GripperInfo & msg)
  : msg_(msg)
  {}
  ::driver::msg::GripperInfo right_gripper(::driver::msg::GripperInfo::_right_gripper_type arg)
  {
    msg_.right_gripper = std::move(arg);
    return std::move(msg_);
  }

private:
  ::driver::msg::GripperInfo msg_;
};

class Init_GripperInfo_left_gripper
{
public:
  Init_GripperInfo_left_gripper()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GripperInfo_right_gripper left_gripper(::driver::msg::GripperInfo::_left_gripper_type arg)
  {
    msg_.left_gripper = std::move(arg);
    return Init_GripperInfo_right_gripper(msg_);
  }

private:
  ::driver::msg::GripperInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::driver::msg::GripperInfo>()
{
  return driver::msg::builder::Init_GripperInfo_left_gripper();
}

}  // namespace driver

#endif  // DRIVER__MSG__DETAIL__GRIPPER_INFO__BUILDER_HPP_
