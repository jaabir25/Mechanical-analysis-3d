// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from environment_interface:msg/Block.idl
// generated code does not contain a copyright notice

#ifndef ENVIRONMENT_INTERFACE__MSG__DETAIL__BLOCK__BUILDER_HPP_
#define ENVIRONMENT_INTERFACE__MSG__DETAIL__BLOCK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "environment_interface/msg/detail/block__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace environment_interface
{

namespace msg
{

namespace builder
{

class Init_Block_color
{
public:
  explicit Init_Block_color(::environment_interface::msg::Block & msg)
  : msg_(msg)
  {}
  ::environment_interface::msg::Block color(::environment_interface::msg::Block::_color_type arg)
  {
    msg_.color = std::move(arg);
    return std::move(msg_);
  }

private:
  ::environment_interface::msg::Block msg_;
};

class Init_Block_is_support
{
public:
  explicit Init_Block_is_support(::environment_interface::msg::Block & msg)
  : msg_(msg)
  {}
  Init_Block_color is_support(::environment_interface::msg::Block::_is_support_type arg)
  {
    msg_.is_support = std::move(arg);
    return Init_Block_color(msg_);
  }

private:
  ::environment_interface::msg::Block msg_;
};

class Init_Block_number
{
public:
  explicit Init_Block_number(::environment_interface::msg::Block & msg)
  : msg_(msg)
  {}
  Init_Block_is_support number(::environment_interface::msg::Block::_number_type arg)
  {
    msg_.number = std::move(arg);
    return Init_Block_is_support(msg_);
  }

private:
  ::environment_interface::msg::Block msg_;
};

class Init_Block_y_size
{
public:
  explicit Init_Block_y_size(::environment_interface::msg::Block & msg)
  : msg_(msg)
  {}
  Init_Block_number y_size(::environment_interface::msg::Block::_y_size_type arg)
  {
    msg_.y_size = std::move(arg);
    return Init_Block_number(msg_);
  }

private:
  ::environment_interface::msg::Block msg_;
};

class Init_Block_x_size
{
public:
  explicit Init_Block_x_size(::environment_interface::msg::Block & msg)
  : msg_(msg)
  {}
  Init_Block_y_size x_size(::environment_interface::msg::Block::_x_size_type arg)
  {
    msg_.x_size = std::move(arg);
    return Init_Block_y_size(msg_);
  }

private:
  ::environment_interface::msg::Block msg_;
};

class Init_Block_z
{
public:
  explicit Init_Block_z(::environment_interface::msg::Block & msg)
  : msg_(msg)
  {}
  Init_Block_x_size z(::environment_interface::msg::Block::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_Block_x_size(msg_);
  }

private:
  ::environment_interface::msg::Block msg_;
};

class Init_Block_y
{
public:
  explicit Init_Block_y(::environment_interface::msg::Block & msg)
  : msg_(msg)
  {}
  Init_Block_z y(::environment_interface::msg::Block::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Block_z(msg_);
  }

private:
  ::environment_interface::msg::Block msg_;
};

class Init_Block_x
{
public:
  explicit Init_Block_x(::environment_interface::msg::Block & msg)
  : msg_(msg)
  {}
  Init_Block_y x(::environment_interface::msg::Block::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Block_y(msg_);
  }

private:
  ::environment_interface::msg::Block msg_;
};

class Init_Block_frame_id
{
public:
  explicit Init_Block_frame_id(::environment_interface::msg::Block & msg)
  : msg_(msg)
  {}
  Init_Block_x frame_id(::environment_interface::msg::Block::_frame_id_type arg)
  {
    msg_.frame_id = std::move(arg);
    return Init_Block_x(msg_);
  }

private:
  ::environment_interface::msg::Block msg_;
};

class Init_Block_name
{
public:
  Init_Block_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Block_frame_id name(::environment_interface::msg::Block::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_Block_frame_id(msg_);
  }

private:
  ::environment_interface::msg::Block msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::environment_interface::msg::Block>()
{
  return environment_interface::msg::builder::Init_Block_name();
}

}  // namespace environment_interface

#endif  // ENVIRONMENT_INTERFACE__MSG__DETAIL__BLOCK__BUILDER_HPP_
