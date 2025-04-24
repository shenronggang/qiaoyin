// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from whl_system:msg/ArmInfo.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "whl_system/msg/detail/arm_info__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace whl_system
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void ArmInfo_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) whl_system::msg::ArmInfo(_init);
}

void ArmInfo_fini_function(void * message_memory)
{
  auto typed_message = static_cast<whl_system::msg::ArmInfo *>(message_memory);
  typed_message->~ArmInfo();
}

size_t size_function__ArmInfo__joints(const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * get_const_function__ArmInfo__joints(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 7> *>(untyped_member);
  return &member[index];
}

void * get_function__ArmInfo__joints(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 7> *>(untyped_member);
  return &member[index];
}

void fetch_function__ArmInfo__joints(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__ArmInfo__joints(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__ArmInfo__joints(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__ArmInfo__joints(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__ArmInfo__pos(const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * get_const_function__ArmInfo__pos(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 7> *>(untyped_member);
  return &member[index];
}

void * get_function__ArmInfo__pos(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 7> *>(untyped_member);
  return &member[index];
}

void fetch_function__ArmInfo__pos(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__ArmInfo__pos(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__ArmInfo__pos(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__ArmInfo__pos(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__ArmInfo__gripper(const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * get_const_function__ArmInfo__gripper(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<bool, 2> *>(untyped_member);
  return &member[index];
}

void * get_function__ArmInfo__gripper(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<bool, 2> *>(untyped_member);
  return &member[index];
}

void fetch_function__ArmInfo__gripper(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const bool *>(
    get_const_function__ArmInfo__gripper(untyped_member, index));
  auto & value = *reinterpret_cast<bool *>(untyped_value);
  value = item;
}

void assign_function__ArmInfo__gripper(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<bool *>(
    get_function__ArmInfo__gripper(untyped_member, index));
  const auto & value = *reinterpret_cast<const bool *>(untyped_value);
  item = value;
}

size_t size_function__ArmInfo__arm_speed(const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * get_const_function__ArmInfo__arm_speed(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 2> *>(untyped_member);
  return &member[index];
}

void * get_function__ArmInfo__arm_speed(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 2> *>(untyped_member);
  return &member[index];
}

void fetch_function__ArmInfo__arm_speed(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__ArmInfo__arm_speed(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__ArmInfo__arm_speed(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__ArmInfo__arm_speed(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ArmInfo_message_member_array[4] = {
  {
    "joints",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(whl_system::msg::ArmInfo, joints),  // bytes offset in struct
    nullptr,  // default value
    size_function__ArmInfo__joints,  // size() function pointer
    get_const_function__ArmInfo__joints,  // get_const(index) function pointer
    get_function__ArmInfo__joints,  // get(index) function pointer
    fetch_function__ArmInfo__joints,  // fetch(index, &value) function pointer
    assign_function__ArmInfo__joints,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "pos",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(whl_system::msg::ArmInfo, pos),  // bytes offset in struct
    nullptr,  // default value
    size_function__ArmInfo__pos,  // size() function pointer
    get_const_function__ArmInfo__pos,  // get_const(index) function pointer
    get_function__ArmInfo__pos,  // get(index) function pointer
    fetch_function__ArmInfo__pos,  // fetch(index, &value) function pointer
    assign_function__ArmInfo__pos,  // assign(index, value) function pointer
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
    offsetof(whl_system::msg::ArmInfo, gripper),  // bytes offset in struct
    nullptr,  // default value
    size_function__ArmInfo__gripper,  // size() function pointer
    get_const_function__ArmInfo__gripper,  // get_const(index) function pointer
    get_function__ArmInfo__gripper,  // get(index) function pointer
    fetch_function__ArmInfo__gripper,  // fetch(index, &value) function pointer
    assign_function__ArmInfo__gripper,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "arm_speed",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(whl_system::msg::ArmInfo, arm_speed),  // bytes offset in struct
    nullptr,  // default value
    size_function__ArmInfo__arm_speed,  // size() function pointer
    get_const_function__ArmInfo__arm_speed,  // get_const(index) function pointer
    get_function__ArmInfo__arm_speed,  // get(index) function pointer
    fetch_function__ArmInfo__arm_speed,  // fetch(index, &value) function pointer
    assign_function__ArmInfo__arm_speed,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ArmInfo_message_members = {
  "whl_system::msg",  // message namespace
  "ArmInfo",  // message name
  4,  // number of fields
  sizeof(whl_system::msg::ArmInfo),
  ArmInfo_message_member_array,  // message members
  ArmInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  ArmInfo_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ArmInfo_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ArmInfo_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace whl_system


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<whl_system::msg::ArmInfo>()
{
  return &::whl_system::msg::rosidl_typesupport_introspection_cpp::ArmInfo_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, whl_system, msg, ArmInfo)() {
  return &::whl_system::msg::rosidl_typesupport_introspection_cpp::ArmInfo_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
