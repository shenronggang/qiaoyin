// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from driver:msg/GripperInfo.idl
// generated code does not contain a copyright notice
#include "driver/msg/detail/gripper_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
driver__msg__GripperInfo__init(driver__msg__GripperInfo * msg)
{
  if (!msg) {
    return false;
  }
  // left_gripper
  // right_gripper
  return true;
}

void
driver__msg__GripperInfo__fini(driver__msg__GripperInfo * msg)
{
  if (!msg) {
    return;
  }
  // left_gripper
  // right_gripper
}

bool
driver__msg__GripperInfo__are_equal(const driver__msg__GripperInfo * lhs, const driver__msg__GripperInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // left_gripper
  if (lhs->left_gripper != rhs->left_gripper) {
    return false;
  }
  // right_gripper
  if (lhs->right_gripper != rhs->right_gripper) {
    return false;
  }
  return true;
}

bool
driver__msg__GripperInfo__copy(
  const driver__msg__GripperInfo * input,
  driver__msg__GripperInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // left_gripper
  output->left_gripper = input->left_gripper;
  // right_gripper
  output->right_gripper = input->right_gripper;
  return true;
}

driver__msg__GripperInfo *
driver__msg__GripperInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  driver__msg__GripperInfo * msg = (driver__msg__GripperInfo *)allocator.allocate(sizeof(driver__msg__GripperInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(driver__msg__GripperInfo));
  bool success = driver__msg__GripperInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
driver__msg__GripperInfo__destroy(driver__msg__GripperInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    driver__msg__GripperInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
driver__msg__GripperInfo__Sequence__init(driver__msg__GripperInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  driver__msg__GripperInfo * data = NULL;

  if (size) {
    data = (driver__msg__GripperInfo *)allocator.zero_allocate(size, sizeof(driver__msg__GripperInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = driver__msg__GripperInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        driver__msg__GripperInfo__fini(&data[i - 1]);
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
driver__msg__GripperInfo__Sequence__fini(driver__msg__GripperInfo__Sequence * array)
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
      driver__msg__GripperInfo__fini(&array->data[i]);
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

driver__msg__GripperInfo__Sequence *
driver__msg__GripperInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  driver__msg__GripperInfo__Sequence * array = (driver__msg__GripperInfo__Sequence *)allocator.allocate(sizeof(driver__msg__GripperInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = driver__msg__GripperInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
driver__msg__GripperInfo__Sequence__destroy(driver__msg__GripperInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    driver__msg__GripperInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
driver__msg__GripperInfo__Sequence__are_equal(const driver__msg__GripperInfo__Sequence * lhs, const driver__msg__GripperInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!driver__msg__GripperInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
driver__msg__GripperInfo__Sequence__copy(
  const driver__msg__GripperInfo__Sequence * input,
  driver__msg__GripperInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(driver__msg__GripperInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    driver__msg__GripperInfo * data =
      (driver__msg__GripperInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!driver__msg__GripperInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          driver__msg__GripperInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!driver__msg__GripperInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
