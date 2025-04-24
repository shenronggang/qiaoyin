// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from whl_system:srv/InoutStruct.idl
// generated code does not contain a copyright notice
#include "whl_system/srv/detail/inout_struct__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "whl_system/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "whl_system/srv/detail/inout_struct__struct.h"
#include "whl_system/srv/detail/inout_struct__functions.h"
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

#include "rosidl_runtime_c/string.h"  // robot_name
#include "rosidl_runtime_c/string_functions.h"  // robot_name
#include "whl_system/msg/detail/agv_info__functions.h"  // agv_info
#include "whl_system/msg/detail/arm_info__functions.h"  // arm_info

// forward declare type support functions
size_t get_serialized_size_whl_system__msg__AgvInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_whl_system__msg__AgvInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, whl_system, msg, AgvInfo)();
size_t get_serialized_size_whl_system__msg__ArmInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_whl_system__msg__ArmInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, whl_system, msg, ArmInfo)();


using _InoutStruct_Request__ros_msg_type = whl_system__srv__InoutStruct_Request;

static bool _InoutStruct_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _InoutStruct_Request__ros_msg_type * ros_message = static_cast<const _InoutStruct_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: robot_name
  {
    const rosidl_runtime_c__String * str = &ros_message->robot_name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: running_mode
  {
    cdr << ros_message->running_mode;
  }

  // Field name: ctrl_cmd
  {
    cdr << ros_message->ctrl_cmd;
  }

  // Field name: enable
  {
    cdr << (ros_message->enable ? true : false);
  }

  // Field name: arm_info
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, whl_system, msg, ArmInfo
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->arm_info, cdr))
    {
      return false;
    }
  }

  // Field name: agv_info
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, whl_system, msg, AgvInfo
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->agv_info, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _InoutStruct_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _InoutStruct_Request__ros_msg_type * ros_message = static_cast<_InoutStruct_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: robot_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->robot_name.data) {
      rosidl_runtime_c__String__init(&ros_message->robot_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->robot_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'robot_name'\n");
      return false;
    }
  }

  // Field name: running_mode
  {
    cdr >> ros_message->running_mode;
  }

  // Field name: ctrl_cmd
  {
    cdr >> ros_message->ctrl_cmd;
  }

  // Field name: enable
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->enable = tmp ? true : false;
  }

  // Field name: arm_info
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, whl_system, msg, ArmInfo
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->arm_info))
    {
      return false;
    }
  }

  // Field name: agv_info
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, whl_system, msg, AgvInfo
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->agv_info))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_whl_system
size_t get_serialized_size_whl_system__srv__InoutStruct_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _InoutStruct_Request__ros_msg_type * ros_message = static_cast<const _InoutStruct_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name robot_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->robot_name.size + 1);
  // field.name running_mode
  {
    size_t item_size = sizeof(ros_message->running_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ctrl_cmd
  {
    size_t item_size = sizeof(ros_message->ctrl_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name enable
  {
    size_t item_size = sizeof(ros_message->enable);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name arm_info

  current_alignment += get_serialized_size_whl_system__msg__ArmInfo(
    &(ros_message->arm_info), current_alignment);
  // field.name agv_info

  current_alignment += get_serialized_size_whl_system__msg__AgvInfo(
    &(ros_message->agv_info), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _InoutStruct_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_whl_system__srv__InoutStruct_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_whl_system
size_t max_serialized_size_whl_system__srv__InoutStruct_Request(
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

  // member: robot_name
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: running_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: ctrl_cmd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: enable
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: arm_info
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_whl_system__msg__ArmInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: agv_info
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_whl_system__msg__AgvInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = whl_system__srv__InoutStruct_Request;
    is_plain =
      (
      offsetof(DataType, agv_info) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _InoutStruct_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_whl_system__srv__InoutStruct_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_InoutStruct_Request = {
  "whl_system::srv",
  "InoutStruct_Request",
  _InoutStruct_Request__cdr_serialize,
  _InoutStruct_Request__cdr_deserialize,
  _InoutStruct_Request__get_serialized_size,
  _InoutStruct_Request__max_serialized_size
};

static rosidl_message_type_support_t _InoutStruct_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_InoutStruct_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, whl_system, srv, InoutStruct_Request)() {
  return &_InoutStruct_Request__type_support;
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
// #include "whl_system/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "whl_system/srv/detail/inout_struct__struct.h"
// already included above
// #include "whl_system/srv/detail/inout_struct__functions.h"
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

// already included above
// #include "whl_system/msg/detail/arm_info__functions.h"  // exp_arm_info, q_arm_info

// forward declare type support functions
size_t get_serialized_size_whl_system__msg__ArmInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_whl_system__msg__ArmInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, whl_system, msg, ArmInfo)();


using _InoutStruct_Response__ros_msg_type = whl_system__srv__InoutStruct_Response;

static bool _InoutStruct_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _InoutStruct_Response__ros_msg_type * ros_message = static_cast<const _InoutStruct_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: motor_on
  {
    cdr << ros_message->motor_on;
  }

  // Field name: running_mode
  {
    cdr << ros_message->running_mode;
  }

  // Field name: ctrl_cmd
  {
    cdr << ros_message->ctrl_cmd;
  }

  // Field name: gripper
  {
    size_t size = 2;
    auto array_ptr = ros_message->gripper;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: q_agv_peed
  {
    size_t size = 2;
    auto array_ptr = ros_message->q_agv_peed;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: exp_agv_peed
  {
    size_t size = 2;
    auto array_ptr = ros_message->exp_agv_peed;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: robot_pos
  {
    size_t size = 3;
    auto array_ptr = ros_message->robot_pos;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: q_arm_info
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, whl_system, msg, ArmInfo
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->q_arm_info, cdr))
    {
      return false;
    }
  }

  // Field name: exp_arm_info
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, whl_system, msg, ArmInfo
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->exp_arm_info, cdr))
    {
      return false;
    }
  }

  // Field name: step
  {
    cdr << ros_message->step;
  }

  return true;
}

static bool _InoutStruct_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _InoutStruct_Response__ros_msg_type * ros_message = static_cast<_InoutStruct_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: motor_on
  {
    cdr >> ros_message->motor_on;
  }

  // Field name: running_mode
  {
    cdr >> ros_message->running_mode;
  }

  // Field name: ctrl_cmd
  {
    cdr >> ros_message->ctrl_cmd;
  }

  // Field name: gripper
  {
    size_t size = 2;
    auto array_ptr = ros_message->gripper;
    for (size_t i = 0; i < size; ++i) {
      uint8_t tmp;
      cdr >> tmp;
      array_ptr[i] = tmp ? true : false;
    }
  }

  // Field name: q_agv_peed
  {
    size_t size = 2;
    auto array_ptr = ros_message->q_agv_peed;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: exp_agv_peed
  {
    size_t size = 2;
    auto array_ptr = ros_message->exp_agv_peed;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: robot_pos
  {
    size_t size = 3;
    auto array_ptr = ros_message->robot_pos;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: q_arm_info
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, whl_system, msg, ArmInfo
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->q_arm_info))
    {
      return false;
    }
  }

  // Field name: exp_arm_info
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, whl_system, msg, ArmInfo
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->exp_arm_info))
    {
      return false;
    }
  }

  // Field name: step
  {
    cdr >> ros_message->step;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_whl_system
size_t get_serialized_size_whl_system__srv__InoutStruct_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _InoutStruct_Response__ros_msg_type * ros_message = static_cast<const _InoutStruct_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name motor_on
  {
    size_t item_size = sizeof(ros_message->motor_on);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name running_mode
  {
    size_t item_size = sizeof(ros_message->running_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ctrl_cmd
  {
    size_t item_size = sizeof(ros_message->ctrl_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gripper
  {
    size_t array_size = 2;
    auto array_ptr = ros_message->gripper;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name q_agv_peed
  {
    size_t array_size = 2;
    auto array_ptr = ros_message->q_agv_peed;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name exp_agv_peed
  {
    size_t array_size = 2;
    auto array_ptr = ros_message->exp_agv_peed;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name robot_pos
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->robot_pos;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name q_arm_info

  current_alignment += get_serialized_size_whl_system__msg__ArmInfo(
    &(ros_message->q_arm_info), current_alignment);
  // field.name exp_arm_info

  current_alignment += get_serialized_size_whl_system__msg__ArmInfo(
    &(ros_message->exp_arm_info), current_alignment);
  // field.name step
  {
    size_t item_size = sizeof(ros_message->step);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _InoutStruct_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_whl_system__srv__InoutStruct_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_whl_system
size_t max_serialized_size_whl_system__srv__InoutStruct_Response(
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

  // member: motor_on
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: running_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: ctrl_cmd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: gripper
  {
    size_t array_size = 2;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: q_agv_peed
  {
    size_t array_size = 2;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: exp_agv_peed
  {
    size_t array_size = 2;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: robot_pos
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: q_arm_info
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_whl_system__msg__ArmInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: exp_arm_info
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_whl_system__msg__ArmInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: step
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = whl_system__srv__InoutStruct_Response;
    is_plain =
      (
      offsetof(DataType, step) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _InoutStruct_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_whl_system__srv__InoutStruct_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_InoutStruct_Response = {
  "whl_system::srv",
  "InoutStruct_Response",
  _InoutStruct_Response__cdr_serialize,
  _InoutStruct_Response__cdr_deserialize,
  _InoutStruct_Response__get_serialized_size,
  _InoutStruct_Response__max_serialized_size
};

static rosidl_message_type_support_t _InoutStruct_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_InoutStruct_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, whl_system, srv, InoutStruct_Response)() {
  return &_InoutStruct_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "whl_system/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "whl_system/srv/inout_struct.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t InoutStruct__callbacks = {
  "whl_system::srv",
  "InoutStruct",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, whl_system, srv, InoutStruct_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, whl_system, srv, InoutStruct_Response)(),
};

static rosidl_service_type_support_t InoutStruct__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &InoutStruct__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, whl_system, srv, InoutStruct)() {
  return &InoutStruct__handle;
}

#if defined(__cplusplus)
}
#endif
