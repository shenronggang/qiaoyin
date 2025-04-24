// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from whl_system:msg/ArmInfo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "whl_system/msg/detail/arm_info__rosidl_typesupport_introspection_c.h"
#include "whl_system/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "whl_system/msg/detail/arm_info__functions.h"
#include "whl_system/msg/detail/arm_info__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void whl_system__msg__ArmInfo__rosidl_typesupport_introspection_c__ArmInfo_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  whl_system__msg__ArmInfo__init(message_memory);
}

void whl_system__msg__ArmInfo__rosidl_typesupport_introspection_c__ArmInfo_fini_function(void * message_memory)
{
  whl_system__msg__ArmInfo__fini(message_memory);
}

size_t whl_system__msg__ArmInfo__rosidl_typesupport_introspection_c__size_function__ArmInfo__joints(
  const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * whl_system__msg__ArmInfo__rosidl_typesupport_introspection_c__get_const_function__ArmInfo__joints(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * whl_system__msg__ArmInfo__rosidl_typesupport_introspection_c__get_function__ArmInfo__joints(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void whl_system__msg__ArmInfo__rosidl_typesupport_introspection_c__fetch_function__ArmInfo__joints(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    whl_system__msg__ArmInfo__rosidl_typesupport_introspection_c__get_const_function__ArmInfo__joints(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void whl_system__msg__ArmInfo__rosidl_typesupport_introspection_c__assign_function__ArmInfo__joints(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    whl_system__msg__ArmInfo__rosidl_typesupport_introspection_c__get_function__ArmInfo__joints(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t whl_system__msg__ArmInfo__rosidl_typesupport_introspection_c__size_function__ArmInfo__pos(
  const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * whl_system__msg__ArmInfo__rosidl_typesupport_introspection_c__get_const_function__ArmInfo__pos(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * whl_system__msg__ArmInfo__rosidl_typesupport_introspection_c__get_function__ArmInfo__pos(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void whl_system__msg__ArmInfo__rosidl_typesupport_introspection_c__fetch_function__ArmInfo__pos(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    whl_system__msg__ArmInfo__rosidl_typesupport_introspection_c__get_const_function__ArmInfo__pos(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void whl_system__msg__ArmInfo__rosidl_typesupport_introspection_c__assign_function__ArmInfo__pos(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    whl_system__msg__ArmInfo__rosidl_typesupport_introspection_c__get_function__ArmInfo__pos(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t whl_system__msg__ArmInfo__rosidl_typesupport_introspection_c__size_function__ArmInfo__gripper(
  const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * whl_system__msg__ArmInfo__rosidl_typesupport_introspection_c__get_const_function__ArmInfo__gripper(
  const void * untyped_member, size_t index)
{
  const bool * member =
    (const bool *)(untyped_member);
  return &member[index];
}

void * whl_system__msg__ArmInfo__rosidl_typesupport_introspection_c__get_function__ArmInfo__gripper(
  void * untyped_member, size_t index)
{
  bool * member =
    (bool *)(untyped_member);
  return &member[index];
}

void whl_system__msg__ArmInfo__rosidl_typesupport_introspection_c__fetch_function__ArmInfo__gripper(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bool * item =
    ((const bool *)
    whl_system__msg__ArmInfo__rosidl_typesupport_introspection_c__get_const_function__ArmInfo__gripper(untyped_member, index));
  bool * value =
    (bool *)(untyped_value);
  *value = *item;
}

void whl_system__msg__ArmInfo__rosidl_typesupport_introspection_c__assign_function__ArmInfo__gripper(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bool * item =
    ((bool *)
    whl_system__msg__ArmInfo__rosidl_typesupport_introspection_c__get_function__ArmInfo__gripper(untyped_member, index));
  const bool * value =
    (const bool *)(untyped_value);
  *item = *value;
}

size_t whl_system__msg__ArmInfo__rosidl_typesupport_introspection_c__size_function__ArmInfo__arm_speed(
  const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * whl_system__msg__ArmInfo__rosidl_typesupport_introspection_c__get_const_function__ArmInfo__arm_speed(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * whl_system__msg__ArmInfo__rosidl_typesupport_introspection_c__get_function__ArmInfo__arm_speed(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void whl_system__msg__ArmInfo__rosidl_typesupport_introspection_c__fetch_function__ArmInfo__arm_speed(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    whl_system__msg__ArmInfo__rosidl_typesupport_introspection_c__get_const_function__ArmInfo__arm_speed(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void whl_system__msg__ArmInfo__rosidl_typesupport_introspection_c__assign_function__ArmInfo__arm_speed(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    whl_system__msg__ArmInfo__rosidl_typesupport_introspection_c__get_function__ArmInfo__arm_speed(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember whl_system__msg__ArmInfo__rosidl_typesupport_introspection_c__ArmInfo_message_member_array[4] = {
  {
    "joints",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(whl_system__msg__ArmInfo, joints),  // bytes offset in struct
    NULL,  // default value
    whl_system__msg__ArmInfo__rosidl_typesupport_introspection_c__size_function__ArmInfo__joints,  // size() function pointer
    whl_system__msg__ArmInfo__rosidl_typesupport_introspection_c__get_const_function__ArmInfo__joints,  // get_const(index) function pointer
    whl_system__msg__ArmInfo__rosidl_typesupport_introspection_c__get_function__ArmInfo__joints,  // get(index) function pointer
    whl_system__msg__ArmInfo__rosidl_typesupport_introspection_c__fetch_function__ArmInfo__joints,  // fetch(index, &value) function pointer
    whl_system__msg__ArmInfo__rosidl_typesupport_introspection_c__assign_function__ArmInfo__joints,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(whl_system__msg__ArmInfo, pos),  // bytes offset in struct
    NULL,  // default value
    whl_system__msg__ArmInfo__rosidl_typesupport_introspection_c__size_function__ArmInfo__pos,  // size() function pointer
    whl_system__msg__ArmInfo__rosidl_typesupport_introspection_c__get_const_function__ArmInfo__pos,  // get_const(index) function pointer
    whl_system__msg__ArmInfo__rosidl_typesupport_introspection_c__get_function__ArmInfo__pos,  // get(index) function pointer
    whl_system__msg__ArmInfo__rosidl_typesupport_introspection_c__fetch_function__ArmInfo__pos,  // fetch(index, &value) function pointer
    whl_system__msg__ArmInfo__rosidl_typesupport_introspection_c__assign_function__ArmInfo__pos,  // assign(index, value) function pointer
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
    offsetof(whl_system__msg__ArmInfo, gripper),  // bytes offset in struct
    NULL,  // default value
    whl_system__msg__ArmInfo__rosidl_typesupport_introspection_c__size_function__ArmInfo__gripper,  // size() function pointer
    whl_system__msg__ArmInfo__rosidl_typesupport_introspection_c__get_const_function__ArmInfo__gripper,  // get_const(index) function pointer
    whl_system__msg__ArmInfo__rosidl_typesupport_introspection_c__get_function__ArmInfo__gripper,  // get(index) function pointer
    whl_system__msg__ArmInfo__rosidl_typesupport_introspection_c__fetch_function__ArmInfo__gripper,  // fetch(index, &value) function pointer
    whl_system__msg__ArmInfo__rosidl_typesupport_introspection_c__assign_function__ArmInfo__gripper,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "arm_speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(whl_system__msg__ArmInfo, arm_speed),  // bytes offset in struct
    NULL,  // default value
    whl_system__msg__ArmInfo__rosidl_typesupport_introspection_c__size_function__ArmInfo__arm_speed,  // size() function pointer
    whl_system__msg__ArmInfo__rosidl_typesupport_introspection_c__get_const_function__ArmInfo__arm_speed,  // get_const(index) function pointer
    whl_system__msg__ArmInfo__rosidl_typesupport_introspection_c__get_function__ArmInfo__arm_speed,  // get(index) function pointer
    whl_system__msg__ArmInfo__rosidl_typesupport_introspection_c__fetch_function__ArmInfo__arm_speed,  // fetch(index, &value) function pointer
    whl_system__msg__ArmInfo__rosidl_typesupport_introspection_c__assign_function__ArmInfo__arm_speed,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers whl_system__msg__ArmInfo__rosidl_typesupport_introspection_c__ArmInfo_message_members = {
  "whl_system__msg",  // message namespace
  "ArmInfo",  // message name
  4,  // number of fields
  sizeof(whl_system__msg__ArmInfo),
  whl_system__msg__ArmInfo__rosidl_typesupport_introspection_c__ArmInfo_message_member_array,  // message members
  whl_system__msg__ArmInfo__rosidl_typesupport_introspection_c__ArmInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  whl_system__msg__ArmInfo__rosidl_typesupport_introspection_c__ArmInfo_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t whl_system__msg__ArmInfo__rosidl_typesupport_introspection_c__ArmInfo_message_type_support_handle = {
  0,
  &whl_system__msg__ArmInfo__rosidl_typesupport_introspection_c__ArmInfo_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_whl_system
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, whl_system, msg, ArmInfo)() {
  if (!whl_system__msg__ArmInfo__rosidl_typesupport_introspection_c__ArmInfo_message_type_support_handle.typesupport_identifier) {
    whl_system__msg__ArmInfo__rosidl_typesupport_introspection_c__ArmInfo_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &whl_system__msg__ArmInfo__rosidl_typesupport_introspection_c__ArmInfo_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
