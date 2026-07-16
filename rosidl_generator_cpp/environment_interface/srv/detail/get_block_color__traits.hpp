// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from environment_interface:srv/GetBlockColor.idl
// generated code does not contain a copyright notice

#ifndef ENVIRONMENT_INTERFACE__SRV__DETAIL__GET_BLOCK_COLOR__TRAITS_HPP_
#define ENVIRONMENT_INTERFACE__SRV__DETAIL__GET_BLOCK_COLOR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "environment_interface/srv/detail/get_block_color__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace environment_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetBlockColor_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: index
  {
    out << "index: ";
    rosidl_generator_traits::value_to_yaml(msg.index, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetBlockColor_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "index: ";
    rosidl_generator_traits::value_to_yaml(msg.index, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetBlockColor_Request & msg, bool use_flow_style = false)
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
  const environment_interface::srv::GetBlockColor_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  environment_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use environment_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const environment_interface::srv::GetBlockColor_Request & msg)
{
  return environment_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<environment_interface::srv::GetBlockColor_Request>()
{
  return "environment_interface::srv::GetBlockColor_Request";
}

template<>
inline const char * name<environment_interface::srv::GetBlockColor_Request>()
{
  return "environment_interface/srv/GetBlockColor_Request";
}

template<>
struct has_fixed_size<environment_interface::srv::GetBlockColor_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<environment_interface::srv::GetBlockColor_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<environment_interface::srv::GetBlockColor_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'color'
#include "std_msgs/msg/detail/color_rgba__traits.hpp"

namespace environment_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetBlockColor_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: color
  {
    out << "color: ";
    to_flow_style_yaml(msg.color, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetBlockColor_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: color
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "color:\n";
    to_block_style_yaml(msg.color, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetBlockColor_Response & msg, bool use_flow_style = false)
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
  const environment_interface::srv::GetBlockColor_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  environment_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use environment_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const environment_interface::srv::GetBlockColor_Response & msg)
{
  return environment_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<environment_interface::srv::GetBlockColor_Response>()
{
  return "environment_interface::srv::GetBlockColor_Response";
}

template<>
inline const char * name<environment_interface::srv::GetBlockColor_Response>()
{
  return "environment_interface/srv/GetBlockColor_Response";
}

template<>
struct has_fixed_size<environment_interface::srv::GetBlockColor_Response>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::ColorRGBA>::value> {};

template<>
struct has_bounded_size<environment_interface::srv::GetBlockColor_Response>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::ColorRGBA>::value> {};

template<>
struct is_message<environment_interface::srv::GetBlockColor_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<environment_interface::srv::GetBlockColor>()
{
  return "environment_interface::srv::GetBlockColor";
}

template<>
inline const char * name<environment_interface::srv::GetBlockColor>()
{
  return "environment_interface/srv/GetBlockColor";
}

template<>
struct has_fixed_size<environment_interface::srv::GetBlockColor>
  : std::integral_constant<
    bool,
    has_fixed_size<environment_interface::srv::GetBlockColor_Request>::value &&
    has_fixed_size<environment_interface::srv::GetBlockColor_Response>::value
  >
{
};

template<>
struct has_bounded_size<environment_interface::srv::GetBlockColor>
  : std::integral_constant<
    bool,
    has_bounded_size<environment_interface::srv::GetBlockColor_Request>::value &&
    has_bounded_size<environment_interface::srv::GetBlockColor_Response>::value
  >
{
};

template<>
struct is_service<environment_interface::srv::GetBlockColor>
  : std::true_type
{
};

template<>
struct is_service_request<environment_interface::srv::GetBlockColor_Request>
  : std::true_type
{
};

template<>
struct is_service_response<environment_interface::srv::GetBlockColor_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ENVIRONMENT_INTERFACE__SRV__DETAIL__GET_BLOCK_COLOR__TRAITS_HPP_
