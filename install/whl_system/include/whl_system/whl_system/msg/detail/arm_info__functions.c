// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from whl_system:msg/ArmInfo.idl
// generated code does not contain a copyright notice
#include "whl_system/msg/detail/arm_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
whl_system__msg__ArmInfo__init(whl_system__msg__ArmInfo * msg)
{
  if (!msg) {
    return false;
  }
  // joints
  // pos
  // gripper
  // arm_speed
  return true;
}

void
whl_system__msg__ArmInfo__fini(whl_system__msg__ArmInfo * msg)
{
  if (!msg) {
    return;
  }
  // joints
  // pos
  // gripper
  // arm_speed
}

bool
whl_system__msg__ArmInfo__are_equal(const whl_system__msg__ArmInfo * lhs, const whl_system__msg__ArmInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // joints
  for (size_t i = 0; i < 7; ++i) {
    if (lhs->joints[i] != rhs->joints[i]) {
      return false;
    }
  }
  // pos
  for (size_t i = 0; i < 7; ++i) {
    if (lhs->pos[i] != rhs->pos[i]) {
      return false;
    }
  }
  // gripper
  for (size_t i = 0; i < 2; ++i) {
    if (lhs->gripper[i] != rhs->gripper[i]) {
      return false;
    }
  }
  // arm_speed
  for (size_t i = 0; i < 2; ++i) {
    if (lhs->arm_speed[i] != rhs->arm_speed[i]) {
      return false;
    }
  }
  return true;
}

bool
whl_system__msg__ArmInfo__copy(
  const whl_system__msg__ArmInfo * input,
  whl_system__msg__ArmInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // joints
  for (size_t i = 0; i < 7; ++i) {
    output->joints[i] = input->joints[i];
  }
  // pos
  for (size_t i = 0; i < 7; ++i) {
    output->pos[i] = input->pos[i];
  }
  // gripper
  for (size_t i = 0; i < 2; ++i) {
    output->gripper[i] = input->gripper[i];
  }
  // arm_speed
  for (size_t i = 0; i < 2; ++i) {
    output->arm_speed[i] = input->arm_speed[i];
  }
  return true;
}

whl_system__msg__ArmInfo *
whl_system__msg__ArmInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  whl_system__msg__ArmInfo * msg = (whl_system__msg__ArmInfo *)allocator.allocate(sizeof(whl_system__msg__ArmInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(whl_system__msg__ArmInfo));
  bool success = whl_system__msg__ArmInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
whl_system__msg__ArmInfo__destroy(whl_system__msg__ArmInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    whl_system__msg__ArmInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
whl_system__msg__ArmInfo__Sequence__init(whl_system__msg__ArmInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  whl_system__msg__ArmInfo * data = NULL;

  if (size) {
    data = (whl_system__msg__ArmInfo *)allocator.zero_allocate(size, sizeof(whl_system__msg__ArmInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = whl_system__msg__ArmInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        whl_system__msg__ArmInfo__fini(&data[i - 1]);
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
whl_system__msg__ArmInfo__Sequence__fini(whl_system__msg__ArmInfo__Sequence * array)
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
      whl_system__msg__ArmInfo__fini(&array->data[i]);
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

whl_system__msg__ArmInfo__Sequence *
whl_system__msg__ArmInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  whl_system__msg__ArmInfo__Sequence * array = (whl_system__msg__ArmInfo__Sequence *)allocator.allocate(sizeof(whl_system__msg__ArmInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = whl_system__msg__ArmInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
whl_system__msg__ArmInfo__Sequence__destroy(whl_system__msg__ArmInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    whl_system__msg__ArmInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
whl_system__msg__ArmInfo__Sequence__are_equal(const whl_system__msg__ArmInfo__Sequence * lhs, const whl_system__msg__ArmInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!whl_system__msg__ArmInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
whl_system__msg__ArmInfo__Sequence__copy(
  const whl_system__msg__ArmInfo__Sequence * input,
  whl_system__msg__ArmInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(whl_system__msg__ArmInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    whl_system__msg__ArmInfo * data =
      (whl_system__msg__ArmInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!whl_system__msg__ArmInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          whl_system__msg__ArmInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!whl_system__msg__ArmInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
