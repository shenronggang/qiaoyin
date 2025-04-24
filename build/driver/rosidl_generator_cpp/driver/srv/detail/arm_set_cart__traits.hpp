// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from driver:srv/ArmSetCart.idl
// generated code does not contain a copyright notice

#ifndef DRIVER__SRV__DETAIL__ARM_SET_CART__TRAITS_HPP_
#define DRIVER__SRV__DETAIL__ARM_SET_CART__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "driver/srv/detail/arm_set_cart__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace driver
{

namespace srv
{

inline void to_flow_style_yaml(
  const ArmSetCart_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: left_arm_cart
  {
    if (msg.left_arm_cart.size() == 0) {
      out << "left_arm_cart: []";
    } else {
      out << "left_arm_cart: [";
      size_t pending_items = msg.left_arm_cart.size();
      for (auto item : msg.left_arm_cart) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: right_arm_cart
  {
    if (msg.right_arm_cart.size() == 0) {
      out << "right_arm_cart: []";
    } else {
      out << "right_arm_cart: [";
      size_t pending_items = msg.right_arm_cart.size();
      for (auto item : msg.right_arm_cart) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: speed
  {
    if (msg.speed.size() == 0) {
      out << "speed: []";
    } else {
      out << "speed: [";
      size_t pending_items = msg.speed.size();
      for (auto item : msg.speed) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ArmSetCart_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: left_arm_cart
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.left_arm_cart.size() == 0) {
      out << "left_arm_cart: []\n";
    } else {
      out << "left_arm_cart:\n";
      for (auto item : msg.left_arm_cart) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: right_arm_cart
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.right_arm_cart.size() == 0) {
      out << "right_arm_cart: []\n";
    } else {
      out << "right_arm_cart:\n";
      for (auto item : msg.right_arm_cart) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.speed.size() == 0) {
      out << "speed: []\n";
    } else {
      out << "speed:\n";
      for (auto item : msg.speed) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ArmSetCart_Request & msg, bool use_flow_style = false)
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
  const driver::srv::ArmSetCart_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  driver::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use driver::srv::to_yaml() instead")]]
inline std::string to_yaml(const driver::srv::ArmSetCart_Request & msg)
{
  return driver::srv::to_yaml(msg);
}

template<>
inline const char * data_type<driver::srv::ArmSetCart_Request>()
{
  return "driver::srv::ArmSetCart_Request";
}

template<>
inline const char * name<driver::srv::ArmSetCart_Request>()
{
  return "driver/srv/ArmSetCart_Request";
}

template<>
struct has_fixed_size<driver::srv::ArmSetCart_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<driver::srv::ArmSetCart_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<driver::srv::ArmSetCart_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace driver
{

namespace srv
{

inline void to_flow_style_yaml(
  const ArmSetCart_Response & msg,
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
  const ArmSetCart_Response & msg,
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

inline std::string to_yaml(const ArmSetCart_Response & msg, bool use_flow_style = false)
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
  const driver::srv::ArmSetCart_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  driver::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use driver::srv::to_yaml() instead")]]
inline std::string to_yaml(const driver::srv::ArmSetCart_Response & msg)
{
  return driver::srv::to_yaml(msg);
}

template<>
inline const char * data_type<driver::srv::ArmSetCart_Response>()
{
  return "driver::srv::ArmSetCart_Response";
}

template<>
inline const char * name<driver::srv::ArmSetCart_Response>()
{
  return "driver/srv/ArmSetCart_Response";
}

template<>
struct has_fixed_size<driver::srv::ArmSetCart_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<driver::srv::ArmSetCart_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<driver::srv::ArmSetCart_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<driver::srv::ArmSetCart>()
{
  return "driver::srv::ArmSetCart";
}

template<>
inline const char * name<driver::srv::ArmSetCart>()
{
  return "driver/srv/ArmSetCart";
}

template<>
struct has_fixed_size<driver::srv::ArmSetCart>
  : std::integral_constant<
    bool,
    has_fixed_size<driver::srv::ArmSetCart_Request>::value &&
    has_fixed_size<driver::srv::ArmSetCart_Response>::value
  >
{
};

template<>
struct has_bounded_size<driver::srv::ArmSetCart>
  : std::integral_constant<
    bool,
    has_bounded_size<driver::srv::ArmSetCart_Request>::value &&
    has_bounded_size<driver::srv::ArmSetCart_Response>::value
  >
{
};

template<>
struct is_service<driver::srv::ArmSetCart>
  : std::true_type
{
};

template<>
struct is_service_request<driver::srv::ArmSetCart_Request>
  : std::true_type
{
};

template<>
struct is_service_response<driver::srv::ArmSetCart_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // DRIVER__SRV__DETAIL__ARM_SET_CART__TRAITS_HPP_
