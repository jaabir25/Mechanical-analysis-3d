// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from environment_interface:srv/GetBlockColor.idl
// generated code does not contain a copyright notice
#include "environment_interface/srv/detail/get_block_color__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
environment_interface__srv__GetBlockColor_Request__init(environment_interface__srv__GetBlockColor_Request * msg)
{
  if (!msg) {
    return false;
  }
  // index
  return true;
}

void
environment_interface__srv__GetBlockColor_Request__fini(environment_interface__srv__GetBlockColor_Request * msg)
{
  if (!msg) {
    return;
  }
  // index
}

bool
environment_interface__srv__GetBlockColor_Request__are_equal(const environment_interface__srv__GetBlockColor_Request * lhs, const environment_interface__srv__GetBlockColor_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // index
  if (lhs->index != rhs->index) {
    return false;
  }
  return true;
}

bool
environment_interface__srv__GetBlockColor_Request__copy(
  const environment_interface__srv__GetBlockColor_Request * input,
  environment_interface__srv__GetBlockColor_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // index
  output->index = input->index;
  return true;
}

environment_interface__srv__GetBlockColor_Request *
environment_interface__srv__GetBlockColor_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  environment_interface__srv__GetBlockColor_Request * msg = (environment_interface__srv__GetBlockColor_Request *)allocator.allocate(sizeof(environment_interface__srv__GetBlockColor_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(environment_interface__srv__GetBlockColor_Request));
  bool success = environment_interface__srv__GetBlockColor_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
environment_interface__srv__GetBlockColor_Request__destroy(environment_interface__srv__GetBlockColor_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    environment_interface__srv__GetBlockColor_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
environment_interface__srv__GetBlockColor_Request__Sequence__init(environment_interface__srv__GetBlockColor_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  environment_interface__srv__GetBlockColor_Request * data = NULL;

  if (size) {
    data = (environment_interface__srv__GetBlockColor_Request *)allocator.zero_allocate(size, sizeof(environment_interface__srv__GetBlockColor_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = environment_interface__srv__GetBlockColor_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        environment_interface__srv__GetBlockColor_Request__fini(&data[i - 1]);
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
environment_interface__srv__GetBlockColor_Request__Sequence__fini(environment_interface__srv__GetBlockColor_Request__Sequence * array)
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
      environment_interface__srv__GetBlockColor_Request__fini(&array->data[i]);
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

environment_interface__srv__GetBlockColor_Request__Sequence *
environment_interface__srv__GetBlockColor_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  environment_interface__srv__GetBlockColor_Request__Sequence * array = (environment_interface__srv__GetBlockColor_Request__Sequence *)allocator.allocate(sizeof(environment_interface__srv__GetBlockColor_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = environment_interface__srv__GetBlockColor_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
environment_interface__srv__GetBlockColor_Request__Sequence__destroy(environment_interface__srv__GetBlockColor_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    environment_interface__srv__GetBlockColor_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
environment_interface__srv__GetBlockColor_Request__Sequence__are_equal(const environment_interface__srv__GetBlockColor_Request__Sequence * lhs, const environment_interface__srv__GetBlockColor_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!environment_interface__srv__GetBlockColor_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
environment_interface__srv__GetBlockColor_Request__Sequence__copy(
  const environment_interface__srv__GetBlockColor_Request__Sequence * input,
  environment_interface__srv__GetBlockColor_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(environment_interface__srv__GetBlockColor_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    environment_interface__srv__GetBlockColor_Request * data =
      (environment_interface__srv__GetBlockColor_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!environment_interface__srv__GetBlockColor_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          environment_interface__srv__GetBlockColor_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!environment_interface__srv__GetBlockColor_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `color`
#include "std_msgs/msg/detail/color_rgba__functions.h"

bool
environment_interface__srv__GetBlockColor_Response__init(environment_interface__srv__GetBlockColor_Response * msg)
{
  if (!msg) {
    return false;
  }
  // color
  if (!std_msgs__msg__ColorRGBA__init(&msg->color)) {
    environment_interface__srv__GetBlockColor_Response__fini(msg);
    return false;
  }
  return true;
}

void
environment_interface__srv__GetBlockColor_Response__fini(environment_interface__srv__GetBlockColor_Response * msg)
{
  if (!msg) {
    return;
  }
  // color
  std_msgs__msg__ColorRGBA__fini(&msg->color);
}

bool
environment_interface__srv__GetBlockColor_Response__are_equal(const environment_interface__srv__GetBlockColor_Response * lhs, const environment_interface__srv__GetBlockColor_Response * rhs)
{
  if (!lhs || !rhs) {
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
environment_interface__srv__GetBlockColor_Response__copy(
  const environment_interface__srv__GetBlockColor_Response * input,
  environment_interface__srv__GetBlockColor_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // color
  if (!std_msgs__msg__ColorRGBA__copy(
      &(input->color), &(output->color)))
  {
    return false;
  }
  return true;
}

environment_interface__srv__GetBlockColor_Response *
environment_interface__srv__GetBlockColor_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  environment_interface__srv__GetBlockColor_Response * msg = (environment_interface__srv__GetBlockColor_Response *)allocator.allocate(sizeof(environment_interface__srv__GetBlockColor_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(environment_interface__srv__GetBlockColor_Response));
  bool success = environment_interface__srv__GetBlockColor_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
environment_interface__srv__GetBlockColor_Response__destroy(environment_interface__srv__GetBlockColor_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    environment_interface__srv__GetBlockColor_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
environment_interface__srv__GetBlockColor_Response__Sequence__init(environment_interface__srv__GetBlockColor_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  environment_interface__srv__GetBlockColor_Response * data = NULL;

  if (size) {
    data = (environment_interface__srv__GetBlockColor_Response *)allocator.zero_allocate(size, sizeof(environment_interface__srv__GetBlockColor_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = environment_interface__srv__GetBlockColor_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        environment_interface__srv__GetBlockColor_Response__fini(&data[i - 1]);
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
environment_interface__srv__GetBlockColor_Response__Sequence__fini(environment_interface__srv__GetBlockColor_Response__Sequence * array)
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
      environment_interface__srv__GetBlockColor_Response__fini(&array->data[i]);
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

environment_interface__srv__GetBlockColor_Response__Sequence *
environment_interface__srv__GetBlockColor_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  environment_interface__srv__GetBlockColor_Response__Sequence * array = (environment_interface__srv__GetBlockColor_Response__Sequence *)allocator.allocate(sizeof(environment_interface__srv__GetBlockColor_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = environment_interface__srv__GetBlockColor_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
environment_interface__srv__GetBlockColor_Response__Sequence__destroy(environment_interface__srv__GetBlockColor_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    environment_interface__srv__GetBlockColor_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
environment_interface__srv__GetBlockColor_Response__Sequence__are_equal(const environment_interface__srv__GetBlockColor_Response__Sequence * lhs, const environment_interface__srv__GetBlockColor_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!environment_interface__srv__GetBlockColor_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
environment_interface__srv__GetBlockColor_Response__Sequence__copy(
  const environment_interface__srv__GetBlockColor_Response__Sequence * input,
  environment_interface__srv__GetBlockColor_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(environment_interface__srv__GetBlockColor_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    environment_interface__srv__GetBlockColor_Response * data =
      (environment_interface__srv__GetBlockColor_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!environment_interface__srv__GetBlockColor_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          environment_interface__srv__GetBlockColor_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!environment_interface__srv__GetBlockColor_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
