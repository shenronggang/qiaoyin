// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from whl_system:msg/ArmInfo.idl
// generated code does not contain a copyright notice
#include "whl_system/msg/detail/arm_info__rosidl_typesupport_fastrtps_cpp.hpp"
#include "whl_system/msg/detail/arm_info__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

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
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: joints
  {
    cdr << ros_message.joints;
  }
  // Member: pos
  {
    cdr << ros_message.pos;
  }
  // Member: gripper
  {
    cdr << ros_message.gripper;
  }
  // Member: arm_speed
  {
    cdr << ros_message.arm_speed;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_whl_system
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  whl_system::msg::ArmInfo & ros_message)
{
  // Member: joints
  {
    cdr >> ros_message.joints;
  }

  // Member: pos
  {
    cdr >> ros_message.pos;
  }

  // Member: gripper
  {
    cdr >> ros_message.gripper;
  }

  // Member: arm_speed
  {
    cdr >> ros_message.arm_speed;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_whl_system
get_serialized_size(
  const whl_system::msg::ArmInfo & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: joints
  {
    size_t array_size = 7;
    size_t item_size = sizeof(ros_message.joints[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pos
  {
    size_t array_size = 7;
    size_t item_size = sizeof(ros_message.pos[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gripper
  {
    size_t array_size = 2;
    size_t item_size = sizeof(ros_message.gripper[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: arm_speed
  {
    size_t array_size = 2;
    size_t item_size = sizeof(ros_message.arm_speed[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_whl_system
max_serialized_size_ArmInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: joints
  {
    size_t array_size = 7;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: pos
  {
    size_t array_size = 7;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: gripper
  {
    size_t array_size = 2;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: arm_speed
  {
    size_t array_size = 2;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = whl_system::msg::ArmInfo;
    is_plain =
      (
      offsetof(DataType, arm_speed) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _ArmInfo__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const whl_system::msg::ArmInfo *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ArmInfo__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<whl_system::msg::ArmInfo *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ArmInfo__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const whl_system::msg::ArmInfo *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ArmInfo__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ArmInfo(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _ArmInfo__callbacks = {
  "whl_system::msg",
  "ArmInfo",
  _ArmInfo__cdr_serialize,
  _ArmInfo__cdr_deserialize,
  _ArmInfo__get_serialized_size,
  _ArmInfo__max_serialized_size
};

static rosidl_message_type_support_t _ArmInfo__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ArmInfo__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace whl_system

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_whl_system
const rosidl_message_type_support_t *
get_message_type_support_handle<whl_system::msg::ArmInfo>()
{
  return &whl_system::msg::typesupport_fastrtps_cpp::_ArmInfo__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, whl_system, msg, ArmInfo)() {
  return &whl_system::msg::typesupport_fastrtps_cpp::_ArmInfo__handle;
}

#ifdef __cplusplus
}
#endif
