// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from whl_system:srv/InoutStruct.idl
// generated code does not contain a copyright notice

#ifndef WHL_SYSTEM__SRV__DETAIL__INOUT_STRUCT__BUILDER_HPP_
#define WHL_SYSTEM__SRV__DETAIL__INOUT_STRUCT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "whl_system/srv/detail/inout_struct__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace whl_system
{

namespace srv
{

namespace builder
{

class Init_InoutStruct_Request_agv_info
{
public:
  explicit Init_InoutStruct_Request_agv_info(::whl_system::srv::InoutStruct_Request & msg)
  : msg_(msg)
  {}
  ::whl_system::srv::InoutStruct_Request agv_info(::whl_system::srv::InoutStruct_Request::_agv_info_type arg)
  {
    msg_.agv_info = std::move(arg);
    return std::move(msg_);
  }

private:
  ::whl_system::srv::InoutStruct_Request msg_;
};

class Init_InoutStruct_Request_arm_info
{
public:
  explicit Init_InoutStruct_Request_arm_info(::whl_system::srv::InoutStruct_Request & msg)
  : msg_(msg)
  {}
  Init_InoutStruct_Request_agv_info arm_info(::whl_system::srv::InoutStruct_Request::_arm_info_type arg)
  {
    msg_.arm_info = std::move(arg);
    return Init_InoutStruct_Request_agv_info(msg_);
  }

private:
  ::whl_system::srv::InoutStruct_Request msg_;
};

class Init_InoutStruct_Request_enable
{
public:
  explicit Init_InoutStruct_Request_enable(::whl_system::srv::InoutStruct_Request & msg)
  : msg_(msg)
  {}
  Init_InoutStruct_Request_arm_info enable(::whl_system::srv::InoutStruct_Request::_enable_type arg)
  {
    msg_.enable = std::move(arg);
    return Init_InoutStruct_Request_arm_info(msg_);
  }

private:
  ::whl_system::srv::InoutStruct_Request msg_;
};

class Init_InoutStruct_Request_ctrl_cmd
{
public:
  explicit Init_InoutStruct_Request_ctrl_cmd(::whl_system::srv::InoutStruct_Request & msg)
  : msg_(msg)
  {}
  Init_InoutStruct_Request_enable ctrl_cmd(::whl_system::srv::InoutStruct_Request::_ctrl_cmd_type arg)
  {
    msg_.ctrl_cmd = std::move(arg);
    return Init_InoutStruct_Request_enable(msg_);
  }

private:
  ::whl_system::srv::InoutStruct_Request msg_;
};

class Init_InoutStruct_Request_running_mode
{
public:
  explicit Init_InoutStruct_Request_running_mode(::whl_system::srv::InoutStruct_Request & msg)
  : msg_(msg)
  {}
  Init_InoutStruct_Request_ctrl_cmd running_mode(::whl_system::srv::InoutStruct_Request::_running_mode_type arg)
  {
    msg_.running_mode = std::move(arg);
    return Init_InoutStruct_Request_ctrl_cmd(msg_);
  }

private:
  ::whl_system::srv::InoutStruct_Request msg_;
};

class Init_InoutStruct_Request_robot_name
{
public:
  Init_InoutStruct_Request_robot_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_InoutStruct_Request_running_mode robot_name(::whl_system::srv::InoutStruct_Request::_robot_name_type arg)
  {
    msg_.robot_name = std::move(arg);
    return Init_InoutStruct_Request_running_mode(msg_);
  }

private:
  ::whl_system::srv::InoutStruct_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::whl_system::srv::InoutStruct_Request>()
{
  return whl_system::srv::builder::Init_InoutStruct_Request_robot_name();
}

}  // namespace whl_system


namespace whl_system
{

namespace srv
{

namespace builder
{

class Init_InoutStruct_Response_step
{
public:
  explicit Init_InoutStruct_Response_step(::whl_system::srv::InoutStruct_Response & msg)
  : msg_(msg)
  {}
  ::whl_system::srv::InoutStruct_Response step(::whl_system::srv::InoutStruct_Response::_step_type arg)
  {
    msg_.step = std::move(arg);
    return std::move(msg_);
  }

private:
  ::whl_system::srv::InoutStruct_Response msg_;
};

class Init_InoutStruct_Response_exp_arm_info
{
public:
  explicit Init_InoutStruct_Response_exp_arm_info(::whl_system::srv::InoutStruct_Response & msg)
  : msg_(msg)
  {}
  Init_InoutStruct_Response_step exp_arm_info(::whl_system::srv::InoutStruct_Response::_exp_arm_info_type arg)
  {
    msg_.exp_arm_info = std::move(arg);
    return Init_InoutStruct_Response_step(msg_);
  }

private:
  ::whl_system::srv::InoutStruct_Response msg_;
};

class Init_InoutStruct_Response_q_arm_info
{
public:
  explicit Init_InoutStruct_Response_q_arm_info(::whl_system::srv::InoutStruct_Response & msg)
  : msg_(msg)
  {}
  Init_InoutStruct_Response_exp_arm_info q_arm_info(::whl_system::srv::InoutStruct_Response::_q_arm_info_type arg)
  {
    msg_.q_arm_info = std::move(arg);
    return Init_InoutStruct_Response_exp_arm_info(msg_);
  }

private:
  ::whl_system::srv::InoutStruct_Response msg_;
};

class Init_InoutStruct_Response_robot_pos
{
public:
  explicit Init_InoutStruct_Response_robot_pos(::whl_system::srv::InoutStruct_Response & msg)
  : msg_(msg)
  {}
  Init_InoutStruct_Response_q_arm_info robot_pos(::whl_system::srv::InoutStruct_Response::_robot_pos_type arg)
  {
    msg_.robot_pos = std::move(arg);
    return Init_InoutStruct_Response_q_arm_info(msg_);
  }

private:
  ::whl_system::srv::InoutStruct_Response msg_;
};

class Init_InoutStruct_Response_exp_agv_peed
{
public:
  explicit Init_InoutStruct_Response_exp_agv_peed(::whl_system::srv::InoutStruct_Response & msg)
  : msg_(msg)
  {}
  Init_InoutStruct_Response_robot_pos exp_agv_peed(::whl_system::srv::InoutStruct_Response::_exp_agv_peed_type arg)
  {
    msg_.exp_agv_peed = std::move(arg);
    return Init_InoutStruct_Response_robot_pos(msg_);
  }

private:
  ::whl_system::srv::InoutStruct_Response msg_;
};

class Init_InoutStruct_Response_q_agv_peed
{
public:
  explicit Init_InoutStruct_Response_q_agv_peed(::whl_system::srv::InoutStruct_Response & msg)
  : msg_(msg)
  {}
  Init_InoutStruct_Response_exp_agv_peed q_agv_peed(::whl_system::srv::InoutStruct_Response::_q_agv_peed_type arg)
  {
    msg_.q_agv_peed = std::move(arg);
    return Init_InoutStruct_Response_exp_agv_peed(msg_);
  }

private:
  ::whl_system::srv::InoutStruct_Response msg_;
};

class Init_InoutStruct_Response_gripper
{
public:
  explicit Init_InoutStruct_Response_gripper(::whl_system::srv::InoutStruct_Response & msg)
  : msg_(msg)
  {}
  Init_InoutStruct_Response_q_agv_peed gripper(::whl_system::srv::InoutStruct_Response::_gripper_type arg)
  {
    msg_.gripper = std::move(arg);
    return Init_InoutStruct_Response_q_agv_peed(msg_);
  }

private:
  ::whl_system::srv::InoutStruct_Response msg_;
};

class Init_InoutStruct_Response_ctrl_cmd
{
public:
  explicit Init_InoutStruct_Response_ctrl_cmd(::whl_system::srv::InoutStruct_Response & msg)
  : msg_(msg)
  {}
  Init_InoutStruct_Response_gripper ctrl_cmd(::whl_system::srv::InoutStruct_Response::_ctrl_cmd_type arg)
  {
    msg_.ctrl_cmd = std::move(arg);
    return Init_InoutStruct_Response_gripper(msg_);
  }

private:
  ::whl_system::srv::InoutStruct_Response msg_;
};

class Init_InoutStruct_Response_running_mode
{
public:
  explicit Init_InoutStruct_Response_running_mode(::whl_system::srv::InoutStruct_Response & msg)
  : msg_(msg)
  {}
  Init_InoutStruct_Response_ctrl_cmd running_mode(::whl_system::srv::InoutStruct_Response::_running_mode_type arg)
  {
    msg_.running_mode = std::move(arg);
    return Init_InoutStruct_Response_ctrl_cmd(msg_);
  }

private:
  ::whl_system::srv::InoutStruct_Response msg_;
};

class Init_InoutStruct_Response_motor_on
{
public:
  Init_InoutStruct_Response_motor_on()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_InoutStruct_Response_running_mode motor_on(::whl_system::srv::InoutStruct_Response::_motor_on_type arg)
  {
    msg_.motor_on = std::move(arg);
    return Init_InoutStruct_Response_running_mode(msg_);
  }

private:
  ::whl_system::srv::InoutStruct_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::whl_system::srv::InoutStruct_Response>()
{
  return whl_system::srv::builder::Init_InoutStruct_Response_motor_on();
}

}  // namespace whl_system

#endif  // WHL_SYSTEM__SRV__DETAIL__INOUT_STRUCT__BUILDER_HPP_
