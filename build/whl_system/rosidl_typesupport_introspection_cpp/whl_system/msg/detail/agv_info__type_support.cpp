// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from whl_system:msg/AgvInfo.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "whl_system/msg/detail/agv_info__struct.hpp"
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

void AgvInfo_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) whl_system::msg::AgvInfo(_init);
}

void AgvInfo_fini_function(void * message_memory)
{
  auto typed_message = static_cast<whl_system::msg::AgvInfo *>(message_memory);
  typed_message->~AgvInfo();
}

size_t size_function__AgvInfo__agv_move_speed(const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * get_const_function__AgvInfo__agv_move_speed(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 2> *>(untyped_member);
  return &member[index];
}

void * get_function__AgvInfo__agv_move_speed(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 2> *>(untyped_member);
  return &member[index];
}

void fetch_function__AgvInfo__agv_move_speed(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__AgvInfo__agv_move_speed(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__AgvInfo__agv_move_speed(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__AgvInfo__agv_move_speed(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__AgvInfo__q_agv_speed(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__AgvInfo__q_agv_speed(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__AgvInfo__q_agv_speed(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__AgvInfo__q_agv_speed(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__AgvInfo__q_agv_speed(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__AgvInfo__q_agv_speed(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__AgvInfo__q_agv_speed(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember AgvInfo_message_member_array[2] = {
  {
    "agv_move_speed",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(whl_system::msg::AgvInfo, agv_move_speed),  // bytes offset in struct
    nullptr,  // default value
    size_function__AgvInfo__agv_move_speed,  // size() function pointer
    get_const_function__AgvInfo__agv_move_speed,  // get_const(index) function pointer
    get_function__AgvInfo__agv_move_speed,  // get(index) function pointer
    fetch_function__AgvInfo__agv_move_speed,  // fetch(index, &value) function pointer
    assign_function__AgvInfo__agv_move_speed,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "q_agv_speed",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(whl_system::msg::AgvInfo, q_agv_speed),  // bytes offset in struct
    nullptr,  // default value
    size_function__AgvInfo__q_agv_speed,  // size() function pointer
    get_const_function__AgvInfo__q_agv_speed,  // get_const(index) function pointer
    get_function__AgvInfo__q_agv_speed,  // get(index) function pointer
    fetch_function__AgvInfo__q_agv_speed,  // fetch(index, &value) function pointer
    assign_function__AgvInfo__q_agv_speed,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers AgvInfo_message_members = {
  "whl_system::msg",  // message namespace
  "AgvInfo",  // message name
  2,  // number of fields
  sizeof(whl_system::msg::AgvInfo),
  AgvInfo_message_member_array,  // message members
  AgvInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  AgvInfo_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t AgvInfo_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &AgvInfo_message_members,
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
get_message_type_support_handle<whl_system::msg::AgvInfo>()
{
  return &::whl_system::msg::rosidl_typesupport_introspection_cpp::AgvInfo_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, whl_system, msg, AgvInfo)() {
  return &::whl_system::msg::rosidl_typesupport_introspection_cpp::AgvInfo_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
