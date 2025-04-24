// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from driver:srv/ArmSetCart.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "driver/srv/detail/arm_set_cart__rosidl_typesupport_introspection_c.h"
#include "driver/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "driver/srv/detail/arm_set_cart__functions.h"
#include "driver/srv/detail/arm_set_cart__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void driver__srv__ArmSetCart_Request__rosidl_typesupport_introspection_c__ArmSetCart_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  driver__srv__ArmSetCart_Request__init(message_memory);
}

void driver__srv__ArmSetCart_Request__rosidl_typesupport_introspection_c__ArmSetCart_Request_fini_function(void * message_memory)
{
  driver__srv__ArmSetCart_Request__fini(message_memory);
}

size_t driver__srv__ArmSetCart_Request__rosidl_typesupport_introspection_c__size_function__ArmSetCart_Request__left_arm_cart(
  const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * driver__srv__ArmSetCart_Request__rosidl_typesupport_introspection_c__get_const_function__ArmSetCart_Request__left_arm_cart(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * driver__srv__ArmSetCart_Request__rosidl_typesupport_introspection_c__get_function__ArmSetCart_Request__left_arm_cart(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void driver__srv__ArmSetCart_Request__rosidl_typesupport_introspection_c__fetch_function__ArmSetCart_Request__left_arm_cart(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    driver__srv__ArmSetCart_Request__rosidl_typesupport_introspection_c__get_const_function__ArmSetCart_Request__left_arm_cart(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void driver__srv__ArmSetCart_Request__rosidl_typesupport_introspection_c__assign_function__ArmSetCart_Request__left_arm_cart(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    driver__srv__ArmSetCart_Request__rosidl_typesupport_introspection_c__get_function__ArmSetCart_Request__left_arm_cart(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t driver__srv__ArmSetCart_Request__rosidl_typesupport_introspection_c__size_function__ArmSetCart_Request__right_arm_cart(
  const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * driver__srv__ArmSetCart_Request__rosidl_typesupport_introspection_c__get_const_function__ArmSetCart_Request__right_arm_cart(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * driver__srv__ArmSetCart_Request__rosidl_typesupport_introspection_c__get_function__ArmSetCart_Request__right_arm_cart(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void driver__srv__ArmSetCart_Request__rosidl_typesupport_introspection_c__fetch_function__ArmSetCart_Request__right_arm_cart(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    driver__srv__ArmSetCart_Request__rosidl_typesupport_introspection_c__get_const_function__ArmSetCart_Request__right_arm_cart(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void driver__srv__ArmSetCart_Request__rosidl_typesupport_introspection_c__assign_function__ArmSetCart_Request__right_arm_cart(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    driver__srv__ArmSetCart_Request__rosidl_typesupport_introspection_c__get_function__ArmSetCart_Request__right_arm_cart(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t driver__srv__ArmSetCart_Request__rosidl_typesupport_introspection_c__size_function__ArmSetCart_Request__speed(
  const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * driver__srv__ArmSetCart_Request__rosidl_typesupport_introspection_c__get_const_function__ArmSetCart_Request__speed(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * driver__srv__ArmSetCart_Request__rosidl_typesupport_introspection_c__get_function__ArmSetCart_Request__speed(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void driver__srv__ArmSetCart_Request__rosidl_typesupport_introspection_c__fetch_function__ArmSetCart_Request__speed(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    driver__srv__ArmSetCart_Request__rosidl_typesupport_introspection_c__get_const_function__ArmSetCart_Request__speed(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void driver__srv__ArmSetCart_Request__rosidl_typesupport_introspection_c__assign_function__ArmSetCart_Request__speed(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    driver__srv__ArmSetCart_Request__rosidl_typesupport_introspection_c__get_function__ArmSetCart_Request__speed(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember driver__srv__ArmSetCart_Request__rosidl_typesupport_introspection_c__ArmSetCart_Request_message_member_array[3] = {
  {
    "left_arm_cart",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(driver__srv__ArmSetCart_Request, left_arm_cart),  // bytes offset in struct
    NULL,  // default value
    driver__srv__ArmSetCart_Request__rosidl_typesupport_introspection_c__size_function__ArmSetCart_Request__left_arm_cart,  // size() function pointer
    driver__srv__ArmSetCart_Request__rosidl_typesupport_introspection_c__get_const_function__ArmSetCart_Request__left_arm_cart,  // get_const(index) function pointer
    driver__srv__ArmSetCart_Request__rosidl_typesupport_introspection_c__get_function__ArmSetCart_Request__left_arm_cart,  // get(index) function pointer
    driver__srv__ArmSetCart_Request__rosidl_typesupport_introspection_c__fetch_function__ArmSetCart_Request__left_arm_cart,  // fetch(index, &value) function pointer
    driver__srv__ArmSetCart_Request__rosidl_typesupport_introspection_c__assign_function__ArmSetCart_Request__left_arm_cart,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "right_arm_cart",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(driver__srv__ArmSetCart_Request, right_arm_cart),  // bytes offset in struct
    NULL,  // default value
    driver__srv__ArmSetCart_Request__rosidl_typesupport_introspection_c__size_function__ArmSetCart_Request__right_arm_cart,  // size() function pointer
    driver__srv__ArmSetCart_Request__rosidl_typesupport_introspection_c__get_const_function__ArmSetCart_Request__right_arm_cart,  // get_const(index) function pointer
    driver__srv__ArmSetCart_Request__rosidl_typesupport_introspection_c__get_function__ArmSetCart_Request__right_arm_cart,  // get(index) function pointer
    driver__srv__ArmSetCart_Request__rosidl_typesupport_introspection_c__fetch_function__ArmSetCart_Request__right_arm_cart,  // fetch(index, &value) function pointer
    driver__srv__ArmSetCart_Request__rosidl_typesupport_introspection_c__assign_function__ArmSetCart_Request__right_arm_cart,  // assign(index, value) function pointer
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
    offsetof(driver__srv__ArmSetCart_Request, speed),  // bytes offset in struct
    NULL,  // default value
    driver__srv__ArmSetCart_Request__rosidl_typesupport_introspection_c__size_function__ArmSetCart_Request__speed,  // size() function pointer
    driver__srv__ArmSetCart_Request__rosidl_typesupport_introspection_c__get_const_function__ArmSetCart_Request__speed,  // get_const(index) function pointer
    driver__srv__ArmSetCart_Request__rosidl_typesupport_introspection_c__get_function__ArmSetCart_Request__speed,  // get(index) function pointer
    driver__srv__ArmSetCart_Request__rosidl_typesupport_introspection_c__fetch_function__ArmSetCart_Request__speed,  // fetch(index, &value) function pointer
    driver__srv__ArmSetCart_Request__rosidl_typesupport_introspection_c__assign_function__ArmSetCart_Request__speed,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers driver__srv__ArmSetCart_Request__rosidl_typesupport_introspection_c__ArmSetCart_Request_message_members = {
  "driver__srv",  // message namespace
  "ArmSetCart_Request",  // message name
  3,  // number of fields
  sizeof(driver__srv__ArmSetCart_Request),
  driver__srv__ArmSetCart_Request__rosidl_typesupport_introspection_c__ArmSetCart_Request_message_member_array,  // message members
  driver__srv__ArmSetCart_Request__rosidl_typesupport_introspection_c__ArmSetCart_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  driver__srv__ArmSetCart_Request__rosidl_typesupport_introspection_c__ArmSetCart_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t driver__srv__ArmSetCart_Request__rosidl_typesupport_introspection_c__ArmSetCart_Request_message_type_support_handle = {
  0,
  &driver__srv__ArmSetCart_Request__rosidl_typesupport_introspection_c__ArmSetCart_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_driver
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, driver, srv, ArmSetCart_Request)() {
  if (!driver__srv__ArmSetCart_Request__rosidl_typesupport_introspection_c__ArmSetCart_Request_message_type_support_handle.typesupport_identifier) {
    driver__srv__ArmSetCart_Request__rosidl_typesupport_introspection_c__ArmSetCart_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &driver__srv__ArmSetCart_Request__rosidl_typesupport_introspection_c__ArmSetCart_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "driver/srv/detail/arm_set_cart__rosidl_typesupport_introspection_c.h"
// already included above
// #include "driver/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "driver/srv/detail/arm_set_cart__functions.h"
// already included above
// #include "driver/srv/detail/arm_set_cart__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void driver__srv__ArmSetCart_Response__rosidl_typesupport_introspection_c__ArmSetCart_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  driver__srv__ArmSetCart_Response__init(message_memory);
}

void driver__srv__ArmSetCart_Response__rosidl_typesupport_introspection_c__ArmSetCart_Response_fini_function(void * message_memory)
{
  driver__srv__ArmSetCart_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember driver__srv__ArmSetCart_Response__rosidl_typesupport_introspection_c__ArmSetCart_Response_message_member_array[1] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(driver__srv__ArmSetCart_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers driver__srv__ArmSetCart_Response__rosidl_typesupport_introspection_c__ArmSetCart_Response_message_members = {
  "driver__srv",  // message namespace
  "ArmSetCart_Response",  // message name
  1,  // number of fields
  sizeof(driver__srv__ArmSetCart_Response),
  driver__srv__ArmSetCart_Response__rosidl_typesupport_introspection_c__ArmSetCart_Response_message_member_array,  // message members
  driver__srv__ArmSetCart_Response__rosidl_typesupport_introspection_c__ArmSetCart_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  driver__srv__ArmSetCart_Response__rosidl_typesupport_introspection_c__ArmSetCart_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t driver__srv__ArmSetCart_Response__rosidl_typesupport_introspection_c__ArmSetCart_Response_message_type_support_handle = {
  0,
  &driver__srv__ArmSetCart_Response__rosidl_typesupport_introspection_c__ArmSetCart_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_driver
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, driver, srv, ArmSetCart_Response)() {
  if (!driver__srv__ArmSetCart_Response__rosidl_typesupport_introspection_c__ArmSetCart_Response_message_type_support_handle.typesupport_identifier) {
    driver__srv__ArmSetCart_Response__rosidl_typesupport_introspection_c__ArmSetCart_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &driver__srv__ArmSetCart_Response__rosidl_typesupport_introspection_c__ArmSetCart_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "driver/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "driver/srv/detail/arm_set_cart__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers driver__srv__detail__arm_set_cart__rosidl_typesupport_introspection_c__ArmSetCart_service_members = {
  "driver__srv",  // service namespace
  "ArmSetCart",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // driver__srv__detail__arm_set_cart__rosidl_typesupport_introspection_c__ArmSetCart_Request_message_type_support_handle,
  NULL  // response message
  // driver__srv__detail__arm_set_cart__rosidl_typesupport_introspection_c__ArmSetCart_Response_message_type_support_handle
};

static rosidl_service_type_support_t driver__srv__detail__arm_set_cart__rosidl_typesupport_introspection_c__ArmSetCart_service_type_support_handle = {
  0,
  &driver__srv__detail__arm_set_cart__rosidl_typesupport_introspection_c__ArmSetCart_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, driver, srv, ArmSetCart_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, driver, srv, ArmSetCart_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_driver
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, driver, srv, ArmSetCart)() {
  if (!driver__srv__detail__arm_set_cart__rosidl_typesupport_introspection_c__ArmSetCart_service_type_support_handle.typesupport_identifier) {
    driver__srv__detail__arm_set_cart__rosidl_typesupport_introspection_c__ArmSetCart_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)driver__srv__detail__arm_set_cart__rosidl_typesupport_introspection_c__ArmSetCart_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, driver, srv, ArmSetCart_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, driver, srv, ArmSetCart_Response)()->data;
  }

  return &driver__srv__detail__arm_set_cart__rosidl_typesupport_introspection_c__ArmSetCart_service_type_support_handle;
}
