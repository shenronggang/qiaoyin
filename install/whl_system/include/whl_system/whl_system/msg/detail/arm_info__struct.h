// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from whl_system:msg/ArmInfo.idl
// generated code does not contain a copyright notice

#ifndef WHL_SYSTEM__MSG__DETAIL__ARM_INFO__STRUCT_H_
#define WHL_SYSTEM__MSG__DETAIL__ARM_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/ArmInfo in the package whl_system.
typedef struct whl_system__msg__ArmInfo
{
  double joints[7];
  double pos[7];
  bool gripper[2];
  double arm_speed[2];
} whl_system__msg__ArmInfo;

// Struct for a sequence of whl_system__msg__ArmInfo.
typedef struct whl_system__msg__ArmInfo__Sequence
{
  whl_system__msg__ArmInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} whl_system__msg__ArmInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WHL_SYSTEM__MSG__DETAIL__ARM_INFO__STRUCT_H_
