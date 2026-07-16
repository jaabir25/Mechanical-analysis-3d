// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from environment_interface:srv/BlockRemove.idl
// generated code does not contain a copyright notice

#ifndef ENVIRONMENT_INTERFACE__SRV__DETAIL__BLOCK_REMOVE__TRAITS_HPP_
#define ENVIRONMENT_INTERFACE__SRV__DETAIL__BLOCK_REMOVE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "environment_interface/srv/detail/block_remove__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'block'
#include "environment_interface/msg/detail/block__traits.hpp"

namespace environment_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const BlockRemove_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: block
  {
    out << "block: ";
    to_flow_style_yaml(msg.block, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BlockRemove_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: block
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "block:\n";
    to_block_style_yaml(msg.block, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BlockRemove_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace environment_interface

namespace rosidl_generator_traits
{

[[deprecated("use environment_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const environment_interface::srv::BlockRemove_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  environment_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use environment_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const environment_interface::srv::BlockRemove_Request & msg)
{
  return environment_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<environment_interface::srv::BlockRemove_Request>()
{
  return "environment_interface::srv::BlockRemove_Request";
}

template<>
inline const char * name<environment_interface::srv::BlockRemove_Request>()
{
  return "environment_interface/srv/BlockRemove_Request";
}

template<>
struct has_fixed_size<environment_interface::srv::BlockRemove_Request>
  : std::integral_constant<bool, has_fixed_size<environment_interface::msg::Block>::value> {};

template<>
struct has_bounded_size<environment_interface::srv::BlockRemove_Request>
  : std::integral_constant<bool, has_bounded_size<environment_interface::msg::Block>::value> {};

template<>
struct is_message<environment_interface::srv::BlockRemove_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace environment_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const BlockRemove_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: output
  {
    out << "output: ";
    rosidl_generator_traits::value_to_yaml(msg.output, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BlockRemove_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: output
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "output: ";
    rosidl_generator_traits::value_to_yaml(msg.output, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BlockRemove_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace environment_interface

namespace rosidl_generator_traits
{

[[deprecated("use environment_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const environment_interface::srv::BlockRemove_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  environment_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use environment_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const environment_interface::srv::BlockRemove_Response & msg)
{
  return environment_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<environment_interface::srv::BlockRemove_Response>()
{
  return "environment_interface::srv::BlockRemove_Response";
}

template<>
inline const char * name<environment_interface::srv::BlockRemove_Response>()
{
  return "environment_interface/srv/BlockRemove_Response";
}

template<>
struct has_fixed_size<environment_interface::srv::BlockRemove_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<environment_interface::srv::BlockRemove_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<environment_interface::srv::BlockRemove_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<environment_interface::srv::BlockRemove>()
{
  return "environment_interface::srv::BlockRemove";
}

template<>
inline const char * name<environment_interface::srv::BlockRemove>()
{
  return "environment_interface/srv/BlockRemove";
}

template<>
struct has_fixed_size<environment_interface::srv::BlockRemove>
  : std::integral_constant<
    bool,
    has_fixed_size<environment_interface::srv::BlockRemove_Request>::value &&
    has_fixed_size<environment_interface::srv::BlockRemove_Response>::value
  >
{
};

template<>
struct has_bounded_size<environment_interface::srv::BlockRemove>
  : std::integral_constant<
    bool,
    has_bounded_size<environment_interface::srv::BlockRemove_Request>::value &&
    has_bounded_size<environment_interface::srv::BlockRemove_Response>::value
  >
{
};

template<>
struct is_service<environment_interface::srv::BlockRemove>
  : std::true_type
{
};

template<>
struct is_service_request<environment_interface::srv::BlockRemove_Request>
  : std::true_type
{
};

template<>
struct is_service_response<environment_interface::srv::BlockRemove_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ENVIRONMENT_INTERFACE__SRV__DETAIL__BLOCK_REMOVE__TRAITS_HPP_
