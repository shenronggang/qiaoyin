// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from whl_system:srv/InoutStruct.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "whl_system/srv/detail/inout_struct__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace whl_system
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void InoutStruct_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) whl_system::srv::InoutStruct_Request(_init);
}

void InoutStruct_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<whl_system::srv::InoutStruct_Request *>(message_memory);
  typed_message->~InoutStruct_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember InoutStruct_Request_message_member_array[6] = {
  {
    "robot_name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(whl_system::srv::InoutStruct_Request, robot_name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "running_mode",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(whl_system::srv::InoutStruct_Request, running_mode),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "ctrl_cmd",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(whl_system::srv::InoutStruct_Request, ctrl_cmd),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "enable",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(whl_system::srv::InoutStruct_Request, enable),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "arm_info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<whl_system::msg::ArmInfo>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(whl_system::srv::InoutStruct_Request, arm_info),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "agv_info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<whl_system::msg::AgvInfo>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(whl_system::srv::InoutStruct_Request, agv_info),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers InoutStruct_Request_message_members = {
  "whl_system::srv",  // message namespace
  "InoutStruct_Request",  // message name
  6,  // number of fields
  sizeof(whl_system::srv::InoutStruct_Request),
  InoutStruct_Request_message_member_array,  // message members
  InoutStruct_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  InoutStruct_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t InoutStruct_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &InoutStruct_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace whl_system


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<whl_system::srv::InoutStruct_Request>()
{
  return &::whl_system::srv::rosidl_typesupport_introspection_cpp::InoutStruct_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, whl_system, srv, InoutStruct_Request)() {
  return &::whl_system::srv::rosidl_typesupport_introspection_cpp::InoutStruct_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "whl_system/srv/detail/inout_struct__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace whl_system
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void InoutStruct_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) whl_system::srv::InoutStruct_Response(_init);
}

void InoutStruct_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<whl_system::srv::InoutStruct_Response *>(message_memory);
  typed_message->~InoutStruct_Response();
}

