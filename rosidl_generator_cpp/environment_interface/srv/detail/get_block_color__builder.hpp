// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from environment_interface:srv/GetBlockColor.idl
// generated code does not contain a copyright notice

#ifndef ENVIRONMENT_INTERFACE__SRV__DETAIL__GET_BLOCK_COLOR__BUILDER_HPP_
#define ENVIRONMENT_INTERFACE__SRV__DETAIL__GET_BLOCK_COLOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "environment_interface/srv/detail/get_block_color__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace environment_interface
{

namespace srv
{

namespace builder
{

class Init_GetBlockColor_Request_index
{
public:
  Init_GetBlockColor_Request_index()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::environment_interface::srv::GetBlockColor_Request index(::environment_interface::srv::GetBlockColor_Request::_index_type arg)
  {
    msg_.index = std::move(arg);
    return std::move(msg_);
  }

private:
  ::environment_interface::srv::GetBlockColor_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::environment_interface::srv::GetBlockColor_Request>()
{
  return environment_interface::srv::builder::Init_GetBlockColor_Request_index();
}

}  // namespace environment_interface


namespace environment_interface
{

namespace srv
{

namespace builder
{

class Init_GetBlockColor_Response_color
{
public:
  Init_GetBlockColor_Response_color()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::environment_interface::srv::GetBlockColor_Response color(::environment_interface::srv::GetBlockColor_Response::_color_type arg)
  {
    msg_.color = std::move(arg);
    return std::move(msg_);
  }

private:
  ::environment_interface::srv::GetBlockColor_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::environment_interface::srv::GetBlockColor_Response>()
{
  return environment_interface::srv::builder::Init_GetBlockColor_Response_color();
}

}  // namespace environment_interface

#endif  // ENVIRONMENT_INTERFACE__SRV__DETAIL__GET_BLOCK_COLOR__BUILDER_HPP_
