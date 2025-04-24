// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from whl_system:msg/AgvInfo.idl
// generated code does not contain a copyright notice

#ifndef WHL_SYSTEM__MSG__DETAIL__AGV_INFO__BUILDER_HPP_
#define WHL_SYSTEM__MSG__DETAIL__AGV_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "whl_system/msg/detail/agv_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace whl_system
{

namespace msg
{

namespace builder
{

class Init_AgvInfo_q_agv_speed
{
public:
  explicit Init_AgvInfo_q_agv_speed(::whl_system::msg::AgvInfo & msg)
  : msg_(msg)
  {}
  ::whl_system::msg::AgvInfo q_agv_speed(::whl_system::msg::AgvInfo::_q_agv_speed_type arg)
  {
    msg_.q_agv_speed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::whl_system::msg::AgvInfo msg_;
};

class Init_AgvInfo_agv_move_speed
{
public:
  Init_AgvInfo_agv_move_speed()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AgvInfo_q_agv_speed agv_move_speed(::whl_system::msg::AgvInfo::_agv_move_speed_type arg)
  {
    msg_.agv_move_speed = std::move(arg);
    return Init_AgvInfo_q_agv_speed(msg_);
  }

private:
  ::whl_system::msg::AgvInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::whl_system::msg::AgvInfo>()
{
  return whl_system::msg::builder::Init_AgvInfo_agv_move_speed();
}

}  // namespace whl_system

#endif  // WHL_SYSTEM__MSG__DETAIL__AGV_INFO__BUILDER_HPP_
