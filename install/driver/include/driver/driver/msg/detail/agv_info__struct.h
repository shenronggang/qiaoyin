// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from driver:msg/AgvInfo.idl
// generated code does not contain a copyright notice

#ifndef DRIVER__MSG__DETAIL__AGV_INFO__STRUCT_H_
#define DRIVER__MSG__DETAIL__AGV_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/AgvInfo in the package driver.
typedef struct driver__msg__AgvInfo
{
  double x;
  double y;
  double rz;
} driver__msg__AgvInfo;

// Struct for a sequence of driver__msg__AgvInfo.
typedef struct driver__msg__AgvInfo__Sequence
{
  driver__msg__AgvInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} driver__msg__AgvInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DRIVER__MSG__DETAIL__AGV_INFO__STRUCT_H_
