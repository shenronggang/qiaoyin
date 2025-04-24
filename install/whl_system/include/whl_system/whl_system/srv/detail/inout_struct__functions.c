// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from whl_system:srv/InoutStruct.idl
// generated code does not contain a copyright notice
#include "whl_system/srv/detail/inout_struct__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `robot_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `arm_info`
#include "whl_system/msg/detail/arm_info__functions.h"
// Member `agv_info`
#include "whl_system/msg/detail/agv_info__functions.h"

bool
whl_system__srv__InoutStruct_Request__init(whl_system__srv__InoutStruct_Request * msg)
{
  if (!msg) {
    return false;
  }
  // robot_name
  if (!rosidl_runtime_c__String__init(&msg->robot_name)) {
    whl_system__srv__InoutStruct_Request__fini(msg);
    return false;
  }
  // running_mode
  // ctrl_cmd
  // enable
  // arm_info
  if (!whl_system__msg__ArmInfo__init(&msg->arm_info)) {
    whl_system__srv__InoutStruct_Request__fini(msg);
    return false;
  }
  // agv_info
  if (!whl_system__msg__AgvInfo__init(&msg->agv_info)) {
    whl_system__srv__InoutStruct_Request__fini(msg);
    return false;
  }
  return true;
}

void
whl_system__srv__InoutStruct_Request__fini(whl_system__srv__InoutStruct_Request * msg)
{
  if (!msg) {
    return;
  }
  // robot_name
  rosidl_runtime_c__String__fini(&msg->robot_name);
  // running_mode
  // ctrl_cmd
  // enable
  // arm_info
  whl_system__msg__ArmInfo__fini(&msg->arm_info);
  // agv_info
  whl_system__msg__AgvInfo__fini(&msg->agv_info);
}

bool
whl_system__srv__InoutStruct_Request__are_equal(const whl_system__srv__InoutStruct_Request * lhs, const whl_system__srv__InoutStruct_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // robot_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->robot_name), &(rhs->robot_name)))
  {
    return false;
  }
  // running_mode
  if (lhs->running_mode != rhs->running_mode) {
    return false;
  }
  // ctrl_cmd
  if (lhs->ctrl_cmd != rhs->ctrl_cmd) {
    return false;
  }
  // enable
  if (lhs->enable != rhs->enable) {
    return false;
  }
  // arm_info
  if (!whl_system__msg__ArmInfo__are_equal(
      &(lhs->arm_info), &(rhs->arm_info)))
  {
    return false;
  }
  // agv_info
  if (!whl_system__msg__AgvInfo__are_equal(
      &(lhs->agv_info), &(rhs->agv_info)))
  {
    return false;
  }
  return true;
}

bool
whl_system__srv__InoutStruct_Request__copy(
  const whl_system__srv__InoutStruct_Request * input,
  whl_system__srv__InoutStruct_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // robot_name
  if (!rosidl_runtime_c__String__copy(
      &(input->robot_name), &(output->robot_name)))
  {
    return false;
  }
  // running_mode
  output->running_mode = input->running_mode;
  // ctrl_cmd
  output->ctrl_cmd = input->ctrl_cmd;
  // enable
  output->enable = input->enable;
  // arm_info
  if (!whl_system__msg__ArmInfo__copy(
      &(input->arm_info), &(output->arm_info)))
  {
    return false;
  }
  // agv_info
  if (!whl_system__msg__AgvInfo__copy(
      &(input->agv_info), &(output->agv_info)))
  {
    return false;
  }
  return true;
}

