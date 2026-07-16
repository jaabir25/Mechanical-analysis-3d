// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from environment_interface:srv/GetBlockColor.idl
// generated code does not contain a copyright notice

#ifndef ENVIRONMENT_INTERFACE__SRV__DETAIL__GET_BLOCK_COLOR__STRUCT_HPP_
#define ENVIRONMENT_INTERFACE__SRV__DETAIL__GET_BLOCK_COLOR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__environment_interface__srv__GetBlockColor_Request __attribute__((deprecated))
#else
# define DEPRECATED__environment_interface__srv__GetBlockColor_Request __declspec(deprecated)
#endif

namespace environment_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetBlockColor_Request_
{
  using Type = GetBlockColor_Request_<ContainerAllocator>;

  explicit GetBlockColor_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->index = 0ll;
    }
  }

  explicit GetBlockColor_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->index = 0ll;
    }
  }

  // field types and members
  using _index_type =
    int64_t;
  _index_type index;

  // setters for named parameter idiom
  Type & set__index(
    const int64_t & _arg)
  {
    this->index = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    environment_interface::srv::GetBlockColor_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const environment_interface::srv::GetBlockColor_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<environment_interface::srv::GetBlockColor_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<environment_interface::srv::GetBlockColor_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      environment_interface::srv::GetBlockColor_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<environment_interface::srv::GetBlockColor_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      environment_interface::srv::GetBlockColor_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<environment_interface::srv::GetBlockColor_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<environment_interface::srv::GetBlockColor_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<environment_interface::srv::GetBlockColor_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__environment_interface__srv__GetBlockColor_Request
    std::shared_ptr<environment_interface::srv::GetBlockColor_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__environment_interface__srv__GetBlockColor_Request
    std::shared_ptr<environment_interface::srv::GetBlockColor_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetBlockColor_Request_ & other) const
  {
    if (this->index != other.index) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetBlockColor_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetBlockColor_Request_

// alias to use template instance with default allocator
using GetBlockColor_Request =
  environment_interface::srv::GetBlockColor_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace environment_interface


// Include directives for member types
// Member 'color'
#include "std_msgs/msg/detail/color_rgba__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__environment_interface__srv__GetBlockColor_Response __attribute__((deprecated))
#else
# define DEPRECATED__environment_interface__srv__GetBlockColor_Response __declspec(deprecated)
#endif

namespace environment_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetBlockColor_Response_
{
  using Type = GetBlockColor_Response_<ContainerAllocator>;

  explicit GetBlockColor_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : color(_init)
  {
    (void)_init;
  }

  explicit GetBlockColor_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : color(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _color_type =
    std_msgs::msg::ColorRGBA_<ContainerAllocator>;
  _color_type color;

  // setters for named parameter idiom
  Type & set__color(
    const std_msgs::msg::ColorRGBA_<ContainerAllocator> & _arg)
  {
    this->color = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    environment_interface::srv::GetBlockColor_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const environment_interface::srv::GetBlockColor_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<environment_interface::srv::GetBlockColor_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<environment_interface::srv::GetBlockColor_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      environment_interface::srv::GetBlockColor_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<environment_interface::srv::GetBlockColor_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      environment_interface::srv::GetBlockColor_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<environment_interface::srv::GetBlockColor_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<environment_interface::srv::GetBlockColor_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<environment_interface::srv::GetBlockColor_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__environment_interface__srv__GetBlockColor_Response
    std::shared_ptr<environment_interface::srv::GetBlockColor_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__environment_interface__srv__GetBlockColor_Response
    std::shared_ptr<environment_interface::srv::GetBlockColor_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetBlockColor_Response_ & other) const
  {
    if (this->color != other.color) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetBlockColor_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetBlockColor_Response_

// alias to use template instance with default allocator
using GetBlockColor_Response =
  environment_interface::srv::GetBlockColor_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace environment_interface

namespace environment_interface
{

namespace srv
{

struct GetBlockColor
{
  using Request = environment_interface::srv::GetBlockColor_Request;
  using Response = environment_interface::srv::GetBlockColor_Response;
};

}  // namespace srv

}  // namespace environment_interface

#endif  // ENVIRONMENT_INTERFACE__SRV__DETAIL__GET_BLOCK_COLOR__STRUCT_HPP_