size_t size_function__InoutStruct_Response__gripper(const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * get_const_function__InoutStruct_Response__gripper(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<bool, 2> *>(untyped_member);
  return &member[index];
}

void * get_function__InoutStruct_Response__gripper(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<bool, 2> *>(untyped_member);
  return &member[index];
}

void fetch_function__InoutStruct_Response__gripper(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const bool *>(
    get_const_function__InoutStruct_Response__gripper(untyped_member, index));
  auto & value = *reinterpret_cast<bool *>(untyped_value);
  value = item;
}

void assign_function__InoutStruct_Response__gripper(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<bool *>(
    get_function__InoutStruct_Response__gripper(untyped_member, index));
  const auto & value = *reinterpret_cast<const bool *>(untyped_value);
  item = value;
}

size_t size_function__InoutStruct_Response__q_agv_peed(const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * get_const_function__InoutStruct_Response__q_agv_peed(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 2> *>(untyped_member);
  return &member[index];
}

void * get_function__InoutStruct_Response__q_agv_peed(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 2> *>(untyped_member);
  return &member[index];
}

void fetch_function__InoutStruct_Response__q_agv_peed(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__InoutStruct_Response__q_agv_peed(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__InoutStruct_Response__q_agv_peed(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__InoutStruct_Response__q_agv_peed(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__InoutStruct_Response__exp_agv_peed(const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * get_const_function__InoutStruct_Response__exp_agv_peed(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 2> *>(untyped_member);
  return &member[index];
}

void * get_function__InoutStruct_Response__exp_agv_peed(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 2> *>(untyped_member);
  return &member[index];
}

void fetch_function__InoutStruct_Response__exp_agv_peed(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__InoutStruct_Response__exp_agv_peed(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__InoutStruct_Response__exp_agv_peed(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__InoutStruct_Response__exp_agv_peed(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__InoutStruct_Response__robot_pos(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__InoutStruct_Response__robot_pos(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__InoutStruct_Response__robot_pos(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__InoutStruct_Response__robot_pos(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__InoutStruct_Response__robot_pos(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__InoutStruct_Response__robot_pos(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__InoutStruct_Response__robot_pos(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember InoutStruct_Response_message_member_array[10] = {
  {
    "motor_on",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(whl_system::srv::InoutStruct_Response, motor_on),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "running_mode",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(whl_system::srv::InoutStruct_Response, running_mode),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "ctrl_cmd",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(whl_system::srv::InoutStruct_Response, ctrl_cmd),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "gripper",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(whl_system::srv::InoutStruct_Response, gripper),  // bytes offset in struct
    nullptr,  // default value
    size_function__InoutStruct_Response__gripper,  // size() function pointer
    get_const_function__InoutStruct_Response__gripper,  // get_const(index) function pointer
    get_function__InoutStruct_Response__gripper,  // get(index) function pointer
    fetch_function__InoutStruct_Response__gripper,  // fetch(index, &value) function pointer
    assign_function__InoutStruct_Response__gripper,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "q_agv_peed",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(whl_system::srv::InoutStruct_Response, q_agv_peed),  // bytes offset in struct
    nullptr,  // default value
    size_function__InoutStruct_Response__q_agv_peed,  // size() function pointer
    get_const_function__InoutStruct_Response__q_agv_peed,  // get_const(index) function pointer
    get_function__InoutStruct_Response__q_agv_peed,  // get(index) function pointer
    fetch_function__InoutStruct_Response__q_agv_peed,  // fetch(index, &value) function pointer
    assign_function__InoutStruct_Response__q_agv_peed,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "exp_agv_peed",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(whl_system::srv::InoutStruct_Response, exp_agv_peed),  // bytes offset in struct
    nullptr,  // default value
    size_function__InoutStruct_Response__exp_agv_peed,  // size() function pointer
    get_const_function__InoutStruct_Response__exp_agv_peed,  // get_const(index) function pointer
    get_function__InoutStruct_Response__exp_agv_peed,  // get(index) function pointer
    fetch_function__InoutStruct_Response__exp_agv_peed,  // fetch(index, &value) function pointer
    assign_function__InoutStruct_Response__exp_agv_peed,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "robot_pos",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(whl_system::srv::InoutStruct_Response, robot_pos),  // bytes offset in struct
    nullptr,  // default value
    size_function__InoutStruct_Response__robot_pos,  // size() function pointer
    get_const_function__InoutStruct_Response__robot_pos,  // get_const(index) function pointer
    get_function__InoutStruct_Response__robot_pos,  // get(index) function pointer
    fetch_function__InoutStruct_Response__robot_pos,  // fetch(index, &value) function pointer
    assign_function__InoutStruct_Response__robot_pos,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "q_arm_info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<whl_system::msg::ArmInfo>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(whl_system::srv::InoutStruct_Response, q_arm_info),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "exp_arm_info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<whl_system::msg::ArmInfo>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(whl_system::srv::InoutStruct_Response, exp_arm_info),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "step",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(whl_system::srv::InoutStruct_Response, step),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers InoutStruct_Response_message_members = {
  "whl_system::srv",  // message namespace
  "InoutStruct_Response",  // message name
  10,  // number of fields
  sizeof(whl_system::srv::InoutStruct_Response),
  InoutStruct_Response_message_member_array,  // message members
  InoutStruct_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  InoutStruct_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t InoutStruct_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &InoutStruct_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace whl_system


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<whl_system::srv::InoutStruct_Response>()
{
  return &::whl_system::srv::rosidl_typesupport_introspection_cpp::InoutStruct_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, whl_system, srv, InoutStruct_Response)() {
  return &::whl_system::srv::rosidl_typesupport_introspection_cpp::InoutStruct_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "whl_system/srv/detail/inout_struct__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace whl_system
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers InoutStruct_service_members = {
  "whl_system::srv",  // service namespace
  "InoutStruct",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<whl_system::srv::InoutStruct>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t InoutStruct_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &InoutStruct_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace whl_system


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<whl_system::srv::InoutStruct>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::whl_system::srv::rosidl_typesupport_introspection_cpp::InoutStruct_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::whl_system::srv::InoutStruct_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::whl_system::srv::InoutStruct_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, whl_system, srv, InoutStruct)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<whl_system::srv::InoutStruct>();
}

#ifdef __cplusplus
}
#endif