whl_system__srv__InoutStruct_Request *
whl_system__srv__InoutStruct_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  whl_system__srv__InoutStruct_Request * msg = (whl_system__srv__InoutStruct_Request *)allocator.allocate(sizeof(whl_system__srv__InoutStruct_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(whl_system__srv__InoutStruct_Request));
  bool success = whl_system__srv__InoutStruct_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
whl_system__srv__InoutStruct_Request__destroy(whl_system__srv__InoutStruct_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    whl_system__srv__InoutStruct_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
whl_system__srv__InoutStruct_Request__Sequence__init(whl_system__srv__InoutStruct_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  whl_system__srv__InoutStruct_Request * data = NULL;

  if (size) {
    data = (whl_system__srv__InoutStruct_Request *)allocator.zero_allocate(size, sizeof(whl_system__srv__InoutStruct_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = whl_system__srv__InoutStruct_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        whl_system__srv__InoutStruct_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
whl_system__srv__InoutStruct_Request__Sequence__fini(whl_system__srv__InoutStruct_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      whl_system__srv__InoutStruct_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

whl_system__srv__InoutStruct_Request__Sequence *
whl_system__srv__InoutStruct_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  whl_system__srv__InoutStruct_Request__Sequence * array = (whl_system__srv__InoutStruct_Request__Sequence *)allocator.allocate(sizeof(whl_system__srv__InoutStruct_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = whl_system__srv__InoutStruct_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
whl_system__srv__InoutStruct_Request__Sequence__destroy(whl_system__srv__InoutStruct_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    whl_system__srv__InoutStruct_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
whl_system__srv__InoutStruct_Request__Sequence__are_equal(const whl_system__srv__InoutStruct_Request__Sequence * lhs, const whl_system__srv__InoutStruct_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!whl_system__srv__InoutStruct_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
whl_system__srv__InoutStruct_Request__Sequence__copy(
  const whl_system__srv__InoutStruct_Request__Sequence * input,
  whl_system__srv__InoutStruct_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(whl_system__srv__InoutStruct_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    whl_system__srv__InoutStruct_Request * data =
      (whl_system__srv__InoutStruct_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!whl_system__srv__InoutStruct_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          whl_system__srv__InoutStruct_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!whl_system__srv__InoutStruct_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `q_arm_info`
// Member `exp_arm_info`
// already included above
// #include "whl_system/msg/detail/arm_info__functions.h"

bool
whl_system__srv__InoutStruct_Response__init(whl_system__srv__InoutStruct_Response * msg)
{
  if (!msg) {
    return false;
  }
  // motor_on
  // running_mode
  // ctrl_cmd
  // gripper
  // q_agv_peed
  // exp_agv_peed
  // robot_pos
  // q_arm_info
  if (!whl_system__msg__ArmInfo__init(&msg->q_arm_info)) {
    whl_system__srv__InoutStruct_Response__fini(msg);
    return false;
  }
  // exp_arm_info
  if (!whl_system__msg__ArmInfo__init(&msg->exp_arm_info)) {
    whl_system__srv__InoutStruct_Response__fini(msg);
    return false;
  }
  // step
  return true;
}

void
whl_system__srv__InoutStruct_Response__fini(whl_system__srv__InoutStruct_Response * msg)
{
  if (!msg) {
    return;
  }
  // motor_on
  // running_mode
  // ctrl_cmd
  // gripper
  // q_agv_peed
  // exp_agv_peed
  // robot_pos
  // q_arm_info
  whl_system__msg__ArmInfo__fini(&msg->q_arm_info);
  // exp_arm_info
  whl_system__msg__ArmInfo__fini(&msg->exp_arm_info);
  // step
}

bool
whl_system__srv__InoutStruct_Response__are_equal(const whl_system__srv__InoutStruct_Response * lhs, const whl_system__srv__InoutStruct_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // motor_on
  if (lhs->motor_on != rhs->motor_on) {
    return false;
  }
  // running_mode
  if (lhs->running_mode != rhs->running_mode) {
    return false;
  }
  // ctrl_cmd
  if (lhs->ctrl_cmd != rhs->ctrl_cmd) {
    return false;
  }
  // gripper
  for (size_t i = 0; i < 2; ++i) {
    if (lhs->gripper[i] != rhs->gripper[i]) {
      return false;
    }
  }
  // q_agv_peed
  for (size_t i = 0; i < 2; ++i) {
    if (lhs->q_agv_peed[i] != rhs->q_agv_peed[i]) {
      return false;
    }
  }
  // exp_agv_peed
  for (size_t i = 0; i < 2; ++i) {
    if (lhs->exp_agv_peed[i] != rhs->exp_agv_peed[i]) {
      return false;
    }
  }
  // robot_pos
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->robot_pos[i] != rhs->robot_pos[i]) {
      return false;
    }
  }
  // q_arm_info
  if (!whl_system__msg__ArmInfo__are_equal(
      &(lhs->q_arm_info), &(rhs->q_arm_info)))
  {
    return false;
  }
  // exp_arm_info
  if (!whl_system__msg__ArmInfo__are_equal(
      &(lhs->exp_arm_info), &(rhs->exp_arm_info)))
  {
    return false;
  }
  // step
  if (lhs->step != rhs->step) {
    return false;
  }
  return true;
}

bool
whl_system__srv__InoutStruct_Response__copy(
  const whl_system__srv__InoutStruct_Response * input,
  whl_system__srv__InoutStruct_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // motor_on
  output->motor_on = input->motor_on;
  // running_mode
  output->running_mode = input->running_mode;
  // ctrl_cmd
  output->ctrl_cmd = input->ctrl_cmd;
  // gripper
  for (size_t i = 0; i < 2; ++i) {
    output->gripper[i] = input->gripper[i];
  }
  // q_agv_peed
  for (size_t i = 0; i < 2; ++i) {
    output->q_agv_peed[i] = input->q_agv_peed[i];
  }
  // exp_agv_peed
  for (size_t i = 0; i < 2; ++i) {
    output->exp_agv_peed[i] = input->exp_agv_peed[i];
  }
  // robot_pos
  for (size_t i = 0; i < 3; ++i) {
    output->robot_pos[i] = input->robot_pos[i];
  }
  // q_arm_info
  if (!whl_system__msg__ArmInfo__copy(
      &(input->q_arm_info), &(output->q_arm_info)))
  {
    return false;
  }
  // exp_arm_info
  if (!whl_system__msg__ArmInfo__copy(
      &(input->exp_arm_info), &(output->exp_arm_info)))
  {
    return false;
  }
  // step
  output->step = input->step;
  return true;
}

whl_system__srv__InoutStruct_Response *
whl_system__srv__InoutStruct_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  whl_system__srv__InoutStruct_Response * msg = (whl_system__srv__InoutStruct_Response *)allocator.allocate(sizeof(whl_system__srv__InoutStruct_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(whl_system__srv__InoutStruct_Response));
  bool success = whl_system__srv__InoutStruct_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
whl_system__srv__InoutStruct_Response__destroy(whl_system__srv__InoutStruct_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    whl_system__srv__InoutStruct_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
whl_system__srv__InoutStruct_Response__Sequence__init(whl_system__srv__InoutStruct_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  whl_system__srv__InoutStruct_Response * data = NULL;

  if (size) {
    data = (whl_system__srv__InoutStruct_Response *)allocator.zero_allocate(size, sizeof(whl_system__srv__InoutStruct_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = whl_system__srv__InoutStruct_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        whl_system__srv__InoutStruct_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
whl_system__srv__InoutStruct_Response__Sequence__fini(whl_system__srv__InoutStruct_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      whl_system__srv__InoutStruct_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

whl_system__srv__InoutStruct_Response__Sequence *
whl_system__srv__InoutStruct_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  whl_system__srv__InoutStruct_Response__Sequence * array = (whl_system__srv__InoutStruct_Response__Sequence *)allocator.allocate(sizeof(whl_system__srv__InoutStruct_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = whl_system__srv__InoutStruct_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
whl_system__srv__InoutStruct_Response__Sequence__destroy(whl_system__srv__InoutStruct_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    whl_system__srv__InoutStruct_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
whl_system__srv__InoutStruct_Response__Sequence__are_equal(const whl_system__srv__InoutStruct_Response__Sequence * lhs, const whl_system__srv__InoutStruct_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!whl_system__srv__InoutStruct_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
whl_system__srv__InoutStruct_Response__Sequence__copy(
  const whl_system__srv__InoutStruct_Response__Sequence * input,
  whl_system__srv__InoutStruct_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(whl_system__srv__InoutStruct_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    whl_system__srv__InoutStruct_Response * data =
      (whl_system__srv__InoutStruct_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!whl_system__srv__InoutStruct_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          whl_system__srv__InoutStruct_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!whl_system__srv__InoutStruct_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
