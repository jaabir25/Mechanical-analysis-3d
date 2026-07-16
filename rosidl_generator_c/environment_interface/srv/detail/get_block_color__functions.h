// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from environment_interface:srv/GetBlockColor.idl
// generated code does not contain a copyright notice

#ifndef ENVIRONMENT_INTERFACE__SRV__DETAIL__GET_BLOCK_COLOR__FUNCTIONS_H_
#define ENVIRONMENT_INTERFACE__SRV__DETAIL__GET_BLOCK_COLOR__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "environment_interface/msg/rosidl_generator_c__visibility_control.h"

#include "environment_interface/srv/detail/get_block_color__struct.h"

/// Initialize srv/GetBlockColor message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * environment_interface__srv__GetBlockColor_Request
 * )) before or use
 * environment_interface__srv__GetBlockColor_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_environment_interface
bool
environment_interface__srv__GetBlockColor_Request__init(environment_interface__srv__GetBlockColor_Request * msg);

/// Finalize srv/GetBlockColor message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_environment_interface
void
environment_interface__srv__GetBlockColor_Request__fini(environment_interface__srv__GetBlockColor_Request * msg);

/// Create srv/GetBlockColor message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * environment_interface__srv__GetBlockColor_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_environment_interface
environment_interface__srv__GetBlockColor_Request *
environment_interface__srv__GetBlockColor_Request__create();

/// Destroy srv/GetBlockColor message.
/**
 * It calls
 * environment_interface__srv__GetBlockColor_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_environment_interface
void
environment_interface__srv__GetBlockColor_Request__destroy(environment_interface__srv__GetBlockColor_Request * msg);

/// Check for srv/GetBlockColor message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_environment_interface
bool
environment_interface__srv__GetBlockColor_Request__are_equal(const environment_interface__srv__GetBlockColor_Request * lhs, const environment_interface__srv__GetBlockColor_Request * rhs);

/// Copy a srv/GetBlockColor message.
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
ROSIDL_GENERATOR_C_PUBLIC_environment_interface
bool
environment_interface__srv__GetBlockColor_Request__copy(
  const environment_interface__srv__GetBlockColor_Request * input,
  environment_interface__srv__GetBlockColor_Request * output);

/// Initialize array of srv/GetBlockColor messages.
/**
 * It allocates the memory for the number of elements and calls
 * environment_interface__srv__GetBlockColor_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_environment_interface
bool
environment_interface__srv__GetBlockColor_Request__Sequence__init(environment_interface__srv__GetBlockColor_Request__Sequence * array, size_t size);

/// Finalize array of srv/GetBlockColor messages.
/**
 * It calls
 * environment_interface__srv__GetBlockColor_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_environment_interface
void
environment_interface__srv__GetBlockColor_Request__Sequence__fini(environment_interface__srv__GetBlockColor_Request__Sequence * array);

/// Create array of srv/GetBlockColor messages.
/**
 * It allocates the memory for the array and calls
 * environment_interface__srv__GetBlockColor_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_environment_interface
environment_interface__srv__GetBlockColor_Request__Sequence *
environment_interface__srv__GetBlockColor_Request__Sequence__create(size_t size);

/// Destroy array of srv/GetBlockColor messages.
/**
 * It calls
 * environment_interface__srv__GetBlockColor_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_environment_interface
void
environment_interface__srv__GetBlockColor_Request__Sequence__destroy(environment_interface__srv__GetBlockColor_Request__Sequence * array);

/// Check for srv/GetBlockColor message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_environment_interface
bool
environment_interface__srv__GetBlockColor_Request__Sequence__are_equal(const environment_interface__srv__GetBlockColor_Request__Sequence * lhs, const environment_interface__srv__GetBlockColor_Request__Sequence * rhs);

/// Copy an array of srv/GetBlockColor messages.
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
ROSIDL_GENERATOR_C_PUBLIC_environment_interface
bool
environment_interface__srv__GetBlockColor_Request__Sequence__copy(
  const environment_interface__srv__GetBlockColor_Request__Sequence * input,
  environment_interface__srv__GetBlockColor_Request__Sequence * output);

/// Initialize srv/GetBlockColor message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * environment_interface__srv__GetBlockColor_Response
 * )) before or use
 * environment_interface__srv__GetBlockColor_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_environment_interface
bool
environment_interface__srv__GetBlockColor_Response__init(environment_interface__srv__GetBlockColor_Response * msg);

/// Finalize srv/GetBlockColor message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_environment_interface
void
environment_interface__srv__GetBlockColor_Response__fini(environment_interface__srv__GetBlockColor_Response * msg);

/// Create srv/GetBlockColor message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * environment_interface__srv__GetBlockColor_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_environment_interface
environment_interface__srv__GetBlockColor_Response *
environment_interface__srv__GetBlockColor_Response__create();

/// Destroy srv/GetBlockColor message.
/**
 * It calls
 * environment_interface__srv__GetBlockColor_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_environment_interface
void
environment_interface__srv__GetBlockColor_Response__destroy(environment_interface__srv__GetBlockColor_Response * msg);

/// Check for srv/GetBlockColor message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_environment_interface
bool
environment_interface__srv__GetBlockColor_Response__are_equal(const environment_interface__srv__GetBlockColor_Response * lhs, const environment_interface__srv__GetBlockColor_Response * rhs);

/// Copy a srv/GetBlockColor message.
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
ROSIDL_GENERATOR_C_PUBLIC_environment_interface
bool
environment_interface__srv__GetBlockColor_Response__copy(
  const environment_interface__srv__GetBlockColor_Response * input,
  environment_interface__srv__GetBlockColor_Response * output);

/// Initialize array of srv/GetBlockColor messages.
/**
 * It allocates the memory for the number of elements and calls
 * environment_interface__srv__GetBlockColor_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_environment_interface
bool
environment_interface__srv__GetBlockColor_Response__Sequence__init(environment_interface__srv__GetBlockColor_Response__Sequence * array, size_t size);

/// Finalize array of srv/GetBlockColor messages.
/**
 * It calls
 * environment_interface__srv__GetBlockColor_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_environment_interface
void
environment_interface__srv__GetBlockColor_Response__Sequence__fini(environment_interface__srv__GetBlockColor_Response__Sequence * array);

/// Create array of srv/GetBlockColor messages.
/**
 * It allocates the memory for the array and calls
 * environment_interface__srv__GetBlockColor_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_environment_interface
environment_interface__srv__GetBlockColor_Response__Sequence *
environment_interface__srv__GetBlockColor_Response__Sequence__create(size_t size);

/// Destroy array of srv/GetBlockColor messages.
/**
 * It calls
 * environment_interface__srv__GetBlockColor_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_environment_interface
void
environment_interface__srv__GetBlockColor_Response__Sequence__destroy(environment_interface__srv__GetBlockColor_Response__Sequence * array);

/// Check for srv/GetBlockColor message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_environment_interface
bool
environment_interface__srv__GetBlockColor_Response__Sequence__are_equal(const environment_interface__srv__GetBlockColor_Response__Sequence * lhs, const environment_interface__srv__GetBlockColor_Response__Sequence * rhs);

/// Copy an array of srv/GetBlockColor messages.
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
ROSIDL_GENERATOR_C_PUBLIC_environment_interface
bool
environment_interface__srv__GetBlockColor_Response__Sequence__copy(
  const environment_interface__srv__GetBlockColor_Response__Sequence * input,
  environment_interface__srv__GetBlockColor_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ENVIRONMENT_INTERFACE__SRV__DETAIL__GET_BLOCK_COLOR__FUNCTIONS_H_
