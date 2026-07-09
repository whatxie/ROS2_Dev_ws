// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from origincar_msg:msg/Sign.idl
// generated code does not contain a copyright notice
#include "origincar_msg/msg/detail/sign__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
origincar_msg__msg__Sign__init(origincar_msg__msg__Sign * msg)
{
  if (!msg) {
    return false;
  }
  // sign_data
  return true;
}

void
origincar_msg__msg__Sign__fini(origincar_msg__msg__Sign * msg)
{
  if (!msg) {
    return;
  }
  // sign_data
}

bool
origincar_msg__msg__Sign__are_equal(const origincar_msg__msg__Sign * lhs, const origincar_msg__msg__Sign * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // sign_data
  if (lhs->sign_data != rhs->sign_data) {
    return false;
  }
  return true;
}

bool
origincar_msg__msg__Sign__copy(
  const origincar_msg__msg__Sign * input,
  origincar_msg__msg__Sign * output)
{
  if (!input || !output) {
    return false;
  }
  // sign_data
  output->sign_data = input->sign_data;
  return true;
}

origincar_msg__msg__Sign *
origincar_msg__msg__Sign__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  origincar_msg__msg__Sign * msg = (origincar_msg__msg__Sign *)allocator.allocate(sizeof(origincar_msg__msg__Sign), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(origincar_msg__msg__Sign));
  bool success = origincar_msg__msg__Sign__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
origincar_msg__msg__Sign__destroy(origincar_msg__msg__Sign * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    origincar_msg__msg__Sign__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
origincar_msg__msg__Sign__Sequence__init(origincar_msg__msg__Sign__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  origincar_msg__msg__Sign * data = NULL;

  if (size) {
    data = (origincar_msg__msg__Sign *)allocator.zero_allocate(size, sizeof(origincar_msg__msg__Sign), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = origincar_msg__msg__Sign__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        origincar_msg__msg__Sign__fini(&data[i - 1]);
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
origincar_msg__msg__Sign__Sequence__fini(origincar_msg__msg__Sign__Sequence * array)
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
      origincar_msg__msg__Sign__fini(&array->data[i]);
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

origincar_msg__msg__Sign__Sequence *
origincar_msg__msg__Sign__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  origincar_msg__msg__Sign__Sequence * array = (origincar_msg__msg__Sign__Sequence *)allocator.allocate(sizeof(origincar_msg__msg__Sign__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = origincar_msg__msg__Sign__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
origincar_msg__msg__Sign__Sequence__destroy(origincar_msg__msg__Sign__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    origincar_msg__msg__Sign__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
origincar_msg__msg__Sign__Sequence__are_equal(const origincar_msg__msg__Sign__Sequence * lhs, const origincar_msg__msg__Sign__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!origincar_msg__msg__Sign__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
origincar_msg__msg__Sign__Sequence__copy(
  const origincar_msg__msg__Sign__Sequence * input,
  origincar_msg__msg__Sign__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(origincar_msg__msg__Sign);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    origincar_msg__msg__Sign * data =
      (origincar_msg__msg__Sign *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!origincar_msg__msg__Sign__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          origincar_msg__msg__Sign__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!origincar_msg__msg__Sign__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
