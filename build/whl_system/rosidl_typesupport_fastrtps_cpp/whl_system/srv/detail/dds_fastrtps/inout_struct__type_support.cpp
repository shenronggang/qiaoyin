// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from whl_system:srv/InoutStruct.idl
// generated code does not contain a copyright notice
#include "whl_system/srv/detail/inout_struct__rosidl_typesupport_fastrtps_cpp.hpp"
#include "whl_system/srv/detail/inout_struct__struct.hpp"

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
bool cdr_serialize(
  const whl_system::msg::ArmInfo &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  whl_system::msg::ArmInfo &);
size_t get_serialized_size(
  const whl_system::msg::ArmInfo &,
  size_t current_alignment);
size_t
max_serialized_size_ArmInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace whl_system

namespace whl_system
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const whl_system::msg::AgvInfo &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  whl_system::msg::AgvInfo &);
size_t get_serialized_size(
  const whl_system::msg::AgvInfo &,
  size_t current_alignment);
size_t
max_serialized_size_AgvInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace whl_system


namespace whl_system
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_whl_system
cdr_serialize(
  const whl_system::srv::InoutStruct_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: robot_name
  cdr << ros_message.robot_name;
  // Member: running_mode
  cdr << ros_message.running_mode;
  // Member: ctrl_cmd
  cdr << ros_message.ctrl_cmd;
  // Member: enable
  cdr << (ros_message.enable ? true : false);
  // Member: arm_info
  whl_system::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.arm_info,
    cdr);
  // Member: agv_info
  whl_system::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.agv_info,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_whl_system
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  whl_system::srv::InoutStruct_Request & ros_message)
{
  // Member: robot_name
  cdr >> ros_message.robot_name;

  // Member: running_mode
  cdr >> ros_message.running_mode;

  // Member: ctrl_cmd
  cdr >> ros_message.ctrl_cmd;

  // Member: enable
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.enable = tmp ? true : false;
  }

  // Member: arm_info
  whl_system::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.arm_info);

  // Member: agv_info
  whl_system::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.agv_info);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_whl_system
