// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from driver:msg/GripperInfo.idl
// generated code does not contain a copyright notice

#ifndef DRIVER__MSG__DETAIL__GRIPPER_INFO__TRAITS_HPP_
#define DRIVER__MSG__DETAIL__GRIPPER_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "driver/msg/detail/gripper_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace driver
{

namespace msg
{

inline void to_flow_style_yaml(
  const GripperInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: left_gripper
  {
    out << "left_gripper: ";
    rosidl_generator_traits::value_to_yaml(msg.left_gripper, out);
    out << ", ";
  }

  // member: right_gripper
  {
    out << "right_gripper: ";
    rosidl_generator_traits::value_to_yaml(msg.right_gripper, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GripperInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: left_gripper
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_gripper: ";
    rosidl_generator_traits::value_to_yaml(msg.left_gripper, out);
    out << "\n";
  }

  // member: right_gripper
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_gripper: ";
    rosidl_generator_traits::value_to_yaml(msg.right_gripper, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GripperInfo & msg, bool use_flow_style = false)
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

}  // namespace driver

namespace rosidl_generator_traits
{

[[deprecated("use driver::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const driver::msg::GripperInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  driver::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use driver::msg::to_yaml() instead")]]
inline std::string to_yaml(const driver::msg::GripperInfo & msg)
{
  return driver::msg::to_yaml(msg);
}

template<>
inline const char * data_type<driver::msg::GripperInfo>()
{
  return "driver::msg::GripperInfo";
}

template<>
inline const char * name<driver::msg::GripperInfo>()
{
  return "driver/msg/GripperInfo";
}

template<>
struct has_fixed_size<driver::msg::GripperInfo>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<driver::msg::GripperInfo>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<driver::msg::GripperInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DRIVER__MSG__DETAIL__GRIPPER_INFO__TRAITS_HPP_
