// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from driver:msg/ArmInfo.idl
// generated code does not contain a copyright notice
#include "driver/msg/detail/arm_info__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "driver/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "driver/msg/detail/arm_info__struct.h"
#include "driver/msg/detail/arm_info__functions.h"
#include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _ArmInfo__ros_msg_type = driver__msg__ArmInfo;

static bool _ArmInfo__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ArmInfo__ros_msg_type * ros_message = static_cast<const _ArmInfo__ros_msg_type *>(untyped_ros_message);
  // Field name: left_arm_joints
  {
    size_t size = 7;
    auto array_ptr = ros_message->left_arm_joints;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: right_arm_joints
  {
    size_t size = 7;
    auto array_ptr = ros_message->right_arm_joints;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: left_arm_cart
  {
    size_t size = 6;
    auto array_ptr = ros_message->left_arm_cart;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: right_arm_cart
  {
    size_t size = 6;
    auto array_ptr = ros_message->right_arm_cart;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: speed
  {
    size_t size = 2;
    auto array_ptr = ros_message->speed;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: motor_on
  {
    cdr << (ros_message->motor_on ? true : false);
  }

  return true;
}

static bool _ArmInfo__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ArmInfo__ros_msg_type * ros_message = static_cast<_ArmInfo__ros_msg_type *>(untyped_ros_message);
  // Field name: left_arm_joints
  {
    size_t size = 7;
    auto array_ptr = ros_message->left_arm_joints;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: right_arm_joints
  {
    size_t size = 7;
    auto array_ptr = ros_message->right_arm_joints;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: left_arm_cart
  {
    size_t size = 6;
    auto array_ptr = ros_message->left_arm_cart;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: right_arm_cart
  {
    size_t size = 6;
    auto array_ptr = ros_message->right_arm_cart;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: speed
  {
    size_t size = 2;
    auto array_ptr = ros_message->speed;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: motor_on
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->motor_on = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_driver
size_t get_serialized_size_driver__msg__ArmInfo(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ArmInfo__ros_msg_type * ros_message = static_cast<const _ArmInfo__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name left_arm_joints
  {
    size_t array_size = 7;
    auto array_ptr = ros_message->left_arm_joints;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name right_arm_joints
  {
    size_t array_size = 7;
    auto array_ptr = ros_message->right_arm_joints;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name left_arm_cart
  {
    size_t array_size = 6;
    auto array_ptr = ros_message->left_arm_cart;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name right_arm_cart
  {
    size_t array_size = 6;
    auto array_ptr = ros_message->right_arm_cart;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name speed
  {
    size_t array_size = 2;
    auto array_ptr = ros_message->speed;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name motor_on
  {
    size_t item_size = sizeof(ros_message->motor_on);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ArmInfo__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_driver__msg__ArmInfo(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_driver
size_t max_serialized_size_driver__msg__ArmInfo(
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

  // member: left_arm_joints
  {
    size_t array_size = 7;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: right_arm_joints
  {
    size_t array_size = 7;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: left_arm_cart
  {
    size_t array_size = 6;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: right_arm_cart
  {
    size_t array_size = 6;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: speed
  {
    size_t array_size = 2;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: motor_on
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
    using DataType = driver__msg__ArmInfo;
    is_plain =
      (
      offsetof(DataType, motor_on) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _ArmInfo__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_driver__msg__ArmInfo(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ArmInfo = {
  "driver::msg",
  "ArmInfo",
  _ArmInfo__cdr_serialize,
  _ArmInfo__cdr_deserialize,
  _ArmInfo__get_serialized_size,
  _ArmInfo__max_serialized_size
};

static rosidl_message_type_support_t _ArmInfo__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ArmInfo,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, driver, msg, ArmInfo)() {
  return &_ArmInfo__type_support;
}

#if defined(__cplusplus)
}
#endif
