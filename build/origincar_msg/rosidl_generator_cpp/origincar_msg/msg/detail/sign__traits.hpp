// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from origincar_msg:msg/Sign.idl
// generated code does not contain a copyright notice

#ifndef ORIGINCAR_MSG__MSG__DETAIL__SIGN__TRAITS_HPP_
#define ORIGINCAR_MSG__MSG__DETAIL__SIGN__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "origincar_msg/msg/detail/sign__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace origincar_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const Sign & msg,
  std::ostream & out)
{
  out << "{";
  // member: sign_data
  {
    out << "sign_data: ";
    rosidl_generator_traits::value_to_yaml(msg.sign_data, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Sign & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: sign_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sign_data: ";
    rosidl_generator_traits::value_to_yaml(msg.sign_data, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Sign & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace origincar_msg

namespace rosidl_generator_traits
{

[[deprecated("use origincar_msg::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const origincar_msg::msg::Sign & msg,
  std::ostream & out, size_t indentation = 0)
{
  origincar_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use origincar_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const origincar_msg::msg::Sign & msg)
{
  return origincar_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<origincar_msg::msg::Sign>()
{
  return "origincar_msg::msg::Sign";
}

template<>
inline const char * name<origincar_msg::msg::Sign>()
{
  return "origincar_msg/msg/Sign";
}

template<>
struct has_fixed_size<origincar_msg::msg::Sign>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<origincar_msg::msg::Sign>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<origincar_msg::msg::Sign>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ORIGINCAR_MSG__MSG__DETAIL__SIGN__TRAITS_HPP_
