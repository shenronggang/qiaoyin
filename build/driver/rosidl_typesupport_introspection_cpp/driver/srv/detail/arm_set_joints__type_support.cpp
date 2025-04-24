// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from driver:srv/ArmSetJoints.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "driver/srv/detail/arm_set_joints__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace driver
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void ArmSetJoints_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) driver::srv::ArmSetJoints_Request(_init);
}

void ArmSetJoints_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<driver::srv::ArmSetJoints_Request *>(message_memory);
  typed_message->~ArmSetJoints_Request();
}

size_t size_function__ArmSetJoints_Request__left_arm_joints(const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * get_const_function__ArmSetJoints_Request__left_arm_joints(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 7> *>(untyped_member);
  return &member[index];
}

void * get_function__ArmSetJoints_Request__left_arm_joints(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 7> *>(untyped_member);
  return &member[index];
}

void fetch_function__ArmSetJoints_Request__left_arm_joints(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__ArmSetJoints_Request__left_arm_joints(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__ArmSetJoints_Request__left_arm_joints(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__ArmSetJoints_Request__left_arm_joints(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__ArmSetJoints_Request__right_arm_joints(const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * get_const_function__ArmSetJoints_Request__right_arm_joints(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 7> *>(untyped_member);
  return &member[index];
}

void * get_function__ArmSetJoints_Request__right_arm_joints(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 7> *>(untyped_member);
  return &member[index];
}

void fetch_function__ArmSetJoints_Request__right_arm_joints(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__ArmSetJoints_Request__right_arm_joints(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__ArmSetJoints_Request__right_arm_joints(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__ArmSetJoints_Request__right_arm_joints(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__ArmSetJoints_Request__speed(const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * get_const_function__ArmSetJoints_Request__speed(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 2> *>(untyped_member);
  return &member[index];
}

void * get_function__ArmSetJoints_Request__speed(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 2> *>(untyped_member);
  return &member[index];
}

void fetch_function__ArmSetJoints_Request__speed(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__ArmSetJoints_Request__speed(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__ArmSetJoints_Request__speed(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__ArmSetJoints_Request__speed(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ArmSetJoints_Request_message_member_array[3] = {
  {
    "left_arm_joints",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(driver::srv::ArmSetJoints_Request, left_arm_joints),  // bytes offset in struct
    nullptr,  // default value
    size_function__ArmSetJoints_Request__left_arm_joints,  // size() function pointer
    get_const_function__ArmSetJoints_Request__left_arm_joints,  // get_const(index) function pointer
    get_function__ArmSetJoints_Request__left_arm_joints,  // get(index) function pointer
    fetch_function__ArmSetJoints_Request__left_arm_joints,  // fetch(index, &value) function pointer
    assign_function__ArmSetJoints_Request__left_arm_joints,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "right_arm_joints",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(driver::srv::ArmSetJoints_Request, right_arm_joints),  // bytes offset in struct
    nullptr,  // default value
    size_function__ArmSetJoints_Request__right_arm_joints,  // size() function pointer
    get_const_function__ArmSetJoints_Request__right_arm_joints,  // get_const(index) function pointer
    get_function__ArmSetJoints_Request__right_arm_joints,  // get(index) function pointer
    fetch_function__ArmSetJoints_Request__right_arm_joints,  // fetch(index, &value) function pointer
    assign_function__ArmSetJoints_Request__right_arm_joints,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "speed",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(driver::srv::ArmSetJoints_Request, speed),  // bytes offset in struct
    nullptr,  // default value
    size_function__ArmSetJoints_Request__speed,  // size() function pointer
    get_const_function__ArmSetJoints_Request__speed,  // get_const(index) function pointer
    get_function__ArmSetJoints_Request__speed,  // get(index) function pointer
    fetch_function__ArmSetJoints_Request__speed,  // fetch(index, &value) function pointer
    assign_function__ArmSetJoints_Request__speed,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ArmSetJoints_Request_message_members = {
  "driver::srv",  // message namespace
  "ArmSetJoints_Request",  // message name
  3,  // number of fields
  sizeof(driver::srv::ArmSetJoints_Request),
  ArmSetJoints_Request_message_member_array,  // message members
  ArmSetJoints_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ArmSetJoints_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ArmSetJoints_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ArmSetJoints_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace driver


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<driver::srv::ArmSetJoints_Request>()
{
  return &::driver::srv::rosidl_typesupport_introspection_cpp::ArmSetJoints_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, driver, srv, ArmSetJoints_Request)() {
  return &::driver::srv::rosidl_typesupport_introspection_cpp::ArmSetJoints_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "driver/srv/detail/arm_set_joints__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace driver
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void ArmSetJoints_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) driver::srv::ArmSetJoints_Response(_init);
}

void ArmSetJoints_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<driver::srv::ArmSetJoints_Response *>(message_memory);
  typed_message->~ArmSetJoints_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ArmSetJoints_Response_message_member_array[1] = {
  {
    "success",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(driver::srv::ArmSetJoints_Response, success),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ArmSetJoints_Response_message_members = {
  "driver::srv",  // message namespace
  "ArmSetJoints_Response",  // message name
  1,  // number of fields
  sizeof(driver::srv::ArmSetJoints_Response),
  ArmSetJoints_Response_message_member_array,  // message members
  ArmSetJoints_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ArmSetJoints_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ArmSetJoints_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ArmSetJoints_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace driver


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<driver::srv::ArmSetJoints_Response>()
{
  return &::driver::srv::rosidl_typesupport_introspection_cpp::ArmSetJoints_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, driver, srv, ArmSetJoints_Response)() {
  return &::driver::srv::rosidl_typesupport_introspection_cpp::ArmSetJoints_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "driver/srv/detail/arm_set_joints__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace driver
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers ArmSetJoints_service_members = {
  "driver::srv",  // service namespace
  "ArmSetJoints",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<driver::srv::ArmSetJoints>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t ArmSetJoints_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ArmSetJoints_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace driver


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<driver::srv::ArmSetJoints>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::driver::srv::rosidl_typesupport_introspection_cpp::ArmSetJoints_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::driver::srv::ArmSetJoints_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::driver::srv::ArmSetJoints_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, driver, srv, ArmSetJoints)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<driver::srv::ArmSetJoints>();
}

#ifdef __cplusplus
}
#endif
