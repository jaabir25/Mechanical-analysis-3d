// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from environment_interface:srv/BlockRemoveAll.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "environment_interface/srv/detail/block_remove_all__rosidl_typesupport_introspection_c.h"
#include "environment_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "environment_interface/srv/detail/block_remove_all__functions.h"
#include "environment_interface/srv/detail/block_remove_all__struct.h"


// Include directives for member types
// Member `blocks`
#include "moveit_msgs/msg/collision_object.h"
// Member `blocks`
#include "moveit_msgs/msg/detail/collision_object__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void environment_interface__srv__BlockRemoveAll_Request__rosidl_typesupport_introspection_c__BlockRemoveAll_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  environment_interface__srv__BlockRemoveAll_Request__init(message_memory);
}

void environment_interface__srv__BlockRemoveAll_Request__rosidl_typesupport_introspection_c__BlockRemoveAll_Request_fini_function(void * message_memory)
{
  environment_interface__srv__BlockRemoveAll_Request__fini(message_memory);
}

size_t environment_interface__srv__BlockRemoveAll_Request__rosidl_typesupport_introspection_c__size_function__BlockRemoveAll_Request__blocks(
  const void * untyped_member)
{
  const moveit_msgs__msg__CollisionObject__Sequence * member =
    (const moveit_msgs__msg__CollisionObject__Sequence *)(untyped_member);
  return member->size;
}

const void * environment_interface__srv__BlockRemoveAll_Request__rosidl_typesupport_introspection_c__get_const_function__BlockRemoveAll_Request__blocks(
  const void * untyped_member, size_t index)
{
  const moveit_msgs__msg__CollisionObject__Sequence * member =
    (const moveit_msgs__msg__CollisionObject__Sequence *)(untyped_member);
  return &member->data[index];
}

void * environment_interface__srv__BlockRemoveAll_Request__rosidl_typesupport_introspection_c__get_function__BlockRemoveAll_Request__blocks(
  void * untyped_member, size_t index)
{
  moveit_msgs__msg__CollisionObject__Sequence * member =
    (moveit_msgs__msg__CollisionObject__Sequence *)(untyped_member);
  return &member->data[index];
}

void environment_interface__srv__BlockRemoveAll_Request__rosidl_typesupport_introspection_c__fetch_function__BlockRemoveAll_Request__blocks(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const moveit_msgs__msg__CollisionObject * item =
    ((const moveit_msgs__msg__CollisionObject *)
    environment_interface__srv__BlockRemoveAll_Request__rosidl_typesupport_introspection_c__get_const_function__BlockRemoveAll_Request__blocks(untyped_member, index));
  moveit_msgs__msg__CollisionObject * value =
    (moveit_msgs__msg__CollisionObject *)(untyped_value);
  *value = *item;
}

void environment_interface__srv__BlockRemoveAll_Request__rosidl_typesupport_introspection_c__assign_function__BlockRemoveAll_Request__blocks(
  void * untyped_member, size_t index, const void * untyped_value)
{
  moveit_msgs__msg__CollisionObject * item =
    ((moveit_msgs__msg__CollisionObject *)
    environment_interface__srv__BlockRemoveAll_Request__rosidl_typesupport_introspection_c__get_function__BlockRemoveAll_Request__blocks(untyped_member, index));
  const moveit_msgs__msg__CollisionObject * value =
    (const moveit_msgs__msg__CollisionObject *)(untyped_value);
  *item = *value;
}

