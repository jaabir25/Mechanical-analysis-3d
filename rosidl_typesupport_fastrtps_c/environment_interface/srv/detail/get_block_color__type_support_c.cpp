// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from environment_interface:srv/GetBlockColor.idl
// generated code does not contain a copyright notice
#include "environment_interface/srv/detail/get_block_color__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "environment_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "environment_interface/srv/detail/get_block_color__struct.h"
#include "environment_interface/srv/detail/get_block_color__functions.h"
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


// forward declare type support functions


using _GetBlockColor_Request__ros_msg_type = environment_interface__srv__GetBlockColor_Request;

static bool _GetBlockColor_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetBlockColor_Request__ros_msg_type * ros_message = static_cast<const _GetBlockColor_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: index
  {
    cdr << ros_message->index;
  }

  return true;
}

static bool _GetBlockColor_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetBlockColor_Request__ros_msg_type * ros_message = static_cast<_GetBlockColor_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: index
  {
    cdr >> ros_message->index;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_environment_interface
size_t get_serialized_size_environment_interface__srv__GetBlockColor_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetBlockColor_Request__ros_msg_type * ros_message = static_cast<const _GetBlockColor_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name index
  {
    size_t item_size = sizeof(ros_message->index);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GetBlockColor_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_environment_interface__srv__GetBlockColor_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_environment_interface
size_t max_serialized_size_environment_interface__srv__GetBlockColor_Request(
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

  // member: index
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
    using DataType = environment_interface__srv__GetBlockColor_Request;
    is_plain =
      (
      offsetof(DataType, index) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _GetBlockColor_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_environment_interface__srv__GetBlockColor_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GetBlockColor_Request = {
  "environment_interface::srv",
  "GetBlockColor_Request",
  _GetBlockColor_Request__cdr_serialize,
  _GetBlockColor_Request__cdr_deserialize,
  _GetBlockColor_Request__get_serialized_size,
  _GetBlockColor_Request__max_serialized_size
};

static rosidl_message_type_support_t _GetBlockColor_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetBlockColor_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, environment_interface, srv, GetBlockColor_Request)() {
  return &_GetBlockColor_Request__type_support;
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
// #include "environment_interface/srv/detail/get_block_color__struct.h"
// already included above
// #include "environment_interface/srv/detail/get_block_color__functions.h"
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

#include "std_msgs/msg/detail/color_rgba__functions.h"  // color

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_environment_interface
size_t get_serialized_size_std_msgs__msg__ColorRGBA(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_environment_interface
size_t max_serialized_size_std_msgs__msg__ColorRGBA(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_environment_interface
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, ColorRGBA)();


using _GetBlockColor_Response__ros_msg_type = environment_interface__srv__GetBlockColor_Response;

static bool _GetBlockColor_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetBlockColor_Response__ros_msg_type * ros_message = static_cast<const _GetBlockColor_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: color
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, ColorRGBA
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->color, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _GetBlockColor_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetBlockColor_Response__ros_msg_type * ros_message = static_cast<_GetBlockColor_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: color
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, ColorRGBA
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->color))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_environment_interface
size_t get_serialized_size_environment_interface__srv__GetBlockColor_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetBlockColor_Response__ros_msg_type * ros_message = static_cast<const _GetBlockColor_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name color

  current_alignment += get_serialized_size_std_msgs__msg__ColorRGBA(
    &(ros_message->color), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _GetBlockColor_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_environment_interface__srv__GetBlockColor_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_environment_interface
size_t max_serialized_size_environment_interface__srv__GetBlockColor_Response(
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

  // member: color
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_std_msgs__msg__ColorRGBA(
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
    using DataType = environment_interface__srv__GetBlockColor_Response;
    is_plain =
      (
      offsetof(DataType, color) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _GetBlockColor_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_environment_interface__srv__GetBlockColor_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GetBlockColor_Response = {
  "environment_interface::srv",
  "GetBlockColor_Response",
  _GetBlockColor_Response__cdr_serialize,
  _GetBlockColor_Response__cdr_deserialize,
  _GetBlockColor_Response__get_serialized_size,
  _GetBlockColor_Response__max_serialized_size
};

static rosidl_message_type_support_t _GetBlockColor_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetBlockColor_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, environment_interface, srv, GetBlockColor_Response)() {
  return &_GetBlockColor_Response__type_support;
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
#include "environment_interface/srv/get_block_color.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t GetBlockColor__callbacks = {
  "environment_interface::srv",
  "GetBlockColor",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, environment_interface, srv, GetBlockColor_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, environment_interface, srv, GetBlockColor_Response)(),
};

static rosidl_service_type_support_t GetBlockColor__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &GetBlockColor__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, environment_interface, srv, GetBlockColor)() {
  return &GetBlockColor__handle;
}

#if defined(__cplusplus)
}
#endif
