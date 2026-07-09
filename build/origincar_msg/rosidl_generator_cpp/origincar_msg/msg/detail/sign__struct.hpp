// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from origincar_msg:msg/Sign.idl
// generated code does not contain a copyright notice

#ifndef ORIGINCAR_MSG__MSG__DETAIL__SIGN__STRUCT_HPP_
#define ORIGINCAR_MSG__MSG__DETAIL__SIGN__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__origincar_msg__msg__Sign __attribute__((deprecated))
#else
# define DEPRECATED__origincar_msg__msg__Sign __declspec(deprecated)
#endif

namespace origincar_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Sign_
{
  using Type = Sign_<ContainerAllocator>;

  explicit Sign_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sign_data = 0l;
    }
  }

  explicit Sign_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sign_data = 0l;
    }
  }

  // field types and members
  using _sign_data_type =
    int32_t;
  _sign_data_type sign_data;

  // setters for named parameter idiom
  Type & set__sign_data(
    const int32_t & _arg)
  {
    this->sign_data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    origincar_msg::msg::Sign_<ContainerAllocator> *;
  using ConstRawPtr =
    const origincar_msg::msg::Sign_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<origincar_msg::msg::Sign_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<origincar_msg::msg::Sign_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      origincar_msg::msg::Sign_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<origincar_msg::msg::Sign_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      origincar_msg::msg::Sign_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<origincar_msg::msg::Sign_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<origincar_msg::msg::Sign_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<origincar_msg::msg::Sign_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__origincar_msg__msg__Sign
    std::shared_ptr<origincar_msg::msg::Sign_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__origincar_msg__msg__Sign
    std::shared_ptr<origincar_msg::msg::Sign_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Sign_ & other) const
  {
    if (this->sign_data != other.sign_data) {
      return false;
    }
    return true;
  }
  bool operator!=(const Sign_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Sign_

// alias to use template instance with default allocator
using Sign =
  origincar_msg::msg::Sign_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace origincar_msg

#endif  // ORIGINCAR_MSG__MSG__DETAIL__SIGN__STRUCT_HPP_
