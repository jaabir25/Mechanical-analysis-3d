// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from environment_interface:srv/BlockRemove.idl
// generated code does not contain a copyright notice

#ifndef ENVIRONMENT_INTERFACE__SRV__DETAIL__BLOCK_REMOVE__STRUCT_H_
#define ENVIRONMENT_INTERFACE__SRV__DETAIL__BLOCK_REMOVE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'block'
#include "environment_interface/msg/detail/block__struct.h"

/// Struct defined in srv/BlockRemove in the package environment_interface.
typedef struct environment_interface__srv__BlockRemove_Request
{
  environment_interface__msg__Block block;
} environment_interface__srv__BlockRemove_Request;

// Struct for a sequence of environment_interface__srv__BlockRemove_Request.
typedef struct environment_interface__srv__BlockRemove_Request__Sequence
{
  environment_interface__srv__BlockRemove_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} environment_interface__srv__BlockRemove_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/BlockRemove in the package environment_interface.
typedef struct environment_interface__srv__BlockRemove_Response
{
  int64_t output;
} environment_interface__srv__BlockRemove_Response;

// Struct for a sequence of environment_interface__srv__BlockRemove_Response.
typedef struct environment_interface__srv__BlockRemove_Response__Sequence
{
  environment_interface__srv__BlockRemove_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} environment_interface__srv__BlockRemove_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ENVIRONMENT_INTERFACE__SRV__DETAIL__BLOCK_REMOVE__STRUCT_H_
