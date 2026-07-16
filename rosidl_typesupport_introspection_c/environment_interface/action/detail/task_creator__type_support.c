// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from environment_interface:action/TaskCreator.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "environment_interface/action/detail/task_creator__rosidl_typesupport_introspection_c.h"
#include "environment_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "environment_interface/action/detail/task_creator__functions.h"
#include "environment_interface/action/detail/task_creator__struct.h"


// Include directives for member types
// Member `block`
#include "environment_interface/msg/block.h"
// Member `block`
#include "environment_interface/msg/detail/block__rosidl_typesupport_introspection_c.h"
// Member `robot_name`
// Member `solver`
// Member `planner_id`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void environment_interface__action__TaskCreator_Goal__rosidl_typesupport_introspection_c__TaskCreator_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  environment_interface__action__TaskCreator_Goal__init(message_memory);
}

void environment_interface__action__TaskCreator_Goal__rosidl_typesupport_introspection_c__TaskCreator_Goal_fini_function(void * message_memory)
{
  environment_interface__action__TaskCreator_Goal__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember environment_interface__action__TaskCreator_Goal__rosidl_typesupport_introspection_c__TaskCreator_Goal_message_member_array[5] = {
  {
    "block",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_interface__action__TaskCreator_Goal, block),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "operation_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_interface__action__TaskCreator_Goal, operation_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "robot_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_interface__action__TaskCreator_Goal, robot_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "solver",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_interface__action__TaskCreator_Goal, solver),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "planner_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_interface__action__TaskCreator_Goal, planner_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers environment_interface__action__TaskCreator_Goal__rosidl_typesupport_introspection_c__TaskCreator_Goal_message_members = {
  "environment_interface__action",  // message namespace
  "TaskCreator_Goal",  // message name
  5,  // number of fields
  sizeof(environment_interface__action__TaskCreator_Goal),
  environment_interface__action__TaskCreator_Goal__rosidl_typesupport_introspection_c__TaskCreator_Goal_message_member_array,  // message members
  environment_interface__action__TaskCreator_Goal__rosidl_typesupport_introspection_c__TaskCreator_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  environment_interface__action__TaskCreator_Goal__rosidl_typesupport_introspection_c__TaskCreator_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t environment_interface__action__TaskCreator_Goal__rosidl_typesupport_introspection_c__TaskCreator_Goal_message_type_support_handle = {
  0,
  &environment_interface__action__TaskCreator_Goal__rosidl_typesupport_introspection_c__TaskCreator_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_environment_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, environment_interface, action, TaskCreator_Goal)() {
  environment_interface__action__TaskCreator_Goal__rosidl_typesupport_introspection_c__TaskCreator_Goal_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, environment_interface, msg, Block)();
  if (!environment_interface__action__TaskCreator_Goal__rosidl_typesupport_introspection_c__TaskCreator_Goal_message_type_support_handle.typesupport_identifier) {
    environment_interface__action__TaskCreator_Goal__rosidl_typesupport_introspection_c__TaskCreator_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &environment_interface__action__TaskCreator_Goal__rosidl_typesupport_introspection_c__TaskCreator_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "environment_interface/action/detail/task_creator__rosidl_typesupport_introspection_c.h"
// already included above
// #include "environment_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "environment_interface/action/detail/task_creator__functions.h"
// already included above
// #include "environment_interface/action/detail/task_creator__struct.h"


// Include directives for member types
// Member `task_resposnse`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void environment_interface__action__TaskCreator_Result__rosidl_typesupport_introspection_c__TaskCreator_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  environment_interface__action__TaskCreator_Result__init(message_memory);
}

void environment_interface__action__TaskCreator_Result__rosidl_typesupport_introspection_c__TaskCreator_Result_fini_function(void * message_memory)
{
  environment_interface__action__TaskCreator_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember environment_interface__action__TaskCreator_Result__rosidl_typesupport_introspection_c__TaskCreator_Result_message_member_array[1] = {
  {
    "task_resposnse",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_interface__action__TaskCreator_Result, task_resposnse),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers environment_interface__action__TaskCreator_Result__rosidl_typesupport_introspection_c__TaskCreator_Result_message_members = {
  "environment_interface__action",  // message namespace
  "TaskCreator_Result",  // message name
  1,  // number of fields
  sizeof(environment_interface__action__TaskCreator_Result),
  environment_interface__action__TaskCreator_Result__rosidl_typesupport_introspection_c__TaskCreator_Result_message_member_array,  // message members
  environment_interface__action__TaskCreator_Result__rosidl_typesupport_introspection_c__TaskCreator_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  environment_interface__action__TaskCreator_Result__rosidl_typesupport_introspection_c__TaskCreator_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t environment_interface__action__TaskCreator_Result__rosidl_typesupport_introspection_c__TaskCreator_Result_message_type_support_handle = {
  0,
  &environment_interface__action__TaskCreator_Result__rosidl_typesupport_introspection_c__TaskCreator_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_environment_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, environment_interface, action, TaskCreator_Result)() {
  if (!environment_interface__action__TaskCreator_Result__rosidl_typesupport_introspection_c__TaskCreator_Result_message_type_support_handle.typesupport_identifier) {
    environment_interface__action__TaskCreator_Result__rosidl_typesupport_introspection_c__TaskCreator_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &environment_interface__action__TaskCreator_Result__rosidl_typesupport_introspection_c__TaskCreator_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "environment_interface/action/detail/task_creator__rosidl_typesupport_introspection_c.h"
// already included above
// #include "environment_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "environment_interface/action/detail/task_creator__functions.h"
// already included above
// #include "environment_interface/action/detail/task_creator__struct.h"


// Include directives for member types
// Member `partial_output`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void environment_interface__action__TaskCreator_Feedback__rosidl_typesupport_introspection_c__TaskCreator_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  environment_interface__action__TaskCreator_Feedback__init(message_memory);
}

void environment_interface__action__TaskCreator_Feedback__rosidl_typesupport_introspection_c__TaskCreator_Feedback_fini_function(void * message_memory)
{
  environment_interface__action__TaskCreator_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember environment_interface__action__TaskCreator_Feedback__rosidl_typesupport_introspection_c__TaskCreator_Feedback_message_member_array[1] = {
  {
    "partial_output",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_interface__action__TaskCreator_Feedback, partial_output),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers environment_interface__action__TaskCreator_Feedback__rosidl_typesupport_introspection_c__TaskCreator_Feedback_message_members = {
  "environment_interface__action",  // message namespace
  "TaskCreator_Feedback",  // message name
  1,  // number of fields
  sizeof(environment_interface__action__TaskCreator_Feedback),
  environment_interface__action__TaskCreator_Feedback__rosidl_typesupport_introspection_c__TaskCreator_Feedback_message_member_array,  // message members
  environment_interface__action__TaskCreator_Feedback__rosidl_typesupport_introspection_c__TaskCreator_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  environment_interface__action__TaskCreator_Feedback__rosidl_typesupport_introspection_c__TaskCreator_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t environment_interface__action__TaskCreator_Feedback__rosidl_typesupport_introspection_c__TaskCreator_Feedback_message_type_support_handle = {
  0,
  &environment_interface__action__TaskCreator_Feedback__rosidl_typesupport_introspection_c__TaskCreator_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_environment_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, environment_interface, action, TaskCreator_Feedback)() {
  if (!environment_interface__action__TaskCreator_Feedback__rosidl_typesupport_introspection_c__TaskCreator_Feedback_message_type_support_handle.typesupport_identifier) {
    environment_interface__action__TaskCreator_Feedback__rosidl_typesupport_introspection_c__TaskCreator_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &environment_interface__action__TaskCreator_Feedback__rosidl_typesupport_introspection_c__TaskCreator_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "environment_interface/action/detail/task_creator__rosidl_typesupport_introspection_c.h"
// already included above
// #include "environment_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "environment_interface/action/detail/task_creator__functions.h"
// already included above
// #include "environment_interface/action/detail/task_creator__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "environment_interface/action/task_creator.h"
// Member `goal`
// already included above
// #include "environment_interface/action/detail/task_creator__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void environment_interface__action__TaskCreator_SendGoal_Request__rosidl_typesupport_introspection_c__TaskCreator_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  environment_interface__action__TaskCreator_SendGoal_Request__init(message_memory);
}

void environment_interface__action__TaskCreator_SendGoal_Request__rosidl_typesupport_introspection_c__TaskCreator_SendGoal_Request_fini_function(void * message_memory)
{
  environment_interface__action__TaskCreator_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember environment_interface__action__TaskCreator_SendGoal_Request__rosidl_typesupport_introspection_c__TaskCreator_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_interface__action__TaskCreator_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_interface__action__TaskCreator_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers environment_interface__action__TaskCreator_SendGoal_Request__rosidl_typesupport_introspection_c__TaskCreator_SendGoal_Request_message_members = {
  "environment_interface__action",  // message namespace
  "TaskCreator_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(environment_interface__action__TaskCreator_SendGoal_Request),
  environment_interface__action__TaskCreator_SendGoal_Request__rosidl_typesupport_introspection_c__TaskCreator_SendGoal_Request_message_member_array,  // message members
  environment_interface__action__TaskCreator_SendGoal_Request__rosidl_typesupport_introspection_c__TaskCreator_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  environment_interface__action__TaskCreator_SendGoal_Request__rosidl_typesupport_introspection_c__TaskCreator_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t environment_interface__action__TaskCreator_SendGoal_Request__rosidl_typesupport_introspection_c__TaskCreator_SendGoal_Request_message_type_support_handle = {
  0,
  &environment_interface__action__TaskCreator_SendGoal_Request__rosidl_typesupport_introspection_c__TaskCreator_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_environment_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, environment_interface, action, TaskCreator_SendGoal_Request)() {
  environment_interface__action__TaskCreator_SendGoal_Request__rosidl_typesupport_introspection_c__TaskCreator_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  environment_interface__action__TaskCreator_SendGoal_Request__rosidl_typesupport_introspection_c__TaskCreator_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, environment_interface, action, TaskCreator_Goal)();
  if (!environment_interface__action__TaskCreator_SendGoal_Request__rosidl_typesupport_introspection_c__TaskCreator_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    environment_interface__action__TaskCreator_SendGoal_Request__rosidl_typesupport_introspection_c__TaskCreator_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &environment_interface__action__TaskCreator_SendGoal_Request__rosidl_typesupport_introspection_c__TaskCreator_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "environment_interface/action/detail/task_creator__rosidl_typesupport_introspection_c.h"
// already included above
// #include "environment_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "environment_interface/action/detail/task_creator__functions.h"
// already included above
// #include "environment_interface/action/detail/task_creator__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void environment_interface__action__TaskCreator_SendGoal_Response__rosidl_typesupport_introspection_c__TaskCreator_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  environment_interface__action__TaskCreator_SendGoal_Response__init(message_memory);
}

void environment_interface__action__TaskCreator_SendGoal_Response__rosidl_typesupport_introspection_c__TaskCreator_SendGoal_Response_fini_function(void * message_memory)
{
  environment_interface__action__TaskCreator_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember environment_interface__action__TaskCreator_SendGoal_Response__rosidl_typesupport_introspection_c__TaskCreator_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_interface__action__TaskCreator_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_interface__action__TaskCreator_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers environment_interface__action__TaskCreator_SendGoal_Response__rosidl_typesupport_introspection_c__TaskCreator_SendGoal_Response_message_members = {
  "environment_interface__action",  // message namespace
  "TaskCreator_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(environment_interface__action__TaskCreator_SendGoal_Response),
  environment_interface__action__TaskCreator_SendGoal_Response__rosidl_typesupport_introspection_c__TaskCreator_SendGoal_Response_message_member_array,  // message members
  environment_interface__action__TaskCreator_SendGoal_Response__rosidl_typesupport_introspection_c__TaskCreator_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  environment_interface__action__TaskCreator_SendGoal_Response__rosidl_typesupport_introspection_c__TaskCreator_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t environment_interface__action__TaskCreator_SendGoal_Response__rosidl_typesupport_introspection_c__TaskCreator_SendGoal_Response_message_type_support_handle = {
  0,
  &environment_interface__action__TaskCreator_SendGoal_Response__rosidl_typesupport_introspection_c__TaskCreator_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_environment_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, environment_interface, action, TaskCreator_SendGoal_Response)() {
  environment_interface__action__TaskCreator_SendGoal_Response__rosidl_typesupport_introspection_c__TaskCreator_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!environment_interface__action__TaskCreator_SendGoal_Response__rosidl_typesupport_introspection_c__TaskCreator_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    environment_interface__action__TaskCreator_SendGoal_Response__rosidl_typesupport_introspection_c__TaskCreator_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &environment_interface__action__TaskCreator_SendGoal_Response__rosidl_typesupport_introspection_c__TaskCreator_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "environment_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "environment_interface/action/detail/task_creator__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers environment_interface__action__detail__task_creator__rosidl_typesupport_introspection_c__TaskCreator_SendGoal_service_members = {
  "environment_interface__action",  // service namespace
  "TaskCreator_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // environment_interface__action__detail__task_creator__rosidl_typesupport_introspection_c__TaskCreator_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // environment_interface__action__detail__task_creator__rosidl_typesupport_introspection_c__TaskCreator_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t environment_interface__action__detail__task_creator__rosidl_typesupport_introspection_c__TaskCreator_SendGoal_service_type_support_handle = {
  0,
  &environment_interface__action__detail__task_creator__rosidl_typesupport_introspection_c__TaskCreator_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, environment_interface, action, TaskCreator_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, environment_interface, action, TaskCreator_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_environment_interface
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, environment_interface, action, TaskCreator_SendGoal)() {
  if (!environment_interface__action__detail__task_creator__rosidl_typesupport_introspection_c__TaskCreator_SendGoal_service_type_support_handle.typesupport_identifier) {
    environment_interface__action__detail__task_creator__rosidl_typesupport_introspection_c__TaskCreator_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)environment_interface__action__detail__task_creator__rosidl_typesupport_introspection_c__TaskCreator_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, environment_interface, action, TaskCreator_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, environment_interface, action, TaskCreator_SendGoal_Response)()->data;
  }

  return &environment_interface__action__detail__task_creator__rosidl_typesupport_introspection_c__TaskCreator_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "environment_interface/action/detail/task_creator__rosidl_typesupport_introspection_c.h"
// already included above
// #include "environment_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "environment_interface/action/detail/task_creator__functions.h"
// already included above
// #include "environment_interface/action/detail/task_creator__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void environment_interface__action__TaskCreator_GetResult_Request__rosidl_typesupport_introspection_c__TaskCreator_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  environment_interface__action__TaskCreator_GetResult_Request__init(message_memory);
}

void environment_interface__action__TaskCreator_GetResult_Request__rosidl_typesupport_introspection_c__TaskCreator_GetResult_Request_fini_function(void * message_memory)
{
  environment_interface__action__TaskCreator_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember environment_interface__action__TaskCreator_GetResult_Request__rosidl_typesupport_introspection_c__TaskCreator_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_interface__action__TaskCreator_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers environment_interface__action__TaskCreator_GetResult_Request__rosidl_typesupport_introspection_c__TaskCreator_GetResult_Request_message_members = {
  "environment_interface__action",  // message namespace
  "TaskCreator_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(environment_interface__action__TaskCreator_GetResult_Request),
  environment_interface__action__TaskCreator_GetResult_Request__rosidl_typesupport_introspection_c__TaskCreator_GetResult_Request_message_member_array,  // message members
  environment_interface__action__TaskCreator_GetResult_Request__rosidl_typesupport_introspection_c__TaskCreator_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  environment_interface__action__TaskCreator_GetResult_Request__rosidl_typesupport_introspection_c__TaskCreator_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t environment_interface__action__TaskCreator_GetResult_Request__rosidl_typesupport_introspection_c__TaskCreator_GetResult_Request_message_type_support_handle = {
  0,
  &environment_interface__action__TaskCreator_GetResult_Request__rosidl_typesupport_introspection_c__TaskCreator_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_environment_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, environment_interface, action, TaskCreator_GetResult_Request)() {
  environment_interface__action__TaskCreator_GetResult_Request__rosidl_typesupport_introspection_c__TaskCreator_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!environment_interface__action__TaskCreator_GetResult_Request__rosidl_typesupport_introspection_c__TaskCreator_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    environment_interface__action__TaskCreator_GetResult_Request__rosidl_typesupport_introspection_c__TaskCreator_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &environment_interface__action__TaskCreator_GetResult_Request__rosidl_typesupport_introspection_c__TaskCreator_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "environment_interface/action/detail/task_creator__rosidl_typesupport_introspection_c.h"
// already included above
// #include "environment_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "environment_interface/action/detail/task_creator__functions.h"
// already included above
// #include "environment_interface/action/detail/task_creator__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "environment_interface/action/task_creator.h"
// Member `result`
// already included above
// #include "environment_interface/action/detail/task_creator__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void environment_interface__action__TaskCreator_GetResult_Response__rosidl_typesupport_introspection_c__TaskCreator_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  environment_interface__action__TaskCreator_GetResult_Response__init(message_memory);
}

void environment_interface__action__TaskCreator_GetResult_Response__rosidl_typesupport_introspection_c__TaskCreator_GetResult_Response_fini_function(void * message_memory)
{
  environment_interface__action__TaskCreator_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember environment_interface__action__TaskCreator_GetResult_Response__rosidl_typesupport_introspection_c__TaskCreator_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_interface__action__TaskCreator_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_interface__action__TaskCreator_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers environment_interface__action__TaskCreator_GetResult_Response__rosidl_typesupport_introspection_c__TaskCreator_GetResult_Response_message_members = {
  "environment_interface__action",  // message namespace
  "TaskCreator_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(environment_interface__action__TaskCreator_GetResult_Response),
  environment_interface__action__TaskCreator_GetResult_Response__rosidl_typesupport_introspection_c__TaskCreator_GetResult_Response_message_member_array,  // message members
  environment_interface__action__TaskCreator_GetResult_Response__rosidl_typesupport_introspection_c__TaskCreator_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  environment_interface__action__TaskCreator_GetResult_Response__rosidl_typesupport_introspection_c__TaskCreator_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t environment_interface__action__TaskCreator_GetResult_Response__rosidl_typesupport_introspection_c__TaskCreator_GetResult_Response_message_type_support_handle = {
  0,
  &environment_interface__action__TaskCreator_GetResult_Response__rosidl_typesupport_introspection_c__TaskCreator_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_environment_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, environment_interface, action, TaskCreator_GetResult_Response)() {
  environment_interface__action__TaskCreator_GetResult_Response__rosidl_typesupport_introspection_c__TaskCreator_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, environment_interface, action, TaskCreator_Result)();
  if (!environment_interface__action__TaskCreator_GetResult_Response__rosidl_typesupport_introspection_c__TaskCreator_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    environment_interface__action__TaskCreator_GetResult_Response__rosidl_typesupport_introspection_c__TaskCreator_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &environment_interface__action__TaskCreator_GetResult_Response__rosidl_typesupport_introspection_c__TaskCreator_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "environment_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "environment_interface/action/detail/task_creator__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers environment_interface__action__detail__task_creator__rosidl_typesupport_introspection_c__TaskCreator_GetResult_service_members = {
  "environment_interface__action",  // service namespace
  "TaskCreator_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // environment_interface__action__detail__task_creator__rosidl_typesupport_introspection_c__TaskCreator_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // environment_interface__action__detail__task_creator__rosidl_typesupport_introspection_c__TaskCreator_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t environment_interface__action__detail__task_creator__rosidl_typesupport_introspection_c__TaskCreator_GetResult_service_type_support_handle = {
  0,
  &environment_interface__action__detail__task_creator__rosidl_typesupport_introspection_c__TaskCreator_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, environment_interface, action, TaskCreator_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, environment_interface, action, TaskCreator_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_environment_interface
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, environment_interface, action, TaskCreator_GetResult)() {
  if (!environment_interface__action__detail__task_creator__rosidl_typesupport_introspection_c__TaskCreator_GetResult_service_type_support_handle.typesupport_identifier) {
    environment_interface__action__detail__task_creator__rosidl_typesupport_introspection_c__TaskCreator_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)environment_interface__action__detail__task_creator__rosidl_typesupport_introspection_c__TaskCreator_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, environment_interface, action, TaskCreator_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, environment_interface, action, TaskCreator_GetResult_Response)()->data;
  }

  return &environment_interface__action__detail__task_creator__rosidl_typesupport_introspection_c__TaskCreator_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "environment_interface/action/detail/task_creator__rosidl_typesupport_introspection_c.h"
// already included above
// #include "environment_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "environment_interface/action/detail/task_creator__functions.h"
// already included above
// #include "environment_interface/action/detail/task_creator__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "environment_interface/action/task_creator.h"
// Member `feedback`
// already included above
// #include "environment_interface/action/detail/task_creator__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void environment_interface__action__TaskCreator_FeedbackMessage__rosidl_typesupport_introspection_c__TaskCreator_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  environment_interface__action__TaskCreator_FeedbackMessage__init(message_memory);
}

void environment_interface__action__TaskCreator_FeedbackMessage__rosidl_typesupport_introspection_c__TaskCreator_FeedbackMessage_fini_function(void * message_memory)
{
  environment_interface__action__TaskCreator_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember environment_interface__action__TaskCreator_FeedbackMessage__rosidl_typesupport_introspection_c__TaskCreator_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_interface__action__TaskCreator_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_interface__action__TaskCreator_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers environment_interface__action__TaskCreator_FeedbackMessage__rosidl_typesupport_introspection_c__TaskCreator_FeedbackMessage_message_members = {
  "environment_interface__action",  // message namespace
  "TaskCreator_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(environment_interface__action__TaskCreator_FeedbackMessage),
  environment_interface__action__TaskCreator_FeedbackMessage__rosidl_typesupport_introspection_c__TaskCreator_FeedbackMessage_message_member_array,  // message members
  environment_interface__action__TaskCreator_FeedbackMessage__rosidl_typesupport_introspection_c__TaskCreator_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  environment_interface__action__TaskCreator_FeedbackMessage__rosidl_typesupport_introspection_c__TaskCreator_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t environment_interface__action__TaskCreator_FeedbackMessage__rosidl_typesupport_introspection_c__TaskCreator_FeedbackMessage_message_type_support_handle = {
  0,
  &environment_interface__action__TaskCreator_FeedbackMessage__rosidl_typesupport_introspection_c__TaskCreator_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_environment_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, environment_interface, action, TaskCreator_FeedbackMessage)() {
  environment_interface__action__TaskCreator_FeedbackMessage__rosidl_typesupport_introspection_c__TaskCreator_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  environment_interface__action__TaskCreator_FeedbackMessage__rosidl_typesupport_introspection_c__TaskCreator_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, environment_interface, action, TaskCreator_Feedback)();
  if (!environment_interface__action__TaskCreator_FeedbackMessage__rosidl_typesupport_introspection_c__TaskCreator_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    environment_interface__action__TaskCreator_FeedbackMessage__rosidl_typesupport_introspection_c__TaskCreator_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &environment_interface__action__TaskCreator_FeedbackMessage__rosidl_typesupport_introspection_c__TaskCreator_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
