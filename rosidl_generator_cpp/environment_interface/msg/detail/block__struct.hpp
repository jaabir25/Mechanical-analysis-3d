// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from environment_interface:msg/Block.idl
// generated code does not contain a copyright notice

#ifndef ENVIRONMENT_INTERFACE__MSG__DETAIL__BLOCK__STRUCT_HPP_
#define ENVIRONMENT_INTERFACE__MSG__DETAIL__BLOCK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'color'
#include "std_msgs/msg/detail/color_rgba__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__environment_interface__msg__Block __attribute__((deprecated))
#else
# define DEPRECATED__environment_interface__msg__Block __declspec(deprecated)
#endif

namespace environment_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Block_
{
  using Type = Block_<ContainerAllocator>;

  explicit Block_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : color(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->is_support = false;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->name = "";
      this->frame_id = "";
      this->x = 0.0f;
      this->y = 0.0f;
      this->z = 0.0f;
      this->x_size = 0.0f;
      this->y_size = 0.0f;
      this->number = 0ll;
      this->is_support = false;
    }
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->frame_id = "";
      this->x = 0.0f;
      this->y = 0.0f;
      this->z = 0.0f;
      this->x_size = 0.0f;
      this->y_size = 0.0f;
      this->number = 0ll;
    }
  }

  explicit Block_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    frame_id(_alloc),
    color(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->is_support = false;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->name = "";
      this->frame_id = "";
      this->x = 0.0f;
      this->y = 0.0f;
      this->z = 0.0f;
      this->x_size = 0.0f;
      this->y_size = 0.0f;
      this->number = 0ll;
      this->is_support = false;
    }
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->frame_id = "";
      this->x = 0.0f;
      this->y = 0.0f;
      this->z = 0.0f;
      this->x_size = 0.0f;
      this->y_size = 0.0f;
      this->number = 0ll;
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _frame_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _frame_id_type frame_id;
  using _x_type =
    float;
  _x_type x;
  using _y_type =
    float;
  _y_type y;
  using _z_type =
    float;
  _z_type z;
  using _x_size_type =
    float;
  _x_size_type x_size;
  using _y_size_type =
    float;
  _y_size_type y_size;
  using _number_type =
    int64_t;
  _number_type number;
  using _is_support_type =
    bool;
  _is_support_type is_support;
  using _color_type =
    std_msgs::msg::ColorRGBA_<ContainerAllocator>;
  _color_type color;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__frame_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->frame_id = _arg;
    return *this;
  }
  Type & set__x(
    const float & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const float & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__z(
    const float & _arg)
  {
    this->z = _arg;
    return *this;
  }
  Type & set__x_size(
    const float & _arg)
  {
    this->x_size = _arg;
    return *this;
  }
  Type & set__y_size(
    const float & _arg)
  {
    this->y_size = _arg;
    return *this;
  }
  Type & set__number(
    const int64_t & _arg)
  {
    this->number = _arg;
    return *this;
  }
  Type & set__is_support(
    const bool & _arg)
  {
    this->is_support = _arg;
    return *this;
  }
  Type & set__color(
    const std_msgs::msg::ColorRGBA_<ContainerAllocator> & _arg)
  {
    this->color = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    environment_interface::msg::Block_<ContainerAllocator> *;
  using ConstRawPtr =
    const environment_interface::msg::Block_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<environment_interface::msg::Block_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<environment_interface::msg::Block_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      environment_interface::msg::Block_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<environment_interface::msg::Block_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      environment_interface::msg::Block_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<environment_interface::msg::Block_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<environment_interface::msg::Block_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<environment_interface::msg::Block_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__environment_interface__msg__Block
    std::shared_ptr<environment_interface::msg::Block_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__environment_interface__msg__Block
    std::shared_ptr<environment_interface::msg::Block_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Block_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->frame_id != other.frame_id) {
      return false;
    }
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->z != other.z) {
      return false;
    }
    if (this->x_size != other.x_size) {
      return false;
    }
    if (this->y_size != other.y_size) {
      return false;
    }
    if (this->number != other.number) {
      return false;
    }
    if (this->is_support != other.is_support) {
      return false;
    }
    if (this->color != other.color) {
      return false;
    }
    return true;
  }
  bool operator!=(const Block_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Block_

// alias to use template instance with default allocator
using Block =
  environment_interface::msg::Block_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace environment_interface

#endif  // ENVIRONMENT_INTERFACE__MSG__DETAIL__BLOCK__STRUCT_HPP_
