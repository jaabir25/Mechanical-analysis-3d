// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from environment_interface:action/TaskCreator.idl
// generated code does not contain a copyright notice

#ifndef ENVIRONMENT_INTERFACE__ACTION__DETAIL__TASK_CREATOR__STRUCT_H_
#define ENVIRONMENT_INTERFACE__ACTION__DETAIL__TASK_CREATOR__STRUCT_H_

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
// Member 'robot_name'
// Member 'solver'
// Member 'planner_id'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/TaskCreator in the package environment_interface.
typedef struct environment_interface__action__TaskCreator_Goal
{
  environment_interface__msg__Block block;
  int32_t operation_id;
  rosidl_runtime_c__String robot_name;
  rosidl_runtime_c__String solver;
  rosidl_runtime_c__String planner_id;
} environment_interface__action__TaskCreator_Goal;

// Struct for a sequence of environment_interface__action__TaskCreator_Goal.
typedef struct environment_interface__action__TaskCreator_Goal__Sequence
{
  environment_interface__action__TaskCreator_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} environment_interface__action__TaskCreator_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'task_resposnse'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/TaskCreator in the package environment_interface.
typedef struct environment_interface__action__TaskCreator_Result
{
  rosidl_runtime_c__String task_resposnse;
} environment_interface__action__TaskCreator_Result;

// Struct for a sequence of environment_interface__action__TaskCreator_Result.
typedef struct environment_interface__action__TaskCreator_Result__Sequence
{
  environment_interface__action__TaskCreator_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} environment_interface__action__TaskCreator_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'partial_output'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/TaskCreator in the package environment_interface.
typedef struct environment_interface__action__TaskCreator_Feedback
{
  rosidl_runtime_c__String partial_output;
} environment_interface__action__TaskCreator_Feedback;

// Struct for a sequence of environment_interface__action__TaskCreator_Feedback.
typedef struct environment_interface__action__TaskCreator_Feedback__Sequence
{
  environment_interface__action__TaskCreator_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} environment_interface__action__TaskCreator_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "environment_interface/action/detail/task_creator__struct.h"

/// Struct defined in action/TaskCreator in the package environment_interface.
typedef struct environment_interface__action__TaskCreator_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  environment_interface__action__TaskCreator_Goal goal;
} environment_interface__action__TaskCreator_SendGoal_Request;

// Struct for a sequence of environment_interface__action__TaskCreator_SendGoal_Request.
typedef struct environment_interface__action__TaskCreator_SendGoal_Request__Sequence
{
  environment_interface__action__TaskCreator_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} environment_interface__action__TaskCreator_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/TaskCreator in the package environment_interface.
typedef struct environment_interface__action__TaskCreator_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} environment_interface__action__TaskCreator_SendGoal_Response;

// Struct for a sequence of environment_interface__action__TaskCreator_SendGoal_Response.
typedef struct environment_interface__action__TaskCreator_SendGoal_Response__Sequence
{
  environment_interface__action__TaskCreator_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} environment_interface__action__TaskCreator_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/TaskCreator in the package environment_interface.
typedef struct environment_interface__action__TaskCreator_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} environment_interface__action__TaskCreator_GetResult_Request;

// Struct for a sequence of environment_interface__action__TaskCreator_GetResult_Request.
typedef struct environment_interface__action__TaskCreator_GetResult_Request__Sequence
{
  environment_interface__action__TaskCreator_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} environment_interface__action__TaskCreator_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "environment_interface/action/detail/task_creator__struct.h"

/// Struct defined in action/TaskCreator in the package environment_interface.
typedef struct environment_interface__action__TaskCreator_GetResult_Response
{
  int8_t status;
  environment_interface__action__TaskCreator_Result result;
} environment_interface__action__TaskCreator_GetResult_Response;

// Struct for a sequence of environment_interface__action__TaskCreator_GetResult_Response.
typedef struct environment_interface__action__TaskCreator_GetResult_Response__Sequence
{
  environment_interface__action__TaskCreator_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} environment_interface__action__TaskCreator_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "environment_interface/action/detail/task_creator__struct.h"

/// Struct defined in action/TaskCreator in the package environment_interface.
typedef struct environment_interface__action__TaskCreator_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  environment_interface__action__TaskCreator_Feedback feedback;
} environment_interface__action__TaskCreator_FeedbackMessage;

// Struct for a sequence of environment_interface__action__TaskCreator_FeedbackMessage.
typedef struct environment_interface__action__TaskCreator_FeedbackMessage__Sequence
{
  environment_interface__action__TaskCreator_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} environment_interface__action__TaskCreator_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ENVIRONMENT_INTERFACE__ACTION__DETAIL__TASK_CREATOR__STRUCT_H_
