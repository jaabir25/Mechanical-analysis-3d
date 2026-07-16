// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from environment_interface:srv/BlockRemoveAll.idl
// generated code does not contain a copyright notice

#ifndef ENVIRONMENT_INTERFACE__SRV__DETAIL__BLOCK_REMOVE_ALL__STRUCT_HPP_
#define ENVIRONMENT_INTERFACE__SRV__DETAIL__BLOCK_REMOVE_ALL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'blocks'
#include "moveit_msgs/msg/detail/collision_object__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__environment_interface__srv__BlockRemoveAll_Request __attribute__((deprecated))
#else
# define DEPRECATED__environment_interface__srv__BlockRemoveAll_Request __declspec(deprecated)
#endif

namespace environment_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct BlockRemoveAll_Request_
{
  using Type = BlockRemoveAll_Request_<ContainerAllocator>;

  explicit BlockRemoveAll_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit BlockRemoveAll_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _blocks_type =
    std::vector<moveit_msgs::msg::CollisionObject_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<moveit_msgs::msg::CollisionObject_<ContainerAllocator>>>;
  _blocks_type blocks;

  // setters for named parameter idiom
  Type & set__blocks(
    const std::vector<moveit_msgs::msg::CollisionObject_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<moveit_msgs::msg::CollisionObject_<ContainerAllocator>>> & _arg)
  {
    this->blocks = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    environment_interface::srv::BlockRemoveAll_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const environment_interface::srv::BlockRemoveAll_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<environment_interface::srv::BlockRemoveAll_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<environment_interface::srv::BlockRemoveAll_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      environment_interface::srv::BlockRemoveAll_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<environment_interface::srv::BlockRemoveAll_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      environment_interface::srv::BlockRemoveAll_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<environment_interface::srv::BlockRemoveAll_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<environment_interface::srv::BlockRemoveAll_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<environment_interface::srv::BlockRemoveAll_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__environment_interface__srv__BlockRemoveAll_Request
    std::shared_ptr<environment_interface::srv::BlockRemoveAll_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__environment_interface__srv__BlockRemoveAll_Request
    std::shared_ptr<environment_interface::srv::BlockRemoveAll_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BlockRemoveAll_Request_ & other) const
  {
    if (this->blocks != other.blocks) {
      return false;
    }
    return true;
  }
  bool operator!=(const BlockRemoveAll_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BlockRemoveAll_Request_

// alias to use template instance with default allocator
using BlockRemoveAll_Request =
  environment_interface::srv::BlockRemoveAll_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace environment_interface


#ifndef _WIN32
# define DEPRECATED__environment_interface__srv__BlockRemoveAll_Response __attribute__((deprecated))
#else
# define DEPRECATED__environment_interface__srv__BlockRemoveAll_Response __declspec(deprecated)
#endif

namespace environment_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct BlockRemoveAll_Response_
{
  using Type = BlockRemoveAll_Response_<ContainerAllocator>;

  explicit BlockRemoveAll_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->output = 0ll;
    }
  }

  explicit BlockRemoveAll_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    environment_interface::srv::BlockRemoveAll_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const environment_interface::srv::BlockRemoveAll_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<environment_interface::srv::BlockRemoveAll_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<environment_interface::srv::BlockRemoveAll_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      environment_interface::srv::BlockRemoveAll_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<environment_interface::srv::BlockRemoveAll_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      environment_interface::srv::BlockRemoveAll_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<environment_interface::srv::BlockRemoveAll_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<environment_interface::srv::BlockRemoveAll_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<environment_interface::srv::BlockRemoveAll_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__environment_interface__srv__BlockRemoveAll_Response
    std::shared_ptr<environment_interface::srv::BlockRemoveAll_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__environment_interface__srv__BlockRemoveAll_Response
    std::shared_ptr<environment_interface::srv::BlockRemoveAll_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BlockRemoveAll_Response_ & other) const
  {
    if (this->output != other.output) {
      return false;
    }
    return true;
  }
  bool operator!=(const BlockRemoveAll_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BlockRemoveAll_Response_

// alias to use template instance with default allocator
using BlockRemoveAll_Response =
  environment_interface::srv::BlockRemoveAll_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace environment_interface

namespace environment_interface
{

namespace srv
{

struct BlockRemoveAll
{
  using Request = environment_interface::srv::BlockRemoveAll_Request;
  using Response = environment_interface::srv::BlockRemoveAll_Response;
};

}  // namespace srv

}  // namespace environment_interface

#endif  // ENVIRONMENT_INTERFACE__SRV__DETAIL__BLOCK_REMOVE_ALL__STRUCT_HPP_
