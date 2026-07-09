// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from origincar_msg:msg/Sign.idl
// generated code does not contain a copyright notice

#ifndef ORIGINCAR_MSG__MSG__DETAIL__SIGN__STRUCT_H_
#define ORIGINCAR_MSG__MSG__DETAIL__SIGN__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Sign in the package origincar_msg.
typedef struct origincar_msg__msg__Sign
{
  int32_t sign_data;
} origincar_msg__msg__Sign;

// Struct for a sequence of origincar_msg__msg__Sign.
typedef struct origincar_msg__msg__Sign__Sequence
{
  origincar_msg__msg__Sign * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} origincar_msg__msg__Sign__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ORIGINCAR_MSG__MSG__DETAIL__SIGN__STRUCT_H_
