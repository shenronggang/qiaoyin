// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from driver:msg/GripperInfo.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "driver/msg/detail/gripper_info__struct.hpp"
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

void GripperInfo_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) driver::msg::GripperInfo(_init);
}

void GripperInfo_fini_function(void * message_memory)
{
  auto typed_message = static_cast<driver::msg::GripperInfo *>(message_memory);
  typed_message->~GripperInfo();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GripperInfo_message_member_array[2] = {
  {
    "left_gripper",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(driver::msg::GripperInfo, left_gripper),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "right_gripper",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(driver::msg::GripperInfo, right_gripper),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GripperInfo_message_members = {
  "driver::msg",  // message namespace
  "GripperInfo",  // message name
  2,  // number of fields
  sizeof(driver::msg::GripperInfo),
  GripperInfo_message_member_array,  // message members
  GripperInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  GripperInfo_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GripperInfo_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GripperInfo_message_members,
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
get_message_type_support_handle<driver::msg::GripperInfo>()
{
  return &::driver::msg::rosidl_typesupport_introspection_cpp::GripperInfo_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, driver, msg, GripperInfo)() {
  return &::driver::msg::rosidl_typesupport_introspection_cpp::GripperInfo_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
