// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from environment_interface:srv/BlockCreate.idl
// generated code does not contain a copyright notice

#ifndef ENVIRONMENT_INTERFACE__SRV__DETAIL__BLOCK_CREATE__STRUCT_HPP_
#define ENVIRONMENT_INTERFACE__SRV__DETAIL__BLOCK_CREATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'block'
#include "environment_interface/msg/detail/block__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__environment_interface__srv__BlockCreate_Request __attribute__((deprecated))
#else
# define DEPRECATED__environment_interface__srv__BlockCreate_Request __declspec(deprecated)
#endif

namespace environment_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct BlockCreate_Request_
{
  using Type = BlockCreate_Request_<ContainerAllocator>;

  explicit BlockCreate_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : block(_init)
  {
    (void)_init;
  }

  explicit BlockCreate_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : block(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _block_type =
    environment_interface::msg::Block_<ContainerAllocator>;
  _block_type block;

  // setters for named parameter idiom
  Type & set__block(
    const environment_interface::msg::Block_<ContainerAllocator> & _arg)
  {
    this->block = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    environment_interface::srv::BlockCreate_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const environment_interface::srv::BlockCreate_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<environment_interface::srv::BlockCreate_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<environment_interface::srv::BlockCreate_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      environment_interface::srv::BlockCreate_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<environment_interface::srv::BlockCreate_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      environment_interface::srv::BlockCreate_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<environment_interface::srv::BlockCreate_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<environment_interface::srv::BlockCreate_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<environment_interface::srv::BlockCreate_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__environment_interface__srv__BlockCreate_Request
    std::shared_ptr<environment_interface::srv::BlockCreate_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__environment_interface__srv__BlockCreate_Request
    std::shared_ptr<environment_interface::srv::BlockCreate_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BlockCreate_Request_ & other) const
  {
    if (this->block != other.block) {
      return false;
    }
    return true;
  }
  bool operator!=(const BlockCreate_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BlockCreate_Request_

// alias to use template instance with default allocator
using BlockCreate_Request =
  environment_interface::srv::BlockCreate_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace environment_interface


#ifndef _WIN32
# define DEPRECATED__environment_interface__srv__BlockCreate_Response __attribute__((deprecated))
#else
# define DEPRECATED__environment_interface__srv__BlockCreate_Response __declspec(deprecated)
#endif

namespace environment_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct BlockCreate_Response_
{
  using Type = BlockCreate_Response_<ContainerAllocator>;

  explicit BlockCreate_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->output = 0ll;
    }
  }

  explicit BlockCreate_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->output = 0ll;
    }
  }

  // field types and members
  using _output_type =
    int64_t;
  _output_type output;

  // setters for named parameter idiom
  Type & set__output(
    const int64_t & _arg)
  {
    this->output = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    environment_interface::srv::BlockCreate_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const environment_interface::srv::BlockCreate_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<environment_interface::srv::BlockCreate_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<environment_interface::srv::BlockCreate_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      environment_interface::srv::BlockCreate_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<environment_interface::srv::BlockCreate_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      environment_interface::srv::BlockCreate_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<environment_interface::srv::BlockCreate_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<environment_interface::srv::BlockCreate_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<environment_interface::srv::BlockCreate_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__environment_interface__srv__BlockCreate_Response
    std::shared_ptr<environment_interface::srv::BlockCreate_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__environment_interface__srv__BlockCreate_Response
    std::shared_ptr<environment_interface::srv::BlockCreate_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BlockCreate_Response_ & other) const
  {
    if (this->output != other.output) {
      return false;
    }
    return true;
  }
  bool operator!=(const BlockCreate_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BlockCreate_Response_

// alias to use template instance with default allocator
using BlockCreate_Response =
  environment_interface::srv::BlockCreate_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace environment_interface

namespace environment_interface
{

namespace srv
{

struct BlockCreate
{
  using Request = environment_interface::srv::BlockCreate_Request;
  using Response = environment_interface::srv::BlockCreate_Response;
};

}  // namespace srv

}  // namespace environment_interface

#endif  // ENVIRONMENT_INTERFACE__SRV__DETAIL__BLOCK_CREATE__STRUCT_HPP_
