// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from environment_interface:srv/BlockRemoveAll.idl
// generated code does not contain a copyright notice
#include "environment_interface/srv/detail/block_remove_all__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "environment_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "environment_interface/srv/detail/block_remove_all__struct.h"
#include "environment_interface/srv/detail/block_remove_all__functions.h"
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

#include "moveit_msgs/msg/detail/collision_object__functions.h"  // blocks

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_environment_interface
size_t get_serialized_size_moveit_msgs__msg__CollisionObject(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_environment_interface
size_t max_serialized_size_moveit_msgs__msg__CollisionObject(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_environment_interface
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, msg, CollisionObject)();


using _BlockRemoveAll_Request__ros_msg_type = environment_interface__srv__BlockRemoveAll_Request;

static bool _BlockRemoveAll_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _BlockRemoveAll_Request__ros_msg_type * ros_message = static_cast<const _BlockRemoveAll_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: blocks
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, moveit_msgs, msg, CollisionObject
      )()->data);
    size_t size = ros_message->blocks.size;
    auto array_ptr = ros_message->blocks.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _BlockRemoveAll_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _BlockRemoveAll_Request__ros_msg_type * ros_message = static_cast<_BlockRemoveAll_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: blocks
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, moveit_msgs, msg, CollisionObject
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->blocks.data) {
      moveit_msgs__msg__CollisionObject__Sequence__fini(&ros_message->blocks);
    }
    if (!moveit_msgs__msg__CollisionObject__Sequence__init(&ros_message->blocks, size)) {
      fprintf(stderr, "failed to create array for field 'blocks'");
      return false;
    }
    auto array_ptr = ros_message->blocks.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_environment_interface
size_t get_serialized_size_environment_interface__srv__BlockRemoveAll_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _BlockRemoveAll_Request__ros_msg_type * ros_message = static_cast<const _BlockRemoveAll_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name blocks
  {
    size_t array_size = ros_message->blocks.size;
    auto array_ptr = ros_message->blocks.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_moveit_msgs__msg__CollisionObject(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _BlockRemoveAll_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_environment_interface__srv__BlockRemoveAll_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_environment_interface
size_t max_serialized_size_environment_interface__srv__BlockRemoveAll_Request(
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

  // member: blocks
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_moveit_msgs__msg__CollisionObject(
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
    using DataType = environment_interface__srv__BlockRemoveAll_Request;
    is_plain =
      (
      offsetof(DataType, blocks) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _BlockRemoveAll_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_environment_interface__srv__BlockRemoveAll_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_BlockRemoveAll_Request = {
  "environment_interface::srv",
  "BlockRemoveAll_Request",
  _BlockRemoveAll_Request__cdr_serialize,
  _BlockRemoveAll_Request__cdr_deserialize,
  _BlockRemoveAll_Request__get_serialized_size,
  _BlockRemoveAll_Request__max_serialized_size
};

static rosidl_message_type_support_t _BlockRemoveAll_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_BlockRemoveAll_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, environment_interface, srv, BlockRemoveAll_Request)() {
  return &_BlockRemoveAll_Request__type_support;
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
// #include "environment_interface/srv/detail/block_remove_all__struct.h"
// already included above
// #include "environment_interface/srv/detail/block_remove_all__functions.h"
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


using _BlockRemoveAll_Response__ros_msg_type = environment_interface__srv__BlockRemoveAll_Response;

static bool _BlockRemoveAll_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _BlockRemoveAll_Response__ros_msg_type * ros_message = static_cast<const _BlockRemoveAll_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: output
  {
    cdr << ros_message->output;
  }

  return true;
}

static bool _BlockRemoveAll_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _BlockRemoveAll_Response__ros_msg_type * ros_message = static_cast<_BlockRemoveAll_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: output
  {
    cdr >> ros_message->output;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_environment_interface
size_t get_serialized_size_environment_interface__srv__BlockRemoveAll_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _BlockRemoveAll_Response__ros_msg_type * ros_message = static_cast<const _BlockRemoveAll_Response__ros_msg_type *>(untyped_ros_message);
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

static uint32_t _BlockRemoveAll_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_environment_interface__srv__BlockRemoveAll_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_environment_interface
size_t max_serialized_size_environment_interface__srv__BlockRemoveAll_Response(
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
    using DataType = environment_interface__srv__BlockRemoveAll_Response;
    is_plain =
      (
      offsetof(DataType, output) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _BlockRemoveAll_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_environment_interface__srv__BlockRemoveAll_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_BlockRemoveAll_Response = {
  "environment_interface::srv",
  "BlockRemoveAll_Response",
  _BlockRemoveAll_Response__cdr_serialize,
  _BlockRemoveAll_Response__cdr_deserialize,
  _BlockRemoveAll_Response__get_serialized_size,
  _BlockRemoveAll_Response__max_serialized_size
};

static rosidl_message_type_support_t _BlockRemoveAll_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_BlockRemoveAll_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, environment_interface, srv, BlockRemoveAll_Response)() {
  return &_BlockRemoveAll_Response__type_support;
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
#include "environment_interface/srv/block_remove_all.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t BlockRemoveAll__callbacks = {
  "environment_interface::srv",
  "BlockRemoveAll",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, environment_interface, srv, BlockRemoveAll_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, environment_interface, srv, BlockRemoveAll_Response)(),
};

static rosidl_service_type_support_t BlockRemoveAll__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &BlockRemoveAll__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, environment_interface, srv, BlockRemoveAll)() {
  return &BlockRemoveAll__handle;
}

#if defined(__cplusplus)
}
#endif
