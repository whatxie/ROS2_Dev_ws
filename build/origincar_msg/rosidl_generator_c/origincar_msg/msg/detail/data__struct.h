// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from origincar_msg:msg/Data.idl
// generated code does not contain a copyright notice

#ifndef ORIGINCAR_MSG__MSG__DETAIL__DATA__STRUCT_H_
#define ORIGINCAR_MSG__MSG__DETAIL__DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Data in the package origincar_msg.
typedef struct origincar_msg__msg__Data
{
  float x;
  float y;
  float z;
} origincar_msg__msg__Data;

// Struct for a sequence of origincar_msg__msg__Data.
typedef struct origincar_msg__msg__Data__Sequence
{
  origincar_msg__msg__Data * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} origincar_msg__msg__Data__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ORIGINCAR_MSG__MSG__DETAIL__DATA__STRUCT_H_
