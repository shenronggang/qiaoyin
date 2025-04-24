// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from driver:msg/ArmInfo.idl
// generated code does not contain a copyright notice
#include "driver/msg/detail/arm_info__rosidl_typesupport_fastrtps_cpp.hpp"
#include "driver/msg/detail/arm_info__struct.hpp"

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

namespace driver
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_driver
cdr_serialize(
  const driver::msg::ArmInfo & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: left_arm_joints
  {
    cdr << ros_message.left_arm_joints;
  }
  // Member: right_arm_joints
  {
    cdr << ros_message.right_arm_joints;
  }
  // Member: left_arm_cart
  {
    cdr << ros_message.left_arm_cart;
  }
  // Member: right_arm_cart
  {
    cdr << ros_message.right_arm_cart;
  }
  // Member: speed
  {
    cdr << ros_message.speed;
  }
  // Member: motor_on
  cdr << (ros_message.motor_on ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_driver
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  driver::msg::ArmInfo & ros_message)
{
  // Member: left_arm_joints
  {
    cdr >> ros_message.left_arm_joints;
  }

  // Member: right_arm_joints
  {
    cdr >> ros_message.right_arm_joints;
  }

  // Member: left_arm_cart
  {
    cdr >> ros_message.left_arm_cart;
  }

  // Member: right_arm_cart
  {
    cdr >> ros_message.right_arm_cart;
  }

  // Member: speed
  {
    cdr >> ros_message.speed;
  }

  // Member: motor_on
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.motor_on = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_driver
get_serialized_size(
  const driver::msg::ArmInfo & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: left_arm_joints
  {
    size_t array_size = 7;
    size_t item_size = sizeof(ros_message.left_arm_joints[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: right_arm_joints
  {
    size_t array_size = 7;
    size_t item_size = sizeof(ros_message.right_arm_joints[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: left_arm_cart
  {
    size_t array_size = 6;
    size_t item_size = sizeof(ros_message.left_arm_cart[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: right_arm_cart
  {
    size_t array_size = 6;
    size_t item_size = sizeof(ros_message.right_arm_cart[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: speed
  {
    size_t array_size = 2;
    size_t item_size = sizeof(ros_message.speed[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: motor_on
  {
    size_t item_size = sizeof(ros_message.motor_on);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_driver
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


  // Member: left_arm_joints
  {
    size_t array_size = 7;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: right_arm_joints
  {
    size_t array_size = 7;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: left_arm_cart
  {
    size_t array_size = 6;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: right_arm_cart
  {
    size_t array_size = 6;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: speed
  {
    size_t array_size = 2;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: motor_on
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = driver::msg::ArmInfo;
    is_plain =
      (
      offsetof(DataType, motor_on) +
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
    static_cast<const driver::msg::ArmInfo *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ArmInfo__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<driver::msg::ArmInfo *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ArmInfo__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const driver::msg::ArmInfo *>(
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
  "driver::msg",
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

}  // namespace driver

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_driver
const rosidl_message_type_support_t *
get_message_type_support_handle<driver::msg::ArmInfo>()
{
  return &driver::msg::typesupport_fastrtps_cpp::_ArmInfo__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, driver, msg, ArmInfo)() {
  return &driver::msg::typesupport_fastrtps_cpp::_ArmInfo__handle;
}

#ifdef __cplusplus
}
#endif
