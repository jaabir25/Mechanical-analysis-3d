// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from environment_interface:srv/BlockRemoveAll.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "environment_interface/srv/detail/block_remove_all__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace environment_interface
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _BlockRemoveAll_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _BlockRemoveAll_Request_type_support_ids_t;

static const _BlockRemoveAll_Request_type_support_ids_t _BlockRemoveAll_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _BlockRemoveAll_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _BlockRemoveAll_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _BlockRemoveAll_Request_type_support_symbol_names_t _BlockRemoveAll_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, environment_interface, srv, BlockRemoveAll_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, environment_interface, srv, BlockRemoveAll_Request)),
  }
};

typedef struct _BlockRemoveAll_Request_type_support_data_t
{
  void * data[2];
} _BlockRemoveAll_Request_type_support_data_t;

static _BlockRemoveAll_Request_type_support_data_t _BlockRemoveAll_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _BlockRemoveAll_Request_message_typesupport_map = {
  2,
  "environment_interface",
  &_BlockRemoveAll_Request_message_typesupport_ids.typesupport_identifier[0],
  &_BlockRemoveAll_Request_message_typesupport_symbol_names.symbol_name[0],
  &_BlockRemoveAll_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t BlockRemoveAll_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_BlockRemoveAll_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace environment_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<environment_interface::srv::BlockRemoveAll_Request>()
{
  return &::environment_interface::srv::rosidl_typesupport_cpp::BlockRemoveAll_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, environment_interface, srv, BlockRemoveAll_Request)() {
  return get_message_type_support_handle<environment_interface::srv::BlockRemoveAll_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "environment_interface/srv/detail/block_remove_all__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace environment_interface
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _BlockRemoveAll_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _BlockRemoveAll_Response_type_support_ids_t;

static const _BlockRemoveAll_Response_type_support_ids_t _BlockRemoveAll_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _BlockRemoveAll_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _BlockRemoveAll_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _BlockRemoveAll_Response_type_support_symbol_names_t _BlockRemoveAll_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, environment_interface, srv, BlockRemoveAll_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, environment_interface, srv, BlockRemoveAll_Response)),
  }
};

typedef struct _BlockRemoveAll_Response_type_support_data_t
{
  void * data[2];
} _BlockRemoveAll_Response_type_support_data_t;

static _BlockRemoveAll_Response_type_support_data_t _BlockRemoveAll_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _BlockRemoveAll_Response_message_typesupport_map = {
  2,
  "environment_interface",
  &_BlockRemoveAll_Response_message_typesupport_ids.typesupport_identifier[0],
  &_BlockRemoveAll_Response_message_typesupport_symbol_names.symbol_name[0],
  &_BlockRemoveAll_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t BlockRemoveAll_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_BlockRemoveAll_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace environment_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<environment_interface::srv::BlockRemoveAll_Response>()
{
  return &::environment_interface::srv::rosidl_typesupport_cpp::BlockRemoveAll_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, environment_interface, srv, BlockRemoveAll_Response)() {
  return get_message_type_support_handle<environment_interface::srv::BlockRemoveAll_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "environment_interface/srv/detail/block_remove_all__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace environment_interface
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _BlockRemoveAll_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _BlockRemoveAll_type_support_ids_t;

static const _BlockRemoveAll_type_support_ids_t _BlockRemoveAll_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _BlockRemoveAll_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _BlockRemoveAll_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _BlockRemoveAll_type_support_symbol_names_t _BlockRemoveAll_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, environment_interface, srv, BlockRemoveAll)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, environment_interface, srv, BlockRemoveAll)),
  }
};

typedef struct _BlockRemoveAll_type_support_data_t
{
  void * data[2];
} _BlockRemoveAll_type_support_data_t;

static _BlockRemoveAll_type_support_data_t _BlockRemoveAll_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _BlockRemoveAll_service_typesupport_map = {
  2,
  "environment_interface",
  &_BlockRemoveAll_service_typesupport_ids.typesupport_identifier[0],
  &_BlockRemoveAll_service_typesupport_symbol_names.symbol_name[0],
  &_BlockRemoveAll_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t BlockRemoveAll_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_BlockRemoveAll_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace environment_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<environment_interface::srv::BlockRemoveAll>()
{
  return &::environment_interface::srv::rosidl_typesupport_cpp::BlockRemoveAll_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, environment_interface, srv, BlockRemoveAll)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<environment_interface::srv::BlockRemoveAll>();
}

#ifdef __cplusplus
}
#endif
