// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from environment_interface:msg/Block.idl
// generated code does not contain a copyright notice
#include "environment_interface/msg/detail/block__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
// Member `frame_id`
#include "rosidl_runtime_c/string_functions.h"
// Member `color`
#include "std_msgs/msg/detail/color_rgba__functions.h"

bool
environment_interface__msg__Block__init(environment_interface__msg__Block * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    environment_interface__msg__Block__fini(msg);
    return false;
  }
  // frame_id
  if (!rosidl_runtime_c__String__init(&msg->frame_id)) {
    environment_interface__msg__Block__fini(msg);
    return false;
  }
  // x
  // y
  // z
  // x_size
  // y_size
  // number
  // is_support
  msg->is_support = false;
  // color
  if (!std_msgs__msg__ColorRGBA__init(&msg->color)) {
    environment_interface__msg__Block__fini(msg);
    return false;
  }
  return true;
}

void
environment_interface__msg__Block__fini(environment_interface__msg__Block * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // frame_id
  rosidl_runtime_c__String__fini(&msg->frame_id);
  // x
  // y
  // z
  // x_size
  // y_size
  // number
  // is_support
  // color
  std_msgs__msg__ColorRGBA__fini(&msg->color);
}

bool
environment_interface__msg__Block__are_equal(const environment_interface__msg__Block * lhs, const environment_interface__msg__Block * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // frame_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->frame_id), &(rhs->frame_id)))
  {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // z
  if (lhs->z != rhs->z) {
    return false;
  }
  // x_size
  if (lhs->x_size != rhs->x_size) {
    return false;
  }
  // y_size
  if (lhs->y_size != rhs->y_size) {
    return false;
  }
  // number
  if (lhs->number != rhs->number) {
    return false;
  }
  // is_support
  if (lhs->is_support != rhs->is_support) {
    return false;
  }
  // color
  if (!std_msgs__msg__ColorRGBA__are_equal(
      &(lhs->color), &(rhs->color)))
  {
    return false;
  }
  return true;
}

bool
environment_interface__msg__Block__copy(
  const environment_interface__msg__Block * input,
  environment_interface__msg__Block * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // frame_id
  if (!rosidl_runtime_c__String__copy(
      &(input->frame_id), &(output->frame_id)))
  {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // z
  output->z = input->z;
  // x_size
  output->x_size = input->x_size;
  // y_size
  output->y_size = input->y_size;
  // number
  output->number = input->number;
  // is_support
  output->is_support = input->is_support;
  // color
  if (!std_msgs__msg__ColorRGBA__copy(
      &(input->color), &(output->color)))
  {
    return false;
  }
  return true;
}

environment_interface__msg__Block *
environment_interface__msg__Block__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  environment_interface__msg__Block * msg = (environment_interface__msg__Block *)allocator.allocate(sizeof(environment_interface__msg__Block), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(environment_interface__msg__Block));
  bool success = environment_interface__msg__Block__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
environment_interface__msg__Block__destroy(environment_interface__msg__Block * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    environment_interface__msg__Block__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
environment_interface__msg__Block__Sequence__init(environment_interface__msg__Block__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  environment_interface__msg__Block * data = NULL;

  if (size) {
    data = (environment_interface__msg__Block *)allocator.zero_allocate(size, sizeof(environment_interface__msg__Block), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = environment_interface__msg__Block__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        environment_interface__msg__Block__fini(&data[i - 1]);
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
environment_interface__msg__Block__Sequence__fini(environment_interface__msg__Block__Sequence * array)
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
      environment_interface__msg__Block__fini(&array->data[i]);
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

environment_interface__msg__Block__Sequence *
environment_interface__msg__Block__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  environment_interface__msg__Block__Sequence * array = (environment_interface__msg__Block__Sequence *)allocator.allocate(sizeof(environment_interface__msg__Block__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = environment_interface__msg__Block__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
environment_interface__msg__Block__Sequence__destroy(environment_interface__msg__Block__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    environment_interface__msg__Block__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
environment_interface__msg__Block__Sequence__are_equal(const environment_interface__msg__Block__Sequence * lhs, const environment_interface__msg__Block__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!environment_interface__msg__Block__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
environment_interface__msg__Block__Sequence__copy(
  const environment_interface__msg__Block__Sequence * input,
  environment_interface__msg__Block__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(environment_interface__msg__Block);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    environment_interface__msg__Block * data =
      (environment_interface__msg__Block *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!environment_interface__msg__Block__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          environment_interface__msg__Block__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!environment_interface__msg__Block__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
