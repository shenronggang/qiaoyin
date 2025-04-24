// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from driver:msg/ArmInfo.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "driver/msg/detail/arm_info__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace driver
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void ArmInfo_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) driver::msg::ArmInfo(_init);
}

void ArmInfo_fini_function(void * message_memory)
{
  auto typed_message = static_cast<driver::msg::ArmInfo *>(message_memory);
  typed_message->~ArmInfo();
}

size_t size_function__ArmInfo__left_arm_joints(const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * get_const_function__ArmInfo__left_arm_joints(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 7> *>(untyped_member);
  return &member[index];
}

void * get_function__ArmInfo__left_arm_joints(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 7> *>(untyped_member);
  return &member[index];
}

void fetch_function__ArmInfo__left_arm_joints(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__ArmInfo__left_arm_joints(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__ArmInfo__left_arm_joints(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__ArmInfo__left_arm_joints(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__ArmInfo__right_arm_joints(const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * get_const_function__ArmInfo__right_arm_joints(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 7> *>(untyped_member);
  return &member[index];
}

void * get_function__ArmInfo__right_arm_joints(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 7> *>(untyped_member);
  return &member[index];
}

void fetch_function__ArmInfo__right_arm_joints(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__ArmInfo__right_arm_joints(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__ArmInfo__right_arm_joints(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__ArmInfo__right_arm_joints(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__ArmInfo__left_arm_cart(const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * get_const_function__ArmInfo__left_arm_cart(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 6> *>(untyped_member);
  return &member[index];
}

void * get_function__ArmInfo__left_arm_cart(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 6> *>(untyped_member);
  return &member[index];
}

void fetch_function__ArmInfo__left_arm_cart(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__ArmInfo__left_arm_cart(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__ArmInfo__left_arm_cart(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__ArmInfo__left_arm_cart(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__ArmInfo__right_arm_cart(const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * get_const_function__ArmInfo__right_arm_cart(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 6> *>(untyped_member);
  return &member[index];
}

void * get_function__ArmInfo__right_arm_cart(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 6> *>(untyped_member);
  return &member[index];
}

void fetch_function__ArmInfo__right_arm_cart(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__ArmInfo__right_arm_cart(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__ArmInfo__right_arm_cart(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__ArmInfo__right_arm_cart(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__ArmInfo__speed(const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * get_const_function__ArmInfo__speed(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 2> *>(untyped_member);
  return &member[index];
}

void * get_function__ArmInfo__speed(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 2> *>(untyped_member);
  return &member[index];
}

void fetch_function__ArmInfo__speed(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__ArmInfo__speed(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__ArmInfo__speed(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__ArmInfo__speed(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ArmInfo_message_member_array[6] = {
  {
    "left_arm_joints",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(driver::msg::ArmInfo, left_arm_joints),  // bytes offset in struct
    nullptr,  // default value
    size_function__ArmInfo__left_arm_joints,  // size() function pointer
    get_const_function__ArmInfo__left_arm_joints,  // get_const(index) function pointer
    get_function__ArmInfo__left_arm_joints,  // get(index) function pointer
    fetch_function__ArmInfo__left_arm_joints,  // fetch(index, &value) function pointer
    assign_function__ArmInfo__left_arm_joints,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "right_arm_joints",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(driver::msg::ArmInfo, right_arm_joints),  // bytes offset in struct
    nullptr,  // default value
    size_function__ArmInfo__right_arm_joints,  // size() function pointer
    get_const_function__ArmInfo__right_arm_joints,  // get_const(index) function pointer
    get_function__ArmInfo__right_arm_joints,  // get(index) function pointer
    fetch_function__ArmInfo__right_arm_joints,  // fetch(index, &value) function pointer
    assign_function__ArmInfo__right_arm_joints,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "left_arm_cart",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(driver::msg::ArmInfo, left_arm_cart),  // bytes offset in struct
    nullptr,  // default value
    size_function__ArmInfo__left_arm_cart,  // size() function pointer
    get_const_function__ArmInfo__left_arm_cart,  // get_const(index) function pointer
    get_function__ArmInfo__left_arm_cart,  // get(index) function pointer
    fetch_function__ArmInfo__left_arm_cart,  // fetch(index, &value) function pointer
    assign_function__ArmInfo__left_arm_cart,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "right_arm_cart",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(driver::msg::ArmInfo, right_arm_cart),  // bytes offset in struct
    nullptr,  // default value
    size_function__ArmInfo__right_arm_cart,  // size() function pointer
    get_const_function__ArmInfo__right_arm_cart,  // get_const(index) function pointer
    get_function__ArmInfo__right_arm_cart,  // get(index) function pointer
    fetch_function__ArmInfo__right_arm_cart,  // fetch(index, &value) function pointer
    assign_function__ArmInfo__right_arm_cart,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "speed",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(driver::msg::ArmInfo, speed),  // bytes offset in struct
    nullptr,  // default value
    size_function__ArmInfo__speed,  // size() function pointer
    get_const_function__ArmInfo__speed,  // get_const(index) function pointer
    get_function__ArmInfo__speed,  // get(index) function pointer
    fetch_function__ArmInfo__speed,  // fetch(index, &value) function pointer
    assign_function__ArmInfo__speed,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "motor_on",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(driver::msg::ArmInfo, motor_on),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ArmInfo_message_members = {
  "driver::msg",  // message namespace
  "ArmInfo",  // message name
  6,  // number of fields
  sizeof(driver::msg::ArmInfo),
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

}  // namespace driver


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<driver::msg::ArmInfo>()
{
  return &::driver::msg::rosidl_typesupport_introspection_cpp::ArmInfo_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, driver, msg, ArmInfo)() {
  return &::driver::msg::rosidl_typesupport_introspection_cpp::ArmInfo_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
