// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from whl_system:srv/InoutStruct.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "whl_system/srv/detail/inout_struct__rosidl_typesupport_introspection_c.h"
#include "whl_system/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "whl_system/srv/detail/inout_struct__functions.h"
#include "whl_system/srv/detail/inout_struct__struct.h"


// Include directives for member types
// Member `robot_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `arm_info`
#include "whl_system/msg/arm_info.h"
// Member `arm_info`
#include "whl_system/msg/detail/arm_info__rosidl_typesupport_introspection_c.h"
// Member `agv_info`
#include "whl_system/msg/agv_info.h"
// Member `agv_info`
#include "whl_system/msg/detail/agv_info__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void whl_system__srv__InoutStruct_Request__rosidl_typesupport_introspection_c__InoutStruct_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  whl_system__srv__InoutStruct_Request__init(message_memory);
}

void whl_system__srv__InoutStruct_Request__rosidl_typesupport_introspection_c__InoutStruct_Request_fini_function(void * message_memory)
{
  whl_system__srv__InoutStruct_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember whl_system__srv__InoutStruct_Request__rosidl_typesupport_introspection_c__InoutStruct_Request_message_member_array[6] = {
  {
    "robot_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(whl_system__srv__InoutStruct_Request, robot_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "running_mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(whl_system__srv__InoutStruct_Request, running_mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ctrl_cmd",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(whl_system__srv__InoutStruct_Request, ctrl_cmd),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "enable",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(whl_system__srv__InoutStruct_Request, enable),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "arm_info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(whl_system__srv__InoutStruct_Request, arm_info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "agv_info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(whl_system__srv__InoutStruct_Request, agv_info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers whl_system__srv__InoutStruct_Request__rosidl_typesupport_introspection_c__InoutStruct_Request_message_members = {
  "whl_system__srv",  // message namespace
  "InoutStruct_Request",  // message name
  6,  // number of fields
  sizeof(whl_system__srv__InoutStruct_Request),
  whl_system__srv__InoutStruct_Request__rosidl_typesupport_introspection_c__InoutStruct_Request_message_member_array,  // message members
  whl_system__srv__InoutStruct_Request__rosidl_typesupport_introspection_c__InoutStruct_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  whl_system__srv__InoutStruct_Request__rosidl_typesupport_introspection_c__InoutStruct_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t whl_system__srv__InoutStruct_Request__rosidl_typesupport_introspection_c__InoutStruct_Request_message_type_support_handle = {
  0,
  &whl_system__srv__InoutStruct_Request__rosidl_typesupport_introspection_c__InoutStruct_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_whl_system
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, whl_system, srv, InoutStruct_Request)() {
  whl_system__srv__InoutStruct_Request__rosidl_typesupport_introspection_c__InoutStruct_Request_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, whl_system, msg, ArmInfo)();
  whl_system__srv__InoutStruct_Request__rosidl_typesupport_introspection_c__InoutStruct_Request_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, whl_system, msg, AgvInfo)();
  if (!whl_system__srv__InoutStruct_Request__rosidl_typesupport_introspection_c__InoutStruct_Request_message_type_support_handle.typesupport_identifier) {
    whl_system__srv__InoutStruct_Request__rosidl_typesupport_introspection_c__InoutStruct_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &whl_system__srv__InoutStruct_Request__rosidl_typesupport_introspection_c__InoutStruct_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "whl_system/srv/detail/inout_struct__rosidl_typesupport_introspection_c.h"
// already included above
// #include "whl_system/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "whl_system/srv/detail/inout_struct__functions.h"
// already included above
// #include "whl_system/srv/detail/inout_struct__struct.h"


// Include directives for member types
// Member `q_arm_info`
// Member `exp_arm_info`
// already included above
// #include "whl_system/msg/arm_info.h"
// Member `q_arm_info`
// Member `exp_arm_info`
// already included above
// #include "whl_system/msg/detail/arm_info__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void whl_system__srv__InoutStruct_Response__rosidl_typesupport_introspection_c__InoutStruct_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  whl_system__srv__InoutStruct_Response__init(message_memory);
}

void whl_system__srv__InoutStruct_Response__rosidl_typesupport_introspection_c__InoutStruct_Response_fini_function(void * message_memory)
{
  whl_system__srv__InoutStruct_Response__fini(message_memory);
}

size_t whl_system__srv__InoutStruct_Response__rosidl_typesupport_introspection_c__size_function__InoutStruct_Response__gripper(
  const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * whl_system__srv__InoutStruct_Response__rosidl_typesupport_introspection_c__get_const_function__InoutStruct_Response__gripper(
  const void * untyped_member, size_t index)
{
  const bool * member =
    (const bool *)(untyped_member);
  return &member[index];
}

void * whl_system__srv__InoutStruct_Response__rosidl_typesupport_introspection_c__get_function__InoutStruct_Response__gripper(
  void * untyped_member, size_t index)
{
  bool * member =
    (bool *)(untyped_member);
  return &member[index];
}

void whl_system__srv__InoutStruct_Response__rosidl_typesupport_introspection_c__fetch_function__InoutStruct_Response__gripper(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bool * item =
    ((const bool *)
    whl_system__srv__InoutStruct_Response__rosidl_typesupport_introspection_c__get_const_function__InoutStruct_Response__gripper(untyped_member, index));
  bool * value =
    (bool *)(untyped_value);
  *value = *item;
}

void whl_system__srv__InoutStruct_Response__rosidl_typesupport_introspection_c__assign_function__InoutStruct_Response__gripper(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bool * item =
    ((bool *)
    whl_system__srv__InoutStruct_Response__rosidl_typesupport_introspection_c__get_function__InoutStruct_Response__gripper(untyped_member, index));
  const bool * value =
    (const bool *)(untyped_value);
  *item = *value;
}

size_t whl_system__srv__InoutStruct_Response__rosidl_typesupport_introspection_c__size_function__InoutStruct_Response__q_agv_peed(
  const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * whl_system__srv__InoutStruct_Response__rosidl_typesupport_introspection_c__get_const_function__InoutStruct_Response__q_agv_peed(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * whl_system__srv__InoutStruct_Response__rosidl_typesupport_introspection_c__get_function__InoutStruct_Response__q_agv_peed(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void whl_system__srv__InoutStruct_Response__rosidl_typesupport_introspection_c__fetch_function__InoutStruct_Response__q_agv_peed(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    whl_system__srv__InoutStruct_Response__rosidl_typesupport_introspection_c__get_const_function__InoutStruct_Response__q_agv_peed(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void whl_system__srv__InoutStruct_Response__rosidl_typesupport_introspection_c__assign_function__InoutStruct_Response__q_agv_peed(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    whl_system__srv__InoutStruct_Response__rosidl_typesupport_introspection_c__get_function__InoutStruct_Response__q_agv_peed(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t whl_system__srv__InoutStruct_Response__rosidl_typesupport_introspection_c__size_function__InoutStruct_Response__exp_agv_peed(
  const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * whl_system__srv__InoutStruct_Response__rosidl_typesupport_introspection_c__get_const_function__InoutStruct_Response__exp_agv_peed(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * whl_system__srv__InoutStruct_Response__rosidl_typesupport_introspection_c__get_function__InoutStruct_Response__exp_agv_peed(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void whl_system__srv__InoutStruct_Response__rosidl_typesupport_introspection_c__fetch_function__InoutStruct_Response__exp_agv_peed(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    whl_system__srv__InoutStruct_Response__rosidl_typesupport_introspection_c__get_const_function__InoutStruct_Response__exp_agv_peed(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void whl_system__srv__InoutStruct_Response__rosidl_typesupport_introspection_c__assign_function__InoutStruct_Response__exp_agv_peed(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    whl_system__srv__InoutStruct_Response__rosidl_typesupport_introspection_c__get_function__InoutStruct_Response__exp_agv_peed(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t whl_system__srv__InoutStruct_Response__rosidl_typesupport_introspection_c__size_function__InoutStruct_Response__robot_pos(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * whl_system__srv__InoutStruct_Response__rosidl_typesupport_introspection_c__get_const_function__InoutStruct_Response__robot_pos(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * whl_system__srv__InoutStruct_Response__rosidl_typesupport_introspection_c__get_function__InoutStruct_Response__robot_pos(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void whl_system__srv__InoutStruct_Response__rosidl_typesupport_introspection_c__fetch_function__InoutStruct_Response__robot_pos(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    whl_system__srv__InoutStruct_Response__rosidl_typesupport_introspection_c__get_const_function__InoutStruct_Response__robot_pos(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void whl_system__srv__InoutStruct_Response__rosidl_typesupport_introspection_c__assign_function__InoutStruct_Response__robot_pos(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    whl_system__srv__InoutStruct_Response__rosidl_typesupport_introspection_c__get_function__InoutStruct_Response__robot_pos(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember whl_system__srv__InoutStruct_Response__rosidl_typesupport_introspection_c__InoutStruct_Response_message_member_array[10] = {
  {
    "motor_on",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(whl_system__srv__InoutStruct_Response, motor_on),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "running_mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(whl_system__srv__InoutStruct_Response, running_mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ctrl_cmd",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(whl_system__srv__InoutStruct_Response, ctrl_cmd),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gripper",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(whl_system__srv__InoutStruct_Response, gripper),  // bytes offset in struct
    NULL,  // default value
    whl_system__srv__InoutStruct_Response__rosidl_typesupport_introspection_c__size_function__InoutStruct_Response__gripper,  // size() function pointer
    whl_system__srv__InoutStruct_Response__rosidl_typesupport_introspection_c__get_const_function__InoutStruct_Response__gripper,  // get_const(index) function pointer
    whl_system__srv__InoutStruct_Response__rosidl_typesupport_introspection_c__get_function__InoutStruct_Response__gripper,  // get(index) function pointer
    whl_system__srv__InoutStruct_Response__rosidl_typesupport_introspection_c__fetch_function__InoutStruct_Response__gripper,  // fetch(index, &value) function pointer
    whl_system__srv__InoutStruct_Response__rosidl_typesupport_introspection_c__assign_function__InoutStruct_Response__gripper,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "q_agv_peed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(whl_system__srv__InoutStruct_Response, q_agv_peed),  // bytes offset in struct
    NULL,  // default value
    whl_system__srv__InoutStruct_Response__rosidl_typesupport_introspection_c__size_function__InoutStruct_Response__q_agv_peed,  // size() function pointer
    whl_system__srv__InoutStruct_Response__rosidl_typesupport_introspection_c__get_const_function__InoutStruct_Response__q_agv_peed,  // get_const(index) function pointer
    whl_system__srv__InoutStruct_Response__rosidl_typesupport_introspection_c__get_function__InoutStruct_Response__q_agv_peed,  // get(index) function pointer
    whl_system__srv__InoutStruct_Response__rosidl_typesupport_introspection_c__fetch_function__InoutStruct_Response__q_agv_peed,  // fetch(index, &value) function pointer
    whl_system__srv__InoutStruct_Response__rosidl_typesupport_introspection_c__assign_function__InoutStruct_Response__q_agv_peed,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "exp_agv_peed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(whl_system__srv__InoutStruct_Response, exp_agv_peed),  // bytes offset in struct
    NULL,  // default value
    whl_system__srv__InoutStruct_Response__rosidl_typesupport_introspection_c__size_function__InoutStruct_Response__exp_agv_peed,  // size() function pointer
    whl_system__srv__InoutStruct_Response__rosidl_typesupport_introspection_c__get_const_function__InoutStruct_Response__exp_agv_peed,  // get_const(index) function pointer
    whl_system__srv__InoutStruct_Response__rosidl_typesupport_introspection_c__get_function__InoutStruct_Response__exp_agv_peed,  // get(index) function pointer
    whl_system__srv__InoutStruct_Response__rosidl_typesupport_introspection_c__fetch_function__InoutStruct_Response__exp_agv_peed,  // fetch(index, &value) function pointer
    whl_system__srv__InoutStruct_Response__rosidl_typesupport_introspection_c__assign_function__InoutStruct_Response__exp_agv_peed,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "robot_pos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(whl_system__srv__InoutStruct_Response, robot_pos),  // bytes offset in struct
    NULL,  // default value
    whl_system__srv__InoutStruct_Response__rosidl_typesupport_introspection_c__size_function__InoutStruct_Response__robot_pos,  // size() function pointer
    whl_system__srv__InoutStruct_Response__rosidl_typesupport_introspection_c__get_const_function__InoutStruct_Response__robot_pos,  // get_const(index) function pointer
    whl_system__srv__InoutStruct_Response__rosidl_typesupport_introspection_c__get_function__InoutStruct_Response__robot_pos,  // get(index) function pointer
    whl_system__srv__InoutStruct_Response__rosidl_typesupport_introspection_c__fetch_function__InoutStruct_Response__robot_pos,  // fetch(index, &value) function pointer
    whl_system__srv__InoutStruct_Response__rosidl_typesupport_introspection_c__assign_function__InoutStruct_Response__robot_pos,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "q_arm_info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(whl_system__srv__InoutStruct_Response, q_arm_info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "exp_arm_info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(whl_system__srv__InoutStruct_Response, exp_arm_info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "step",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(whl_system__srv__InoutStruct_Response, step),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers whl_system__srv__InoutStruct_Response__rosidl_typesupport_introspection_c__InoutStruct_Response_message_members = {
  "whl_system__srv",  // message namespace
  "InoutStruct_Response",  // message name
  10,  // number of fields
  sizeof(whl_system__srv__InoutStruct_Response),
  whl_system__srv__InoutStruct_Response__rosidl_typesupport_introspection_c__InoutStruct_Response_message_member_array,  // message members
  whl_system__srv__InoutStruct_Response__rosidl_typesupport_introspection_c__InoutStruct_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  whl_system__srv__InoutStruct_Response__rosidl_typesupport_introspection_c__InoutStruct_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t whl_system__srv__InoutStruct_Response__rosidl_typesupport_introspection_c__InoutStruct_Response_message_type_support_handle = {
  0,
  &whl_system__srv__InoutStruct_Response__rosidl_typesupport_introspection_c__InoutStruct_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_whl_system
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, whl_system, srv, InoutStruct_Response)() {
  whl_system__srv__InoutStruct_Response__rosidl_typesupport_introspection_c__InoutStruct_Response_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, whl_system, msg, ArmInfo)();
  whl_system__srv__InoutStruct_Response__rosidl_typesupport_introspection_c__InoutStruct_Response_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, whl_system, msg, ArmInfo)();
  if (!whl_system__srv__InoutStruct_Response__rosidl_typesupport_introspection_c__InoutStruct_Response_message_type_support_handle.typesupport_identifier) {
    whl_system__srv__InoutStruct_Response__rosidl_typesupport_introspection_c__InoutStruct_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &whl_system__srv__InoutStruct_Response__rosidl_typesupport_introspection_c__InoutStruct_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "whl_system/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "whl_system/srv/detail/inout_struct__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers whl_system__srv__detail__inout_struct__rosidl_typesupport_introspection_c__InoutStruct_service_members = {
  "whl_system__srv",  // service namespace
  "InoutStruct",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // whl_system__srv__detail__inout_struct__rosidl_typesupport_introspection_c__InoutStruct_Request_message_type_support_handle,
  NULL  // response message
  // whl_system__srv__detail__inout_struct__rosidl_typesupport_introspection_c__InoutStruct_Response_message_type_support_handle
};

static rosidl_service_type_support_t whl_system__srv__detail__inout_struct__rosidl_typesupport_introspection_c__InoutStruct_service_type_support_handle = {
  0,
  &whl_system__srv__detail__inout_struct__rosidl_typesupport_introspection_c__InoutStruct_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, whl_system, srv, InoutStruct_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, whl_system, srv, InoutStruct_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_whl_system
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, whl_system, srv, InoutStruct)() {
  if (!whl_system__srv__detail__inout_struct__rosidl_typesupport_introspection_c__InoutStruct_service_type_support_handle.typesupport_identifier) {
    whl_system__srv__detail__inout_struct__rosidl_typesupport_introspection_c__InoutStruct_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)whl_system__srv__detail__inout_struct__rosidl_typesupport_introspection_c__InoutStruct_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, whl_system, srv, InoutStruct_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, whl_system, srv, InoutStruct_Response)()->data;
  }

  return &whl_system__srv__detail__inout_struct__rosidl_typesupport_introspection_c__InoutStruct_service_type_support_handle;
}
