// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from driver:msg/ArmInfo.idl
// generated code does not contain a copyright notice

#ifndef DRIVER__MSG__DETAIL__ARM_INFO__STRUCT_H_
#define DRIVER__MSG__DETAIL__ARM_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/ArmInfo in the package driver.
/**
  * 机械臂状态消息
 */
typedef struct driver__msg__ArmInfo
{
  /// 左臂关节角度（rad）
  double left_arm_joints[7];
  /// 右臂关节角度（rad）
  double right_arm_joints[7];
  /// 左臂笛卡尔坐标（xyz(mm), rpy(rad)）
  double left_arm_cart[6];
  /// 右臂笛卡尔坐标（xyz(mm), rpy(rad)）
  double right_arm_cart[6];
  /// 左右臂运动速度
  double speed[2];
  bool motor_on;
} driver__msg__ArmInfo;

// Struct for a sequence of driver__msg__ArmInfo.
typedef struct driver__msg__ArmInfo__Sequence
{
  driver__msg__ArmInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} driver__msg__ArmInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DRIVER__MSG__DETAIL__ARM_INFO__STRUCT_H_
