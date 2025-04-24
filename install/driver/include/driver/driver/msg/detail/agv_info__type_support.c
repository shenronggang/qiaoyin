// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from driver:msg/AgvInfo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "driver/msg/detail/agv_info__rosidl_typesupport_introspection_c.h"
#include "driver/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "driver/msg/detail/agv_info__functions.h"
#include "driver/msg/detail/agv_info__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void driver__msg__AgvInfo__rosidl_typesupport_introspection_c__AgvInfo_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  driver__msg__AgvInfo__init(message_memory);
}

void driver__msg__AgvInfo__rosidl_typesupport_introspection_c__AgvInfo_fini_function(void * message_memory)
{
  driver__msg__AgvInfo__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember driver__msg__AgvInfo__rosidl_typesupport_introspection_c__AgvInfo_message_member_array[3] = {
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(driver__msg__AgvInfo, x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(driver__msg__AgvInfo, y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rz",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(driver__msg__AgvInfo, rz),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers driver__msg__AgvInfo__rosidl_typesupport_introspection_c__AgvInfo_message_members = {
  "driver__msg",  // message namespace
  "AgvInfo",  // message name
  3,  // number of fields
  sizeof(driver__msg__AgvInfo),
  driver__msg__AgvInfo__rosidl_typesupport_introspection_c__AgvInfo_message_member_array,  // message members
  driver__msg__AgvInfo__rosidl_typesupport_introspection_c__AgvInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  driver__msg__AgvInfo__rosidl_typesupport_introspection_c__AgvInfo_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t driver__msg__AgvInfo__rosidl_typesupport_introspection_c__AgvInfo_message_type_support_handle = {
  0,
  &driver__msg__AgvInfo__rosidl_typesupport_introspection_c__AgvInfo_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_driver
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, driver, msg, AgvInfo)() {
  if (!driver__msg__AgvInfo__rosidl_typesupport_introspection_c__AgvInfo_message_type_support_handle.typesupport_identifier) {
    driver__msg__AgvInfo__rosidl_typesupport_introspection_c__AgvInfo_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &driver__msg__AgvInfo__rosidl_typesupport_introspection_c__AgvInfo_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
