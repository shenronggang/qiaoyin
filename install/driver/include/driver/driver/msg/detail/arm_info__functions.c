// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from driver:msg/ArmInfo.idl
// generated code does not contain a copyright notice
#include "driver/msg/detail/arm_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
driver__msg__ArmInfo__init(driver__msg__ArmInfo * msg)
{
  if (!msg) {
    return false;
  }
  // left_arm_joints
  // right_arm_joints
  // left_arm_cart
  // right_arm_cart
  // speed
  // motor_on
  return true;
}

void
driver__msg__ArmInfo__fini(driver__msg__ArmInfo * msg)
{
  if (!msg) {
    return;
  }
  // left_arm_joints
  // right_arm_joints
  // left_arm_cart
  // right_arm_cart
  // speed
  // motor_on
}

bool
driver__msg__ArmInfo__are_equal(const driver__msg__ArmInfo * lhs, const driver__msg__ArmInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // left_arm_joints
  for (size_t i = 0; i < 7; ++i) {
    if (lhs->left_arm_joints[i] != rhs->left_arm_joints[i]) {
      return false;
    }
  }
  // right_arm_joints
  for (size_t i = 0; i < 7; ++i) {
    if (lhs->right_arm_joints[i] != rhs->right_arm_joints[i]) {
      return false;
    }
  }
  // left_arm_cart
  for (size_t i = 0; i < 6; ++i) {
    if (lhs->left_arm_cart[i] != rhs->left_arm_cart[i]) {
      return false;
    }
  }
  // right_arm_cart
  for (size_t i = 0; i < 6; ++i) {
    if (lhs->right_arm_cart[i] != rhs->right_arm_cart[i]) {
      return false;
    }
  }
  // speed
  for (size_t i = 0; i < 2; ++i) {
    if (lhs->speed[i] != rhs->speed[i]) {
      return false;
    }
  }
  // motor_on
  if (lhs->motor_on != rhs->motor_on) {
    return false;
  }
  return true;
}

bool
driver__msg__ArmInfo__copy(
  const driver__msg__ArmInfo * input,
  driver__msg__ArmInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // left_arm_joints
  for (size_t i = 0; i < 7; ++i) {
    output->left_arm_joints[i] = input->left_arm_joints[i];
  }
  // right_arm_joints
  for (size_t i = 0; i < 7; ++i) {
    output->right_arm_joints[i] = input->right_arm_joints[i];
  }
  // left_arm_cart
  for (size_t i = 0; i < 6; ++i) {
    output->left_arm_cart[i] = input->left_arm_cart[i];
  }
  // right_arm_cart
  for (size_t i = 0; i < 6; ++i) {
    output->right_arm_cart[i] = input->right_arm_cart[i];
  }
  // speed
  for (size_t i = 0; i < 2; ++i) {
    output->speed[i] = input->speed[i];
  }
  // motor_on
  output->motor_on = input->motor_on;
  return true;
}

driver__msg__ArmInfo *
driver__msg__ArmInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  driver__msg__ArmInfo * msg = (driver__msg__ArmInfo *)allocator.allocate(sizeof(driver__msg__ArmInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(driver__msg__ArmInfo));
  bool success = driver__msg__ArmInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
driver__msg__ArmInfo__destroy(driver__msg__ArmInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    driver__msg__ArmInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
driver__msg__ArmInfo__Sequence__init(driver__msg__ArmInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  driver__msg__ArmInfo * data = NULL;

  if (size) {
    data = (driver__msg__ArmInfo *)allocator.zero_allocate(size, sizeof(driver__msg__ArmInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = driver__msg__ArmInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        driver__msg__ArmInfo__fini(&data[i - 1]);
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
driver__msg__ArmInfo__Sequence__fini(driver__msg__ArmInfo__Sequence * array)
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
      driver__msg__ArmInfo__fini(&array->data[i]);
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

driver__msg__ArmInfo__Sequence *
driver__msg__ArmInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  driver__msg__ArmInfo__Sequence * array = (driver__msg__ArmInfo__Sequence *)allocator.allocate(sizeof(driver__msg__ArmInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = driver__msg__ArmInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
driver__msg__ArmInfo__Sequence__destroy(driver__msg__ArmInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    driver__msg__ArmInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
driver__msg__ArmInfo__Sequence__are_equal(const driver__msg__ArmInfo__Sequence * lhs, const driver__msg__ArmInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!driver__msg__ArmInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
driver__msg__ArmInfo__Sequence__copy(
  const driver__msg__ArmInfo__Sequence * input,
  driver__msg__ArmInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(driver__msg__ArmInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    driver__msg__ArmInfo * data =
      (driver__msg__ArmInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!driver__msg__ArmInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          driver__msg__ArmInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!driver__msg__ArmInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
