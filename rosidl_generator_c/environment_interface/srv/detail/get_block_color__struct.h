// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from environment_interface:srv/GetBlockColor.idl
// generated code does not contain a copyright notice

#ifndef ENVIRONMENT_INTERFACE__SRV__DETAIL__GET_BLOCK_COLOR__STRUCT_H_
#define ENVIRONMENT_INTERFACE__SRV__DETAIL__GET_BLOCK_COLOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetBlockColor in the package environment_interface.
typedef struct environment_interface__srv__GetBlockColor_Request
{
  int64_t index;
} environment_interface__srv__GetBlockColor_Request;

// Struct for a sequence of environment_interface__srv__GetBlockColor_Request.
typedef struct environment_interface__srv__GetBlockColor_Request__Sequence
{
  environment_interface__srv__GetBlockColor_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} environment_interface__srv__GetBlockColor_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'color'
#include "std_msgs/msg/detail/color_rgba__struct.h"

/// Struct defined in srv/GetBlockColor in the package environment_interface.
typedef struct environment_interface__srv__GetBlockColor_Response
{
  std_msgs__msg__ColorRGBA color;
} environment_interface__srv__GetBlockColor_Response;

// Struct for a sequence of environment_interface__srv__GetBlockColor_Response.
typedef struct environment_interface__srv__GetBlockColor_Response__Sequence
{
  environment_interface__srv__GetBlockColor_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} environment_interface__srv__GetBlockColor_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ENVIRONMENT_INTERFACE__SRV__DETAIL__GET_BLOCK_COLOR__STRUCT_H_