bool environment_interface__srv__BlockRemoveAll_Request__rosidl_typesupport_introspection_c__resize_function__BlockRemoveAll_Request__blocks(
  void * untyped_member, size_t size)
{
  moveit_msgs__msg__CollisionObject__Sequence * member =
    (moveit_msgs__msg__CollisionObject__Sequence *)(untyped_member);
  moveit_msgs__msg__CollisionObject__Sequence__fini(member);
  return moveit_msgs__msg__CollisionObject__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember environment_interface__srv__BlockRemoveAll_Request__rosidl_typesupport_introspection_c__BlockRemoveAll_Request_message_member_array[1] = {
  {
    "blocks",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_interface__srv__BlockRemoveAll_Request, blocks),  // bytes offset in struct
    NULL,  // default value
    environment_interface__srv__BlockRemoveAll_Request__rosidl_typesupport_introspection_c__size_function__BlockRemoveAll_Request__blocks,  // size() function pointer
    environment_interface__srv__BlockRemoveAll_Request__rosidl_typesupport_introspection_c__get_const_function__BlockRemoveAll_Request__blocks,  // get_const(index) function pointer
    environment_interface__srv__BlockRemoveAll_Request__rosidl_typesupport_introspection_c__get_function__BlockRemoveAll_Request__blocks,  // get(index) function pointer
    environment_interface__srv__BlockRemoveAll_Request__rosidl_typesupport_introspection_c__fetch_function__BlockRemoveAll_Request__blocks,  // fetch(index, &value) function pointer
    environment_interface__srv__BlockRemoveAll_Request__rosidl_typesupport_introspection_c__assign_function__BlockRemoveAll_Request__blocks,  // assign(index, value) function pointer
    environment_interface__srv__BlockRemoveAll_Request__rosidl_typesupport_introspection_c__resize_function__BlockRemoveAll_Request__blocks  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers environment_interface__srv__BlockRemoveAll_Request__rosidl_typesupport_introspection_c__BlockRemoveAll_Request_message_members = {
  "environment_interface__srv",  // message namespace
  "BlockRemoveAll_Request",  // message name
  1,  // number of fields
  sizeof(environment_interface__srv__BlockRemoveAll_Request),
  environment_interface__srv__BlockRemoveAll_Request__rosidl_typesupport_introspection_c__BlockRemoveAll_Request_message_member_array,  // message members
  environment_interface__srv__BlockRemoveAll_Request__rosidl_typesupport_introspection_c__BlockRemoveAll_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  environment_interface__srv__BlockRemoveAll_Request__rosidl_typesupport_introspection_c__BlockRemoveAll_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t environment_interface__srv__BlockRemoveAll_Request__rosidl_typesupport_introspection_c__BlockRemoveAll_Request_message_type_support_handle = {
  0,
  &environment_interface__srv__BlockRemoveAll_Request__rosidl_typesupport_introspection_c__BlockRemoveAll_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_environment_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, environment_interface, srv, BlockRemoveAll_Request)() {
  environment_interface__srv__BlockRemoveAll_Request__rosidl_typesupport_introspection_c__BlockRemoveAll_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, msg, CollisionObject)();
  if (!environment_interface__srv__BlockRemoveAll_Request__rosidl_typesupport_introspection_c__BlockRemoveAll_Request_message_type_support_handle.typesupport_identifier) {
    environment_interface__srv__BlockRemoveAll_Request__rosidl_typesupport_introspection_c__BlockRemoveAll_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &environment_interface__srv__BlockRemoveAll_Request__rosidl_typesupport_introspection_c__BlockRemoveAll_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "environment_interface/srv/detail/block_remove_all__rosidl_typesupport_introspection_c.h"
// already included above
// #include "environment_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "environment_interface/srv/detail/block_remove_all__functions.h"
// already included above
// #include "environment_interface/srv/detail/block_remove_all__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void environment_interface__srv__BlockRemoveAll_Response__rosidl_typesupport_introspection_c__BlockRemoveAll_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  environment_interface__srv__BlockRemoveAll_Response__init(message_memory);
}

void environment_interface__srv__BlockRemoveAll_Response__rosidl_typesupport_introspection_c__BlockRemoveAll_Response_fini_function(void * message_memory)
{
  environment_interface__srv__BlockRemoveAll_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember environment_interface__srv__BlockRemoveAll_Response__rosidl_typesupport_introspection_c__BlockRemoveAll_Response_message_member_array[1] = {
  {
    "output",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_interface__srv__BlockRemoveAll_Response, output),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers environment_interface__srv__BlockRemoveAll_Response__rosidl_typesupport_introspection_c__BlockRemoveAll_Response_message_members = {
  "environment_interface__srv",  // message namespace
  "BlockRemoveAll_Response",  // message name
  1,  // number of fields
  sizeof(environment_interface__srv__BlockRemoveAll_Response),
  environment_interface__srv__BlockRemoveAll_Response__rosidl_typesupport_introspection_c__BlockRemoveAll_Response_message_member_array,  // message members
  environment_interface__srv__BlockRemoveAll_Response__rosidl_typesupport_introspection_c__BlockRemoveAll_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  environment_interface__srv__BlockRemoveAll_Response__rosidl_typesupport_introspection_c__BlockRemoveAll_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t environment_interface__srv__BlockRemoveAll_Response__rosidl_typesupport_introspection_c__BlockRemoveAll_Response_message_type_support_handle = {
  0,
  &environment_interface__srv__BlockRemoveAll_Response__rosidl_typesupport_introspection_c__BlockRemoveAll_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_environment_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, environment_interface, srv, BlockRemoveAll_Response)() {
  if (!environment_interface__srv__BlockRemoveAll_Response__rosidl_typesupport_introspection_c__BlockRemoveAll_Response_message_type_support_handle.typesupport_identifier) {
    environment_interface__srv__BlockRemoveAll_Response__rosidl_typesupport_introspection_c__BlockRemoveAll_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &environment_interface__srv__BlockRemoveAll_Response__rosidl_typesupport_introspection_c__BlockRemoveAll_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "environment_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "environment_interface/srv/detail/block_remove_all__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers environment_interface__srv__detail__block_remove_all__rosidl_typesupport_introspection_c__BlockRemoveAll_service_members = {
  "environment_interface__srv",  // service namespace
  "BlockRemoveAll",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // environment_interface__srv__detail__block_remove_all__rosidl_typesupport_introspection_c__BlockRemoveAll_Request_message_type_support_handle,
  NULL  // response message
  // environment_interface__srv__detail__block_remove_all__rosidl_typesupport_introspection_c__BlockRemoveAll_Response_message_type_support_handle
};

static rosidl_service_type_support_t environment_interface__srv__detail__block_remove_all__rosidl_typesupport_introspection_c__BlockRemoveAll_service_type_support_handle = {
  0,
  &environment_interface__srv__detail__block_remove_all__rosidl_typesupport_introspection_c__BlockRemoveAll_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, environment_interface, srv, BlockRemoveAll_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, environment_interface, srv, BlockRemoveAll_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_environment_interface
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, environment_interface, srv, BlockRemoveAll)() {
  if (!environment_interface__srv__detail__block_remove_all__rosidl_typesupport_introspection_c__BlockRemoveAll_service_type_support_handle.typesupport_identifier) {
    environment_interface__srv__detail__block_remove_all__rosidl_typesupport_introspection_c__BlockRemoveAll_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)environment_interface__srv__detail__block_remove_all__rosidl_typesupport_introspection_c__BlockRemoveAll_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, environment_interface, srv, BlockRemoveAll_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, environment_interface, srv, BlockRemoveAll_Response)()->data;
  }

  return &environment_interface__srv__detail__block_remove_all__rosidl_typesupport_introspection_c__BlockRemoveAll_service_type_support_handle;
}
