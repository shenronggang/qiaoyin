// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from driver:msg/ArmInfo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "driver/msg/detail/arm_info__rosidl_typesupport_introspection_c.h"
#include "driver/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "driver/msg/detail/arm_info__functions.h"
#include "driver/msg/detail/arm_info__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void driver__msg__ArmInfo__rosidl_typesupport_introspection_c__ArmInfo_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  driver__msg__ArmInfo__init(message_memory);
}

void driver__msg__ArmInfo__rosidl_typesupport_introspection_c__ArmInfo_fini_function(void * message_memory)
{
  driver__msg__ArmInfo__fini(message_memory);
}

size_t driver__msg__ArmInfo__rosidl_typesupport_introspection_c__size_function__ArmInfo__left_arm_joints(
  const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * driver__msg__ArmInfo__rosidl_typesupport_introspection_c__get_const_function__ArmInfo__left_arm_joints(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * driver__msg__ArmInfo__rosidl_typesupport_introspection_c__get_function__ArmInfo__left_arm_joints(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void driver__msg__ArmInfo__rosidl_typesupport_introspection_c__fetch_function__ArmInfo__left_arm_joints(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    driver__msg__ArmInfo__rosidl_typesupport_introspection_c__get_const_function__ArmInfo__left_arm_joints(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void driver__msg__ArmInfo__rosidl_typesupport_introspection_c__assign_function__ArmInfo__left_arm_joints(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    driver__msg__ArmInfo__rosidl_typesupport_introspection_c__get_function__ArmInfo__left_arm_joints(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t driver__msg__ArmInfo__rosidl_typesupport_introspection_c__size_function__ArmInfo__right_arm_joints(
  const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * driver__msg__ArmInfo__rosidl_typesupport_introspection_c__get_const_function__ArmInfo__right_arm_joints(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * driver__msg__ArmInfo__rosidl_typesupport_introspection_c__get_function__ArmInfo__right_arm_joints(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void driver__msg__ArmInfo__rosidl_typesupport_introspection_c__fetch_function__ArmInfo__right_arm_joints(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    driver__msg__ArmInfo__rosidl_typesupport_introspection_c__get_const_function__ArmInfo__right_arm_joints(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void driver__msg__ArmInfo__rosidl_typesupport_introspection_c__assign_function__ArmInfo__right_arm_joints(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    driver__msg__ArmInfo__rosidl_typesupport_introspection_c__get_function__ArmInfo__right_arm_joints(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t driver__msg__ArmInfo__rosidl_typesupport_introspection_c__size_function__ArmInfo__left_arm_cart(
  const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * driver__msg__ArmInfo__rosidl_typesupport_introspection_c__get_const_function__ArmInfo__left_arm_cart(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * driver__msg__ArmInfo__rosidl_typesupport_introspection_c__get_function__ArmInfo__left_arm_cart(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void driver__msg__ArmInfo__rosidl_typesupport_introspection_c__fetch_function__ArmInfo__left_arm_cart(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    driver__msg__ArmInfo__rosidl_typesupport_introspection_c__get_const_function__ArmInfo__left_arm_cart(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void driver__msg__ArmInfo__rosidl_typesupport_introspection_c__assign_function__ArmInfo__left_arm_cart(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    driver__msg__ArmInfo__rosidl_typesupport_introspection_c__get_function__ArmInfo__left_arm_cart(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t driver__msg__ArmInfo__rosidl_typesupport_introspection_c__size_function__ArmInfo__right_arm_cart(
  const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * driver__msg__ArmInfo__rosidl_typesupport_introspection_c__get_const_function__ArmInfo__right_arm_cart(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * driver__msg__ArmInfo__rosidl_typesupport_introspection_c__get_function__ArmInfo__right_arm_cart(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void driver__msg__ArmInfo__rosidl_typesupport_introspection_c__fetch_function__ArmInfo__right_arm_cart(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    driver__msg__ArmInfo__rosidl_typesupport_introspection_c__get_const_function__ArmInfo__right_arm_cart(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void driver__msg__ArmInfo__rosidl_typesupport_introspection_c__assign_function__ArmInfo__right_arm_cart(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    driver__msg__ArmInfo__rosidl_typesupport_introspection_c__get_function__ArmInfo__right_arm_cart(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t driver__msg__ArmInfo__rosidl_typesupport_introspection_c__size_function__ArmInfo__speed(
  const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * driver__msg__ArmInfo__rosidl_typesupport_introspection_c__get_const_function__ArmInfo__speed(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * driver__msg__ArmInfo__rosidl_typesupport_introspection_c__get_function__ArmInfo__speed(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void driver__msg__ArmInfo__rosidl_typesupport_introspection_c__fetch_function__ArmInfo__speed(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    driver__msg__ArmInfo__rosidl_typesupport_introspection_c__get_const_function__ArmInfo__speed(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void driver__msg__ArmInfo__rosidl_typesupport_introspection_c__assign_function__ArmInfo__speed(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    driver__msg__ArmInfo__rosidl_typesupport_introspection_c__get_function__ArmInfo__speed(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember driver__msg__ArmInfo__rosidl_typesupport_introspection_c__ArmInfo_message_member_array[6] = {
  {
    "left_arm_joints",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(driver__msg__ArmInfo, left_arm_joints),  // bytes offset in struct
    NULL,  // default value
    driver__msg__ArmInfo__rosidl_typesupport_introspection_c__size_function__ArmInfo__left_arm_joints,  // size() function pointer
    driver__msg__ArmInfo__rosidl_typesupport_introspection_c__get_const_function__ArmInfo__left_arm_joints,  // get_const(index) function pointer
    driver__msg__ArmInfo__rosidl_typesupport_introspection_c__get_function__ArmInfo__left_arm_joints,  // get(index) function pointer
    driver__msg__ArmInfo__rosidl_typesupport_introspection_c__fetch_function__ArmInfo__left_arm_joints,  // fetch(index, &value) function pointer
    driver__msg__ArmInfo__rosidl_typesupport_introspection_c__assign_function__ArmInfo__left_arm_joints,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "right_arm_joints",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(driver__msg__ArmInfo, right_arm_joints),  // bytes offset in struct
    NULL,  // default value
    driver__msg__ArmInfo__rosidl_typesupport_introspection_c__size_function__ArmInfo__right_arm_joints,  // size() function pointer
    driver__msg__ArmInfo__rosidl_typesupport_introspection_c__get_const_function__ArmInfo__right_arm_joints,  // get_const(index) function pointer
    driver__msg__ArmInfo__rosidl_typesupport_introspection_c__get_function__ArmInfo__right_arm_joints,  // get(index) function pointer
    driver__msg__ArmInfo__rosidl_typesupport_introspection_c__fetch_function__ArmInfo__right_arm_joints,  // fetch(index, &value) function pointer
    driver__msg__ArmInfo__rosidl_typesupport_introspection_c__assign_function__ArmInfo__right_arm_joints,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "left_arm_cart",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(driver__msg__ArmInfo, left_arm_cart),  // bytes offset in struct
    NULL,  // default value
    driver__msg__ArmInfo__rosidl_typesupport_introspection_c__size_function__ArmInfo__left_arm_cart,  // size() function pointer
    driver__msg__ArmInfo__rosidl_typesupport_introspection_c__get_const_function__ArmInfo__left_arm_cart,  // get_const(index) function pointer
    driver__msg__ArmInfo__rosidl_typesupport_introspection_c__get_function__ArmInfo__left_arm_cart,  // get(index) function pointer
    driver__msg__ArmInfo__rosidl_typesupport_introspection_c__fetch_function__ArmInfo__left_arm_cart,  // fetch(index, &value) function pointer
    driver__msg__ArmInfo__rosidl_typesupport_introspection_c__assign_function__ArmInfo__left_arm_cart,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "right_arm_cart",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(driver__msg__ArmInfo, right_arm_cart),  // bytes offset in struct
    NULL,  // default value
    driver__msg__ArmInfo__rosidl_typesupport_introspection_c__size_function__ArmInfo__right_arm_cart,  // size() function pointer
    driver__msg__ArmInfo__rosidl_typesupport_introspection_c__get_const_function__ArmInfo__right_arm_cart,  // get_const(index) function pointer
    driver__msg__ArmInfo__rosidl_typesupport_introspection_c__get_function__ArmInfo__right_arm_cart,  // get(index) function pointer
    driver__msg__ArmInfo__rosidl_typesupport_introspection_c__fetch_function__ArmInfo__right_arm_cart,  // fetch(index, &value) function pointer
    driver__msg__ArmInfo__rosidl_typesupport_introspection_c__assign_function__ArmInfo__right_arm_cart,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(driver__msg__ArmInfo, speed),  // bytes offset in struct
    NULL,  // default value
    driver__msg__ArmInfo__rosidl_typesupport_introspection_c__size_function__ArmInfo__speed,  // size() function pointer
    driver__msg__ArmInfo__rosidl_typesupport_introspection_c__get_const_function__ArmInfo__speed,  // get_const(index) function pointer
    driver__msg__ArmInfo__rosidl_typesupport_introspection_c__get_function__ArmInfo__speed,  // get(index) function pointer
    driver__msg__ArmInfo__rosidl_typesupport_introspection_c__fetch_function__ArmInfo__speed,  // fetch(index, &value) function pointer
    driver__msg__ArmInfo__rosidl_typesupport_introspection_c__assign_function__ArmInfo__speed,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "motor_on",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(driver__msg__ArmInfo, motor_on),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers driver__msg__ArmInfo__rosidl_typesupport_introspection_c__ArmInfo_message_members = {
  "driver__msg",  // message namespace
  "ArmInfo",  // message name
  6,  // number of fields
  sizeof(driver__msg__ArmInfo),
  driver__msg__ArmInfo__rosidl_typesupport_introspection_c__ArmInfo_message_member_array,  // message members
  driver__msg__ArmInfo__rosidl_typesupport_introspection_c__ArmInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  driver__msg__ArmInfo__rosidl_typesupport_introspection_c__ArmInfo_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t driver__msg__ArmInfo__rosidl_typesupport_introspection_c__ArmInfo_message_type_support_handle = {
  0,
  &driver__msg__ArmInfo__rosidl_typesupport_introspection_c__ArmInfo_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_driver
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, driver, msg, ArmInfo)() {
  if (!driver__msg__ArmInfo__rosidl_typesupport_introspection_c__ArmInfo_message_type_support_handle.typesupport_identifier) {
    driver__msg__ArmInfo__rosidl_typesupport_introspection_c__ArmInfo_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &driver__msg__ArmInfo__rosidl_typesupport_introspection_c__ArmInfo_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
