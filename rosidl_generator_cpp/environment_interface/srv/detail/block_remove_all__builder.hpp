// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from environment_interface:srv/BlockRemoveAll.idl
// generated code does not contain a copyright notice

#ifndef ENVIRONMENT_INTERFACE__SRV__DETAIL__BLOCK_REMOVE_ALL__BUILDER_HPP_
#define ENVIRONMENT_INTERFACE__SRV__DETAIL__BLOCK_REMOVE_ALL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "environment_interface/srv/detail/block_remove_all__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace environment_interface
{

namespace srv
{

namespace builder
{

class Init_BlockRemoveAll_Request_blocks
{
public:
  Init_BlockRemoveAll_Request_blocks()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::environment_interface::srv::BlockRemoveAll_Request blocks(::environment_interface::srv::BlockRemoveAll_Request::_blocks_type arg)
  {
    msg_.blocks = std::move(arg);
    return std::move(msg_);
  }

private:
  ::environment_interface::srv::BlockRemoveAll_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::environment_interface::srv::BlockRemoveAll_Request>()
{
  return environment_interface::srv::builder::Init_BlockRemoveAll_Request_blocks();
}

}  // namespace environment_interface


namespace environment_interface
{

namespace srv
{

namespace builder
{

class Init_BlockRemoveAll_Response_output
{
public:
  Init_BlockRemoveAll_Response_output()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::environment_interface::srv::BlockRemoveAll_Response output(::environment_interface::srv::BlockRemoveAll_Response::_output_type arg)
  {
    msg_.output = std::move(arg);
    return std::move(msg_);
  }

private:
  ::environment_interface::srv::BlockRemoveAll_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::environment_interface::srv::BlockRemoveAll_Response>()
{
  return environment_interface::srv::builder::Init_BlockRemoveAll_Response_output();
}

}  // namespace environment_interface

#endif  // ENVIRONMENT_INTERFACE__SRV__DETAIL__BLOCK_REMOVE_ALL__BUILDER_HPP_
