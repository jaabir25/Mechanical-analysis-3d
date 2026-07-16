// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from environment_interface:srv/BlockRemoveAll.idl
// generated code does not contain a copyright notice

#ifndef ENVIRONMENT_INTERFACE__SRV__DETAIL__BLOCK_REMOVE_ALL__TRAITS_HPP_
#define ENVIRONMENT_INTERFACE__SRV__DETAIL__BLOCK_REMOVE_ALL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "environment_interface/srv/detail/block_remove_all__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'blocks'
#include "moveit_msgs/msg/detail/collision_object__traits.hpp"

namespace environment_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const BlockRemoveAll_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: blocks
  {
    if (msg.blocks.size() == 0) {
      out << "blocks: []";
    } else {
      out << "blocks: [";
      size_t pending_items = msg.blocks.size();
      for (auto item : msg.blocks) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BlockRemoveAll_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: blocks
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.blocks.size() == 0) {
      out << "blocks: []\n";
    } else {
      out << "blocks:\n";
      for (auto item : msg.blocks) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BlockRemoveAll_Request & msg, bool use_flow_style = false)
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
  const environment_interface::srv::BlockRemoveAll_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  environment_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use environment_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const environment_interface::srv::BlockRemoveAll_Request & msg)
{
  return environment_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<environment_interface::srv::BlockRemoveAll_Request>()
{
  return "environment_interface::srv::BlockRemoveAll_Request";
}

template<>
inline const char * name<environment_interface::srv::BlockRemoveAll_Request>()
{
  return "environment_interface/srv/BlockRemoveAll_Request";
}

template<>
struct has_fixed_size<environment_interface::srv::BlockRemoveAll_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<environment_interface::srv::BlockRemoveAll_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<environment_interface::srv::BlockRemoveAll_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace environment_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const BlockRemoveAll_Response & msg,
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
  const BlockRemoveAll_Response & msg,
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

inline std::string to_yaml(const BlockRemoveAll_Response & msg, bool use_flow_style = false)
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
  const environment_interface::srv::BlockRemoveAll_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  environment_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use environment_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const environment_interface::srv::BlockRemoveAll_Response & msg)
{
  return environment_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<environment_interface::srv::BlockRemoveAll_Response>()
{
  return "environment_interface::srv::BlockRemoveAll_Response";
}

template<>
inline const char * name<environment_interface::srv::BlockRemoveAll_Response>()
{
  return "environment_interface/srv/BlockRemoveAll_Response";
}

template<>
struct has_fixed_size<environment_interface::srv::BlockRemoveAll_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<environment_interface::srv::BlockRemoveAll_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<environment_interface::srv::BlockRemoveAll_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<environment_interface::srv::BlockRemoveAll>()
{
  return "environment_interface::srv::BlockRemoveAll";
}

template<>
inline const char * name<environment_interface::srv::BlockRemoveAll>()
{
  return "environment_interface/srv/BlockRemoveAll";
}

template<>
struct has_fixed_size<environment_interface::srv::BlockRemoveAll>
  : std::integral_constant<
    bool,
    has_fixed_size<environment_interface::srv::BlockRemoveAll_Request>::value &&
    has_fixed_size<environment_interface::srv::BlockRemoveAll_Response>::value
  >
{
};

template<>
struct has_bounded_size<environment_interface::srv::BlockRemoveAll>
  : std::integral_constant<
    bool,
    has_bounded_size<environment_interface::srv::BlockRemoveAll_Request>::value &&
    has_bounded_size<environment_interface::srv::BlockRemoveAll_Response>::value
  >
{
};

template<>
struct is_service<environment_interface::srv::BlockRemoveAll>
  : std::true_type
{
};

template<>
struct is_service_request<environment_interface::srv::BlockRemoveAll_Request>
  : std::true_type
{
};

template<>
struct is_service_response<environment_interface::srv::BlockRemoveAll_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ENVIRONMENT_INTERFACE__SRV__DETAIL__BLOCK_REMOVE_ALL__TRAITS_HPP_
