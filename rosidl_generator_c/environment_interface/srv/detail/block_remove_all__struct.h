// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from environment_interface:srv/BlockRemoveAll.idl
// generated code does not contain a copyright notice

#ifndef ENVIRONMENT_INTERFACE__SRV__DETAIL__BLOCK_REMOVE_ALL__STRUCT_H_
#define ENVIRONMENT_INTERFACE__SRV__DETAIL__BLOCK_REMOVE_ALL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'blocks'
#include "moveit_msgs/msg/detail/collision_object__struct.h"

/// Struct defined in srv/BlockRemoveAll in the package environment_interface.
typedef struct environment_interface__srv__BlockRemoveAll_Request
{
  moveit_msgs__msg__CollisionObject__Sequence blocks;
} environment_interface__srv__BlockRemoveAll_Request;

// Struct for a sequence of environment_interface__srv__BlockRemoveAll_Request.
typedef struct environment_interface__srv__BlockRemoveAll_Request__Sequence
{
  environment_interface__srv__BlockRemoveAll_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} environment_interface__srv__BlockRemoveAll_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/BlockRemoveAll in the package environment_interface.
typedef struct environment_interface__srv__BlockRemoveAll_Response
{
  int64_t output;
} environment_interface__srv__BlockRemoveAll_Response;

// Struct for a sequence of environment_interface__srv__BlockRemoveAll_Response.
typedef struct environment_interface__srv__BlockRemoveAll_Response__Sequence
{
  environment_interface__srv__BlockRemoveAll_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} environment_interface__srv__BlockRemoveAll_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ENVIRONMENT_INTERFACE__SRV__DETAIL__BLOCK_REMOVE_ALL__STRUCT_H_
