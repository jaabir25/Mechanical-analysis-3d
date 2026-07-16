// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from environment_interface:srv/BlockCreate.idl
// generated code does not contain a copyright notice
#include "environment_interface/srv/detail/block_create__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "environment_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "environment_interface/srv/detail/block_create__struct.h"
#include "environment_interface/srv/detail/block_create__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "environment_interface/msg/detail/block__functions.h"  // block

// forward declare type support functions
size_t get_serialized_size_environment_interface__msg__Block(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_environment_interface__msg__Block(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, environment_interface, msg, Block)();


using _BlockCreate_Request__ros_msg_type = environment_interface__srv__BlockCreate_Request;

static bool _BlockCreate_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _BlockCreate_Request__ros_msg_type * ros_message = static_cast<const _BlockCreate_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: block
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, environment_interface, msg, Block
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->block, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _BlockCreate_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _BlockCreate_Request__ros_msg_type * ros_message = static_cast<_BlockCreate_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: block
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, environment_interface, msg, Block
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->block))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_environment_interface
size_t get_serialized_size_environment_interface__srv__BlockCreate_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _BlockCreate_Request__ros_msg_type * ros_message = static_cast<const _BlockCreate_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name block

  current_alignment += get_serialized_size_environment_interface__msg__Block(
    &(ros_message->block), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _BlockCreate_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_environment_interface__srv__BlockCreate_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_environment_interface
size_t max_serialized_size_environment_interface__srv__BlockCreate_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: block
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_environment_interface__msg__Block(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = environment_interface__srv__BlockCreate_Request;
    is_plain =
      (
      offsetof(DataType, block) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _BlockCreate_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_environment_interface__srv__BlockCreate_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_BlockCreate_Request = {
  "environment_interface::srv",
  "BlockCreate_Request",
  _BlockCreate_Request__cdr_serialize,
  _BlockCreate_Request__cdr_deserialize,
  _BlockCreate_Request__get_serialized_size,
  _BlockCreate_Request__max_serialized_size
};

static rosidl_message_type_support_t _BlockCreate_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_BlockCreate_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, environment_interface, srv, BlockCreate_Request)() {
  return &_BlockCreate_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "environment_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "environment_interface/srv/detail/block_create__struct.h"
// already included above
// #include "environment_interface/srv/detail/block_create__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _BlockCreate_Response__ros_msg_type = environment_interface__srv__BlockCreate_Response;

static bool _BlockCreate_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _BlockCreate_Response__ros_msg_type * ros_message = static_cast<const _BlockCreate_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: output
  {
    cdr << ros_message->output;
  }

  return true;
}

static bool _BlockCreate_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _BlockCreate_Response__ros_msg_type * ros_message = static_cast<_BlockCreate_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: output
  {
    cdr >> ros_message->output;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_environment_interface
size_t get_serialized_size_environment_interface__srv__BlockCreate_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _BlockCreate_Response__ros_msg_type * ros_message = static_cast<const _BlockCreate_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name output
  {
    size_t item_size = sizeof(ros_message->output);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _BlockCreate_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_environment_interface__srv__BlockCreate_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_environment_interface
size_t max_serialized_size_environment_interface__srv__BlockCreate_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: output
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = environment_interface__srv__BlockCreate_Response;
    is_plain =
      (
      offsetof(DataType, output) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _BlockCreate_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_environment_interface__srv__BlockCreate_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_BlockCreate_Response = {
  "environment_interface::srv",
  "BlockCreate_Response",
  _BlockCreate_Response__cdr_serialize,
  _BlockCreate_Response__cdr_deserialize,
  _BlockCreate_Response__get_serialized_size,
  _BlockCreate_Response__max_serialized_size
};

static rosidl_message_type_support_t _BlockCreate_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_BlockCreate_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, environment_interface, srv, BlockCreate_Response)() {
  return &_BlockCreate_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "environment_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "environment_interface/srv/block_create.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t BlockCreate__callbacks = {
  "environment_interface::srv",
  "BlockCreate",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, environment_interface, srv, BlockCreate_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, environment_interface, srv, BlockCreate_Response)(),
};

static rosidl_service_type_support_t BlockCreate__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &BlockCreate__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, environment_interface, srv, BlockCreate)() {
  return &BlockCreate__handle;
}

#if defined(__cplusplus)
}
#endif
