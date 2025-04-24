// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from driver:srv/ArmEnable.idl
// generated code does not contain a copyright notice

#ifndef DRIVER__SRV__DETAIL__ARM_ENABLE__TRAITS_HPP_
#define DRIVER__SRV__DETAIL__ARM_ENABLE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "driver/srv/detail/arm_enable__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace driver
{

namespace srv
{

inline void to_flow_style_yaml(
  const ArmEnable_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: enable
  {
    out << "enable: ";
    rosidl_generator_traits::value_to_yaml(msg.enable, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ArmEnable_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: enable
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enable: ";
    rosidl_generator_traits::value_to_yaml(msg.enable, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ArmEnable_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace driver

namespace rosidl_generator_traits
{

[[deprecated("use driver::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const driver::srv::ArmEnable_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  driver::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use driver::srv::to_yaml() instead")]]
inline std::string to_yaml(const driver::srv::ArmEnable_Request & msg)
{
  return driver::srv::to_yaml(msg);
}

template<>
inline const char * data_type<driver::srv::ArmEnable_Request>()
{
  return "driver::srv::ArmEnable_Request";
}

template<>
inline const char * name<driver::srv::ArmEnable_Request>()
{
  return "driver/srv/ArmEnable_Request";
}

template<>
struct has_fixed_size<driver::srv::ArmEnable_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<driver::srv::ArmEnable_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<driver::srv::ArmEnable_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace driver
{

namespace srv
{

inline void to_flow_style_yaml(
  const ArmEnable_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ArmEnable_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ArmEnable_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace driver

namespace rosidl_generator_traits
{

[[deprecated("use driver::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const driver::srv::ArmEnable_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  driver::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use driver::srv::to_yaml() instead")]]
inline std::string to_yaml(const driver::srv::ArmEnable_Response & msg)
{
  return driver::srv::to_yaml(msg);
}

template<>
inline const char * data_type<driver::srv::ArmEnable_Response>()
{
  return "driver::srv::ArmEnable_Response";
}

template<>
inline const char * name<driver::srv::ArmEnable_Response>()
{
  return "driver/srv/ArmEnable_Response";
}

template<>
struct has_fixed_size<driver::srv::ArmEnable_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<driver::srv::ArmEnable_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<driver::srv::ArmEnable_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<driver::srv::ArmEnable>()
{
  return "driver::srv::ArmEnable";
}

template<>
inline const char * name<driver::srv::ArmEnable>()
{
  return "driver/srv/ArmEnable";
}

template<>
struct has_fixed_size<driver::srv::ArmEnable>
  : std::integral_constant<
    bool,
    has_fixed_size<driver::srv::ArmEnable_Request>::value &&
    has_fixed_size<driver::srv::ArmEnable_Response>::value
  >
{
};

template<>
struct has_bounded_size<driver::srv::ArmEnable>
  : std::integral_constant<
    bool,
    has_bounded_size<driver::srv::ArmEnable_Request>::value &&
    has_bounded_size<driver::srv::ArmEnable_Response>::value
  >
{
};

template<>
struct is_service<driver::srv::ArmEnable>
  : std::true_type
{
};

template<>
struct is_service_request<driver::srv::ArmEnable_Request>
  : std::true_type
{
};

template<>
struct is_service_response<driver::srv::ArmEnable_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // DRIVER__SRV__DETAIL__ARM_ENABLE__TRAITS_HPP_
