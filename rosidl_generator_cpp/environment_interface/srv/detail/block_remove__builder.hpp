// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from environment_interface:srv/BlockRemove.idl
// generated code does not contain a copyright notice

#ifndef ENVIRONMENT_INTERFACE__SRV__DETAIL__BLOCK_REMOVE__BUILDER_HPP_
#define ENVIRONMENT_INTERFACE__SRV__DETAIL__BLOCK_REMOVE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "environment_interface/srv/detail/block_remove__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace environment_interface
{

namespace srv
{

namespace builder
{

class Init_BlockRemove_Request_block
{
public:
  Init_BlockRemove_Request_block()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::environment_interface::srv::BlockRemove_Request block(::environment_interface::srv::BlockRemove_Request::_block_type arg)
  {
    msg_.block = std::move(arg);
    return std::move(msg_);
  }

private:
  ::environment_interface::srv::BlockRemove_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::environment_interface::srv::BlockRemove_Request>()
{
  return environment_interface::srv::builder::Init_BlockRemove_Request_block();
}

}  // namespace environment_interface


namespace environment_interface
{

namespace srv
{

namespace builder
{

class Init_BlockRemove_Response_output
{
public:
  Init_BlockRemove_Response_output()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::environment_interface::srv::BlockRemove_Response output(::environment_interface::srv::BlockRemove_Response::_output_type arg)
  {
    msg_.output = std::move(arg);
    return std::move(msg_);
  }

private:
  ::environment_interface::srv::BlockRemove_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::environment_interface::srv::BlockRemove_Response>()
{
  return environment_interface::srv::builder::Init_BlockRemove_Response_output();
}

}  // namespace environment_interface

#endif  // ENVIRONMENT_INTERFACE__SRV__DETAIL__BLOCK_REMOVE__BUILDER_HPP_
