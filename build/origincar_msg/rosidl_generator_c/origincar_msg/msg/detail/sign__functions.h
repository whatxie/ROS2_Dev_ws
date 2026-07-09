// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from origincar_msg:msg/Sign.idl
// generated code does not contain a copyright notice

#ifndef ORIGINCAR_MSG__MSG__DETAIL__SIGN__FUNCTIONS_H_
#define ORIGINCAR_MSG__MSG__DETAIL__SIGN__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "origincar_msg/msg/rosidl_generator_c__visibility_control.h"

#include "origincar_msg/msg/detail/sign__struct.h"

/// Initialize msg/Sign message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * origincar_msg__msg__Sign
 * )) before or use
 * origincar_msg__msg__Sign__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_origincar_msg
bool
origincar_msg__msg__Sign__init(origincar_msg__msg__Sign * msg);

/// Finalize msg/Sign message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_origincar_msg
void
origincar_msg__msg__Sign__fini(origincar_msg__msg__Sign * msg);

/// Create msg/Sign message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * origincar_msg__msg__Sign__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_origincar_msg
origincar_msg__msg__Sign *
origincar_msg__msg__Sign__create();

/// Destroy msg/Sign message.
/**
 * It calls
 * origincar_msg__msg__Sign__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_origincar_msg
void
origincar_msg__msg__Sign__destroy(origincar_msg__msg__Sign * msg);

/// Check for msg/Sign message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_origincar_msg
bool
origincar_msg__msg__Sign__are_equal(const origincar_msg__msg__Sign * lhs, const origincar_msg__msg__Sign * rhs);

/// Copy a msg/Sign message.
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
ROSIDL_GENERATOR_C_PUBLIC_origincar_msg
bool
origincar_msg__msg__Sign__copy(
  const origincar_msg__msg__Sign * input,
  origincar_msg__msg__Sign * output);

/// Initialize array of msg/Sign messages.
/**
 * It allocates the memory for the number of elements and calls
 * origincar_msg__msg__Sign__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_origincar_msg
bool
origincar_msg__msg__Sign__Sequence__init(origincar_msg__msg__Sign__Sequence * array, size_t size);

/// Finalize array of msg/Sign messages.
/**
 * It calls
 * origincar_msg__msg__Sign__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_origincar_msg
void
origincar_msg__msg__Sign__Sequence__fini(origincar_msg__msg__Sign__Sequence * array);

/// Create array of msg/Sign messages.
/**
 * It allocates the memory for the array and calls
 * origincar_msg__msg__Sign__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_origincar_msg
origincar_msg__msg__Sign__Sequence *
origincar_msg__msg__Sign__Sequence__create(size_t size);

/// Destroy array of msg/Sign messages.
/**
 * It calls
 * origincar_msg__msg__Sign__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_origincar_msg
void
origincar_msg__msg__Sign__Sequence__destroy(origincar_msg__msg__Sign__Sequence * array);

/// Check for msg/Sign message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_origincar_msg
bool
origincar_msg__msg__Sign__Sequence__are_equal(const origincar_msg__msg__Sign__Sequence * lhs, const origincar_msg__msg__Sign__Sequence * rhs);

/// Copy an array of msg/Sign messages.
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
ROSIDL_GENERATOR_C_PUBLIC_origincar_msg
bool
origincar_msg__msg__Sign__Sequence__copy(
  const origincar_msg__msg__Sign__Sequence * input,
  origincar_msg__msg__Sign__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ORIGINCAR_MSG__MSG__DETAIL__SIGN__FUNCTIONS_H_
