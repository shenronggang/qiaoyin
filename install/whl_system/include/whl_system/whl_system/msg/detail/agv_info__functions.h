// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from whl_system:msg/AgvInfo.idl
// generated code does not contain a copyright notice

#ifndef WHL_SYSTEM__MSG__DETAIL__AGV_INFO__FUNCTIONS_H_
#define WHL_SYSTEM__MSG__DETAIL__AGV_INFO__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "whl_system/msg/rosidl_generator_c__visibility_control.h"

#include "whl_system/msg/detail/agv_info__struct.h"

/// Initialize msg/AgvInfo message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * whl_system__msg__AgvInfo
 * )) before or use
 * whl_system__msg__AgvInfo__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_whl_system
bool
whl_system__msg__AgvInfo__init(whl_system__msg__AgvInfo * msg);

/// Finalize msg/AgvInfo message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_whl_system
void
whl_system__msg__AgvInfo__fini(whl_system__msg__AgvInfo * msg);

/// Create msg/AgvInfo message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * whl_system__msg__AgvInfo__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_whl_system
whl_system__msg__AgvInfo *
whl_system__msg__AgvInfo__create();

/// Destroy msg/AgvInfo message.
/**
 * It calls
 * whl_system__msg__AgvInfo__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_whl_system
void
whl_system__msg__AgvInfo__destroy(whl_system__msg__AgvInfo * msg);

/// Check for msg/AgvInfo message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_whl_system
bool
whl_system__msg__AgvInfo__are_equal(const whl_system__msg__AgvInfo * lhs, const whl_system__msg__AgvInfo * rhs);

/// Copy a msg/AgvInfo message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_whl_system
bool
whl_system__msg__AgvInfo__copy(
  const whl_system__msg__AgvInfo * input,
  whl_system__msg__AgvInfo * output);

/// Initialize array of msg/AgvInfo messages.
/**
 * It allocates the memory for the number of elements and calls
 * whl_system__msg__AgvInfo__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_whl_system
bool
whl_system__msg__AgvInfo__Sequence__init(whl_system__msg__AgvInfo__Sequence * array, size_t size);

/// Finalize array of msg/AgvInfo messages.
/**
 * It calls
 * whl_system__msg__AgvInfo__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_whl_system
void
whl_system__msg__AgvInfo__Sequence__fini(whl_system__msg__AgvInfo__Sequence * array);

/// Create array of msg/AgvInfo messages.
/**
 * It allocates the memory for the array and calls
 * whl_system__msg__AgvInfo__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_whl_system
whl_system__msg__AgvInfo__Sequence *
whl_system__msg__AgvInfo__Sequence__create(size_t size);

/// Destroy array of msg/AgvInfo messages.
/**
 * It calls
 * whl_system__msg__AgvInfo__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_whl_system
void
whl_system__msg__AgvInfo__Sequence__destroy(whl_system__msg__AgvInfo__Sequence * array);

/// Check for msg/AgvInfo message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_whl_system
bool
whl_system__msg__AgvInfo__Sequence__are_equal(const whl_system__msg__AgvInfo__Sequence * lhs, const whl_system__msg__AgvInfo__Sequence * rhs);

/// Copy an array of msg/AgvInfo messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_whl_system
bool
whl_system__msg__AgvInfo__Sequence__copy(
  const whl_system__msg__AgvInfo__Sequence * input,
  whl_system__msg__AgvInfo__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // WHL_SYSTEM__MSG__DETAIL__AGV_INFO__FUNCTIONS_H_
