// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from driver:srv/ArmSetJoints.idl
// generated code does not contain a copyright notice

#ifndef DRIVER__SRV__DETAIL__ARM_SET_JOINTS__STRUCT_H_
#define DRIVER__SRV__DETAIL__ARM_SET_JOINTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/ArmSetJoints in the package driver.
typedef struct driver__srv__ArmSetJoints_Request
{
  double left_arm_joints[7];
  double right_arm_joints[7];
  double speed[2];
} driver__srv__ArmSetJoints_Request;

// Struct for a sequence of driver__srv__ArmSetJoints_Request.
typedef struct driver__srv__ArmSetJoints_Request__Sequence
{
  driver__srv__ArmSetJoints_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} driver__srv__ArmSetJoints_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/ArmSetJoints in the package driver.
typedef struct driver__srv__ArmSetJoints_Response
{
  bool success;
} driver__srv__ArmSetJoints_Response;

// Struct for a sequence of driver__srv__ArmSetJoints_Response.
typedef struct driver__srv__ArmSetJoints_Response__Sequence
{
  driver__srv__ArmSetJoints_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} driver__srv__ArmSetJoints_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DRIVER__SRV__DETAIL__ARM_SET_JOINTS__STRUCT_H_
