// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from driver:srv/ArmEnable.idl
// generated code does not contain a copyright notice
#include "driver/srv/detail/arm_enable__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
driver__srv__ArmEnable_Request__init(driver__srv__ArmEnable_Request * msg)
{
  if (!msg) {
    return false;
  }
  // enable
  return true;
}

void
driver__srv__ArmEnable_Request__fini(driver__srv__ArmEnable_Request * msg)
{
  if (!msg) {
    return;
  }
  // enable
}

bool
driver__srv__ArmEnable_Request__are_equal(const driver__srv__ArmEnable_Request * lhs, const driver__srv__ArmEnable_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // enable
  if (lhs->enable != rhs->enable) {
    return false;
  }
  return true;
}

bool
driver__srv__ArmEnable_Request__copy(
  const driver__srv__ArmEnable_Request * input,
  driver__srv__ArmEnable_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // enable
  output->enable = input->enable;
  return true;
}

driver__srv__ArmEnable_Request *
driver__srv__ArmEnable_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  driver__srv__ArmEnable_Request * msg = (driver__srv__ArmEnable_Request *)allocator.allocate(sizeof(driver__srv__ArmEnable_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(driver__srv__ArmEnable_Request));
  bool success = driver__srv__ArmEnable_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
driver__srv__ArmEnable_Request__destroy(driver__srv__ArmEnable_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    driver__srv__ArmEnable_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
driver__srv__ArmEnable_Request__Sequence__init(driver__srv__ArmEnable_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  driver__srv__ArmEnable_Request * data = NULL;

  if (size) {
    data = (driver__srv__ArmEnable_Request *)allocator.zero_allocate(size, sizeof(driver__srv__ArmEnable_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = driver__srv__ArmEnable_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        driver__srv__ArmEnable_Request__fini(&data[i - 1]);
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
driver__srv__ArmEnable_Request__Sequence__fini(driver__srv__ArmEnable_Request__Sequence * array)
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
      driver__srv__ArmEnable_Request__fini(&array->data[i]);
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

driver__srv__ArmEnable_Request__Sequence *
driver__srv__ArmEnable_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  driver__srv__ArmEnable_Request__Sequence * array = (driver__srv__ArmEnable_Request__Sequence *)allocator.allocate(sizeof(driver__srv__ArmEnable_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = driver__srv__ArmEnable_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
driver__srv__ArmEnable_Request__Sequence__destroy(driver__srv__ArmEnable_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    driver__srv__ArmEnable_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
driver__srv__ArmEnable_Request__Sequence__are_equal(const driver__srv__ArmEnable_Request__Sequence * lhs, const driver__srv__ArmEnable_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!driver__srv__ArmEnable_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
driver__srv__ArmEnable_Request__Sequence__copy(
  const driver__srv__ArmEnable_Request__Sequence * input,
  driver__srv__ArmEnable_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(driver__srv__ArmEnable_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    driver__srv__ArmEnable_Request * data =
      (driver__srv__ArmEnable_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!driver__srv__ArmEnable_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          driver__srv__ArmEnable_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!driver__srv__ArmEnable_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
driver__srv__ArmEnable_Response__init(driver__srv__ArmEnable_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
driver__srv__ArmEnable_Response__fini(driver__srv__ArmEnable_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
}

bool
driver__srv__ArmEnable_Response__are_equal(const driver__srv__ArmEnable_Response * lhs, const driver__srv__ArmEnable_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
driver__srv__ArmEnable_Response__copy(
  const driver__srv__ArmEnable_Response * input,
  driver__srv__ArmEnable_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

driver__srv__ArmEnable_Response *
driver__srv__ArmEnable_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  driver__srv__ArmEnable_Response * msg = (driver__srv__ArmEnable_Response *)allocator.allocate(sizeof(driver__srv__ArmEnable_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(driver__srv__ArmEnable_Response));
  bool success = driver__srv__ArmEnable_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
driver__srv__ArmEnable_Response__destroy(driver__srv__ArmEnable_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    driver__srv__ArmEnable_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
driver__srv__ArmEnable_Response__Sequence__init(driver__srv__ArmEnable_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  driver__srv__ArmEnable_Response * data = NULL;

  if (size) {
    data = (driver__srv__ArmEnable_Response *)allocator.zero_allocate(size, sizeof(driver__srv__ArmEnable_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = driver__srv__ArmEnable_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        driver__srv__ArmEnable_Response__fini(&data[i - 1]);
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
driver__srv__ArmEnable_Response__Sequence__fini(driver__srv__ArmEnable_Response__Sequence * array)
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
      driver__srv__ArmEnable_Response__fini(&array->data[i]);
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

driver__srv__ArmEnable_Response__Sequence *
driver__srv__ArmEnable_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  driver__srv__ArmEnable_Response__Sequence * array = (driver__srv__ArmEnable_Response__Sequence *)allocator.allocate(sizeof(driver__srv__ArmEnable_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = driver__srv__ArmEnable_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
driver__srv__ArmEnable_Response__Sequence__destroy(driver__srv__ArmEnable_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    driver__srv__ArmEnable_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
driver__srv__ArmEnable_Response__Sequence__are_equal(const driver__srv__ArmEnable_Response__Sequence * lhs, const driver__srv__ArmEnable_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!driver__srv__ArmEnable_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
driver__srv__ArmEnable_Response__Sequence__copy(
  const driver__srv__ArmEnable_Response__Sequence * input,
  driver__srv__ArmEnable_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(driver__srv__ArmEnable_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    driver__srv__ArmEnable_Response * data =
      (driver__srv__ArmEnable_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!driver__srv__ArmEnable_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          driver__srv__ArmEnable_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!driver__srv__ArmEnable_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
