// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from whl_system:srv/InoutStruct.idl
// generated code does not contain a copyright notice

#ifndef WHL_SYSTEM__SRV__DETAIL__INOUT_STRUCT__STRUCT_H_
#define WHL_SYSTEM__SRV__DETAIL__INOUT_STRUCT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'robot_name'
#include "rosidl_runtime_c/string.h"
// Member 'arm_info'
#include "whl_system/msg/detail/arm_info__struct.h"
// Member 'agv_info'
#include "whl_system/msg/detail/agv_info__struct.h"

/// Struct defined in srv/InoutStruct in the package whl_system.
typedef struct whl_system__srv__InoutStruct_Request
{
  rosidl_runtime_c__String robot_name;
  int32_t running_mode;
  int32_t ctrl_cmd;
  bool enable;
  whl_system__msg__ArmInfo arm_info;
  whl_system__msg__AgvInfo agv_info;
} whl_system__srv__InoutStruct_Request;

// Struct for a sequence of whl_system__srv__InoutStruct_Request.
typedef struct whl_system__srv__InoutStruct_Request__Sequence
{
  whl_system__srv__InoutStruct_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} whl_system__srv__InoutStruct_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'q_arm_info'
// Member 'exp_arm_info'
// already included above
// #include "whl_system/msg/detail/arm_info__struct.h"

/// Struct defined in srv/InoutStruct in the package whl_system.
typedef struct whl_system__srv__InoutStruct_Response
{
  int32_t motor_on;
  int32_t running_mode;
  int32_t ctrl_cmd;
  bool gripper[2];
  double q_agv_peed[2];
  double exp_agv_peed[2];
  double robot_pos[3];
  whl_system__msg__ArmInfo q_arm_info;
  whl_system__msg__ArmInfo exp_arm_info;
  int32_t step;
} whl_system__srv__InoutStruct_Response;

// Struct for a sequence of whl_system__srv__InoutStruct_Response.
typedef struct whl_system__srv__InoutStruct_Response__Sequence
{
  whl_system__srv__InoutStruct_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} whl_system__srv__InoutStruct_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WHL_SYSTEM__SRV__DETAIL__INOUT_STRUCT__STRUCT_H_
