// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from origincar_base:msg/Position.idl
// generated code does not contain a copyright notice

#ifndef ORIGINCAR_BASE__MSG__DETAIL__POSITION__STRUCT_H_
#define ORIGINCAR_BASE__MSG__DETAIL__POSITION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Position in the package origincar_base.
typedef struct origincar_base__msg__Position
{
  float angle_x;
  float angle_y;
  float distance;
} origincar_base__msg__Position;

// Struct for a sequence of origincar_base__msg__Position.
typedef struct origincar_base__msg__Position__Sequence
{
  origincar_base__msg__Position * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} origincar_base__msg__Position__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ORIGINCAR_BASE__MSG__DETAIL__POSITION__STRUCT_H_
