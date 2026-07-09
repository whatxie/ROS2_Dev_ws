// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from origincar_msg:msg/Sign.idl
// generated code does not contain a copyright notice

#ifndef ORIGINCAR_MSG__MSG__DETAIL__SIGN__BUILDER_HPP_
#define ORIGINCAR_MSG__MSG__DETAIL__SIGN__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "origincar_msg/msg/detail/sign__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace origincar_msg
{

namespace msg
{

namespace builder
{

class Init_Sign_sign_data
{
public:
  Init_Sign_sign_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::origincar_msg::msg::Sign sign_data(::origincar_msg::msg::Sign::_sign_data_type arg)
  {
    msg_.sign_data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::origincar_msg::msg::Sign msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::origincar_msg::msg::Sign>()
{
  return origincar_msg::msg::builder::Init_Sign_sign_data();
}

}  // namespace origincar_msg

#endif  // ORIGINCAR_MSG__MSG__DETAIL__SIGN__BUILDER_HPP_
