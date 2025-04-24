// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from driver:msg/AgvInfo.idl
// generated code does not contain a copyright notice

#ifndef DRIVER__MSG__DETAIL__AGV_INFO__BUILDER_HPP_
#define DRIVER__MSG__DETAIL__AGV_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "driver/msg/detail/agv_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace driver
{

namespace msg
{

namespace builder
{

class Init_AgvInfo_rz
{
public:
  explicit Init_AgvInfo_rz(::driver::msg::AgvInfo & msg)
  : msg_(msg)
  {}
  ::driver::msg::AgvInfo rz(::driver::msg::AgvInfo::_rz_type arg)
  {
    msg_.rz = std::move(arg);
    return std::move(msg_);
  }

private:
  ::driver::msg::AgvInfo msg_;
};

class Init_AgvInfo_y
{
public:
  explicit Init_AgvInfo_y(::driver::msg::AgvInfo & msg)
  : msg_(msg)
  {}
  Init_AgvInfo_rz y(::driver::msg::AgvInfo::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_AgvInfo_rz(msg_);
  }

private:
  ::driver::msg::AgvInfo msg_;
};

class Init_AgvInfo_x
{
public:
  Init_AgvInfo_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AgvInfo_y x(::driver::msg::AgvInfo::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_AgvInfo_y(msg_);
  }

private:
  ::driver::msg::AgvInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::driver::msg::AgvInfo>()
{
  return driver::msg::builder::Init_AgvInfo_x();
}

}  // namespace driver

#endif  // DRIVER__MSG__DETAIL__AGV_INFO__BUILDER_HPP_