get_serialized_size(
  const whl_system::srv::InoutStruct_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: robot_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.robot_name.size() + 1);
  // Member: running_mode
  {
    size_t item_size = sizeof(ros_message.running_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ctrl_cmd
  {
    size_t item_size = sizeof(ros_message.ctrl_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: enable
  {
    size_t item_size = sizeof(ros_message.enable);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: arm_info

  current_alignment +=
    whl_system::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.arm_info, current_alignment);
  // Member: agv_info

  current_alignment +=
    whl_system::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.agv_info, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_whl_system
max_serialized_size_InoutStruct_Request(
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


  // Member: robot_name
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

  // Member: running_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: ctrl_cmd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: enable
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: arm_info
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        whl_system::msg::typesupport_fastrtps_cpp::max_serialized_size_ArmInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: agv_info
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        whl_system::msg::typesupport_fastrtps_cpp::max_serialized_size_AgvInfo(
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
    using DataType = whl_system::srv::InoutStruct_Request;
    is_plain =
      (
      offsetof(DataType, agv_info) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _InoutStruct_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const whl_system::srv::InoutStruct_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _InoutStruct_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<whl_system::srv::InoutStruct_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _InoutStruct_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const whl_system::srv::InoutStruct_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _InoutStruct_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_InoutStruct_Request(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _InoutStruct_Request__callbacks = {
  "whl_system::srv",
  "InoutStruct_Request",
  _InoutStruct_Request__cdr_serialize,
  _InoutStruct_Request__cdr_deserialize,
  _InoutStruct_Request__get_serialized_size,
  _InoutStruct_Request__max_serialized_size
};

static rosidl_message_type_support_t _InoutStruct_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_InoutStruct_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace whl_system

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_whl_system
const rosidl_message_type_support_t *
get_message_type_support_handle<whl_system::srv::InoutStruct_Request>()
{
  return &whl_system::srv::typesupport_fastrtps_cpp::_InoutStruct_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, whl_system, srv, InoutStruct_Request)() {
  return &whl_system::srv::typesupport_fastrtps_cpp::_InoutStruct_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
// functions for whl_system::msg::ArmInfo already declared above

// functions for whl_system::msg::ArmInfo already declared above


namespace whl_system
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_whl_system
cdr_serialize(
  const whl_system::srv::InoutStruct_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: motor_on
  cdr << ros_message.motor_on;
  // Member: running_mode
  cdr << ros_message.running_mode;
  // Member: ctrl_cmd
  cdr << ros_message.ctrl_cmd;
  // Member: gripper
  {
    cdr << ros_message.gripper;
  }
  // Member: q_agv_peed
  {
    cdr << ros_message.q_agv_peed;
  }
  // Member: exp_agv_peed
  {
    cdr << ros_message.exp_agv_peed;
  }
  // Member: robot_pos
  {
    cdr << ros_message.robot_pos;
  }
  // Member: q_arm_info
  whl_system::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.q_arm_info,
    cdr);
  // Member: exp_arm_info
  whl_system::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.exp_arm_info,
    cdr);
  // Member: step
  cdr << ros_message.step;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_whl_system
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  whl_system::srv::InoutStruct_Response & ros_message)
{
  // Member: motor_on
  cdr >> ros_message.motor_on;

  // Member: running_mode
  cdr >> ros_message.running_mode;

  // Member: ctrl_cmd
  cdr >> ros_message.ctrl_cmd;

  // Member: gripper
  {
    cdr >> ros_message.gripper;
  }

  // Member: q_agv_peed
  {
    cdr >> ros_message.q_agv_peed;
  }

  // Member: exp_agv_peed
  {
    cdr >> ros_message.exp_agv_peed;
  }

  // Member: robot_pos
  {
    cdr >> ros_message.robot_pos;
  }

  // Member: q_arm_info
  whl_system::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.q_arm_info);

  // Member: exp_arm_info
  whl_system::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.exp_arm_info);

  // Member: step
  cdr >> ros_message.step;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_whl_system
get_serialized_size(
  const whl_system::srv::InoutStruct_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: motor_on
  {
    size_t item_size = sizeof(ros_message.motor_on);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: running_mode
  {
    size_t item_size = sizeof(ros_message.running_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ctrl_cmd
  {
    size_t item_size = sizeof(ros_message.ctrl_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gripper
  {
    size_t array_size = 2;
    size_t item_size = sizeof(ros_message.gripper[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: q_agv_peed
  {
    size_t array_size = 2;
    size_t item_size = sizeof(ros_message.q_agv_peed[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: exp_agv_peed
  {
    size_t array_size = 2;
    size_t item_size = sizeof(ros_message.exp_agv_peed[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: robot_pos
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.robot_pos[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: q_arm_info

  current_alignment +=
    whl_system::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.q_arm_info, current_alignment);
  // Member: exp_arm_info

  current_alignment +=
    whl_system::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.exp_arm_info, current_alignment);
  // Member: step
  {
    size_t item_size = sizeof(ros_message.step);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_whl_system
max_serialized_size_InoutStruct_Response(
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


  // Member: motor_on
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: running_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: ctrl_cmd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: gripper
  {
    size_t array_size = 2;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: q_agv_peed
  {
    size_t array_size = 2;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: exp_agv_peed
  {
    size_t array_size = 2;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: robot_pos
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: q_arm_info
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        whl_system::msg::typesupport_fastrtps_cpp::max_serialized_size_ArmInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: exp_arm_info
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        whl_system::msg::typesupport_fastrtps_cpp::max_serialized_size_ArmInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: step
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
    using DataType = whl_system::srv::InoutStruct_Response;
    is_plain =
      (
      offsetof(DataType, step) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _InoutStruct_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const whl_system::srv::InoutStruct_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _InoutStruct_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<whl_system::srv::InoutStruct_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _InoutStruct_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const whl_system::srv::InoutStruct_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _InoutStruct_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_InoutStruct_Response(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _InoutStruct_Response__callbacks = {
  "whl_system::srv",
  "InoutStruct_Response",
  _InoutStruct_Response__cdr_serialize,
  _InoutStruct_Response__cdr_deserialize,
  _InoutStruct_Response__get_serialized_size,
  _InoutStruct_Response__max_serialized_size
};

static rosidl_message_type_support_t _InoutStruct_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_InoutStruct_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace whl_system

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_whl_system
const rosidl_message_type_support_t *
get_message_type_support_handle<whl_system::srv::InoutStruct_Response>()
{
  return &whl_system::srv::typesupport_fastrtps_cpp::_InoutStruct_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, whl_system, srv, InoutStruct_Response)() {
  return &whl_system::srv::typesupport_fastrtps_cpp::_InoutStruct_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace whl_system
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _InoutStruct__callbacks = {
  "whl_system::srv",
  "InoutStruct",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, whl_system, srv, InoutStruct_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, whl_system, srv, InoutStruct_Response)(),
};

static rosidl_service_type_support_t _InoutStruct__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_InoutStruct__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace whl_system

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_whl_system
const rosidl_service_type_support_t *
get_service_type_support_handle<whl_system::srv::InoutStruct>()
{
  return &whl_system::srv::typesupport_fastrtps_cpp::_InoutStruct__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, whl_system, srv, InoutStruct)() {
  return &whl_system::srv::typesupport_fastrtps_cpp::_InoutStruct__handle;
}

#ifdef __cplusplus
}
#endif
