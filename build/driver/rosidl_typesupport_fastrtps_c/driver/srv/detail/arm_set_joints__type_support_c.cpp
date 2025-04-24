// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from driver:srv/ArmSetJoints.idl
// generated code does not contain a copyright notice
#include "driver/srv/detail/arm_set_joints__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "driver/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "driver/srv/detail/arm_set_joints__struct.h"
#include "driver/srv/detail/arm_set_joints__functions.h"
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


using _ArmSetJoints_Request__ros_msg_type = driver__srv__ArmSetJoints_Request;

static bool _ArmSetJoints_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ArmSetJoints_Request__ros_msg_type * ros_message = static_cast<const _ArmSetJoints_Request__ros_msg_type *>(untyped_ros_message);
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

  // Field name: speed
  {
    size_t size = 2;
    auto array_ptr = ros_message->speed;
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _ArmSetJoints_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ArmSetJoints_Request__ros_msg_type * ros_message = static_cast<_ArmSetJoints_Request__ros_msg_type *>(untyped_ros_message);
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

  // Field name: speed
  {
    size_t size = 2;
    auto array_ptr = ros_message->speed;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_driver
size_t get_serialized_size_driver__srv__ArmSetJoints_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ArmSetJoints_Request__ros_msg_type * ros_message = static_cast<const _ArmSetJoints_Request__ros_msg_type *>(untyped_ros_message);
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
  // field.name speed
  {
    size_t array_size = 2;
    auto array_ptr = ros_message->speed;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ArmSetJoints_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_driver__srv__ArmSetJoints_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_driver
size_t max_serialized_size_driver__srv__ArmSetJoints_Request(
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
  // member: speed
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
    using DataType = driver__srv__ArmSetJoints_Request;
    is_plain =
      (
      offsetof(DataType, speed) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _ArmSetJoints_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_driver__srv__ArmSetJoints_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ArmSetJoints_Request = {
  "driver::srv",
  "ArmSetJoints_Request",
  _ArmSetJoints_Request__cdr_serialize,
  _ArmSetJoints_Request__cdr_deserialize,
  _ArmSetJoints_Request__get_serialized_size,
  _ArmSetJoints_Request__max_serialized_size
};

static rosidl_message_type_support_t _ArmSetJoints_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ArmSetJoints_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, driver, srv, ArmSetJoints_Request)() {
  return &_ArmSetJoints_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "driver/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "driver/srv/detail/arm_set_joints__struct.h"
// already included above
// #include "driver/srv/detail/arm_set_joints__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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


using _ArmSetJoints_Response__ros_msg_type = driver__srv__ArmSetJoints_Response;

static bool _ArmSetJoints_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ArmSetJoints_Response__ros_msg_type * ros_message = static_cast<const _ArmSetJoints_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
  }

  return true;
}

static bool _ArmSetJoints_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ArmSetJoints_Response__ros_msg_type * ros_message = static_cast<_ArmSetJoints_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->success = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_driver
size_t get_serialized_size_driver__srv__ArmSetJoints_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ArmSetJoints_Response__ros_msg_type * ros_message = static_cast<const _ArmSetJoints_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name success
  {
    size_t item_size = sizeof(ros_message->success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ArmSetJoints_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_driver__srv__ArmSetJoints_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_driver
size_t max_serialized_size_driver__srv__ArmSetJoints_Response(
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

  // member: success
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
    using DataType = driver__srv__ArmSetJoints_Response;
    is_plain =
      (
      offsetof(DataType, success) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _ArmSetJoints_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_driver__srv__ArmSetJoints_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ArmSetJoints_Response = {
  "driver::srv",
  "ArmSetJoints_Response",
  _ArmSetJoints_Response__cdr_serialize,
  _ArmSetJoints_Response__cdr_deserialize,
  _ArmSetJoints_Response__get_serialized_size,
  _ArmSetJoints_Response__max_serialized_size
};

static rosidl_message_type_support_t _ArmSetJoints_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ArmSetJoints_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, driver, srv, ArmSetJoints_Response)() {
  return &_ArmSetJoints_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "driver/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "driver/srv/arm_set_joints.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t ArmSetJoints__callbacks = {
  "driver::srv",
  "ArmSetJoints",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, driver, srv, ArmSetJoints_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, driver, srv, ArmSetJoints_Response)(),
};

static rosidl_service_type_support_t ArmSetJoints__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &ArmSetJoints__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, driver, srv, ArmSetJoints)() {
  return &ArmSetJoints__handle;
}

#if defined(__cplusplus)
}
#endif
