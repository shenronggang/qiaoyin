// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from whl_system:msg/AgvInfo.idl
// generated code does not contain a copyright notice

#ifndef WHL_SYSTEM__MSG__DETAIL__AGV_INFO__STRUCT_H_
#define WHL_SYSTEM__MSG__DETAIL__AGV_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/AgvInfo in the package whl_system.
typedef struct whl_system__msg__AgvInfo
{
  double agv_move_speed[2];
  double q_agv_speed[3];
} whl_system__msg__AgvInfo;

// Struct for a sequence of whl_system__msg__AgvInfo.
typedef struct whl_system__msg__AgvInfo__Sequence
{
  whl_system__msg__AgvInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} whl_system__msg__AgvInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WHL_SYSTEM__MSG__DETAIL__AGV_INFO__STRUCT_H_
