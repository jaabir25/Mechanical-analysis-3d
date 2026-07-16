// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from environment_interface:msg/Block.idl
// generated code does not contain a copyright notice

#ifndef ENVIRONMENT_INTERFACE__MSG__DETAIL__BLOCK__TRAITS_HPP_
#define ENVIRONMENT_INTERFACE__MSG__DETAIL__BLOCK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "environment_interface/msg/detail/block__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'color'
#include "std_msgs/msg/detail/color_rgba__traits.hpp"

namespace environment_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const Block & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: frame_id
  {
    out << "frame_id: ";
    rosidl_generator_traits::value_to_yaml(msg.frame_id, out);
    out << ", ";
  }

  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: z
  {
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << ", ";
  }

  // member: x_size
  {
    out << "x_size: ";
    rosidl_generator_traits::value_to_yaml(msg.x_size, out);
    out << ", ";
  }

  // member: y_size
  {
    out << "y_size: ";
    rosidl_generator_traits::value_to_yaml(msg.y_size, out);
    out << ", ";
  }

  // member: number
  {
    out << "number: ";
    rosidl_generator_traits::value_to_yaml(msg.number, out);
    out << ", ";
  }

  // member: is_support
  {
    out << "is_support: ";
    rosidl_generator_traits::value_to_yaml(msg.is_support, out);
    out << ", ";
  }

  // member: color
  {
    out << "color: ";
    to_flow_style_yaml(msg.color, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Block & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: frame_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frame_id: ";
    rosidl_generator_traits::value_to_yaml(msg.frame_id, out);
    out << "\n";
  }

  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << "\n";
  }

  // member: x_size
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x_size: ";
    rosidl_generator_traits::value_to_yaml(msg.x_size, out);
    out << "\n";
  }

  // member: y_size
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y_size: ";
    rosidl_generator_traits::value_to_yaml(msg.y_size, out);
    out << "\n";
  }

  // member: number
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "number: ";
    rosidl_generator_traits::value_to_yaml(msg.number, out);
    out << "\n";
  }

  // member: is_support
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_support: ";
    rosidl_generator_traits::value_to_yaml(msg.is_support, out);
    out << "\n";
  }

  // member: color
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "color:\n";
    to_block_style_yaml(msg.color, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Block & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace environment_interface

namespace rosidl_generator_traits
{

[[deprecated("use environment_interface::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const environment_interface::msg::Block & msg,
  std::ostream & out, size_t indentation = 0)
{
  environment_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use environment_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const environment_interface::msg::Block & msg)
{
  return environment_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<environment_interface::msg::Block>()
{
  return "environment_interface::msg::Block";
}

template<>
inline const char * name<environment_interface::msg::Block>()
{
  return "environment_interface/msg/Block";
}

template<>
struct has_fixed_size<environment_interface::msg::Block>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<environment_interface::msg::Block>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<environment_interface::msg::Block>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ENVIRONMENT_INTERFACE__MSG__DETAIL__BLOCK__TRAITS_HPP_
