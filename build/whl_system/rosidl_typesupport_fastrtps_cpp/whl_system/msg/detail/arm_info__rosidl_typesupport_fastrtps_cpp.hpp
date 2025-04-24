// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from whl_system:msg/ArmInfo.idl
// generated code does not contain a copyright notice

#ifndef WHL_SYSTEM__MSG__DETAIL__ARM_INFO__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define WHL_SYSTEM__MSG__DETAIL__ARM_INFO__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "whl_system/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "whl_system/msg/detail/arm_info__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace whl_system
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_whl_system
cdr_serialize(
  const whl_system::msg::ArmInfo & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_whl_system
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  whl_system::msg::ArmInfo & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_whl_system
get_serialized_size(
  const whl_system::msg::ArmInfo & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_whl_system
max_serialized_size_ArmInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace whl_system

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_whl_system
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, whl_system, msg, ArmInfo)();

#ifdef __cplusplus
}
#endif

#endif  // WHL_SYSTEM__MSG__DETAIL__ARM_INFO__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
