// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from driver:msg/ArmInfo.idl
// generated code does not contain a copyright notice

#ifndef DRIVER__MSG__DETAIL__ARM_INFO__TRAITS_HPP_
#define DRIVER__MSG__DETAIL__ARM_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "driver/msg/detail/arm_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace driver
{

namespace msg
{

inline void to_flow_style_yaml(
  const ArmInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: left_arm_joints
  {
    if (msg.left_arm_joints.size() == 0) {
      out << "left_arm_joints: []";
    } else {
      out << "left_arm_joints: [";
      size_t pending_items = msg.left_arm_joints.size();
      for (auto item : msg.left_arm_joints) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: right_arm_joints
  {
    if (msg.right_arm_joints.size() == 0) {
      out << "right_arm_joints: []";
    } else {
      out << "right_arm_joints: [";
      size_t pending_items = msg.right_arm_joints.size();
      for (auto item : msg.right_arm_joints) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

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
    out << ", ";
  }

  // member: motor_on
  {
    out << "motor_on: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_on, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ArmInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: left_arm_joints
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.left_arm_joints.size() == 0) {
      out << "left_arm_joints: []\n";
    } else {
      out << "left_arm_joints:\n";
      for (auto item : msg.left_arm_joints) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: right_arm_joints
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.right_arm_joints.size() == 0) {
      out << "right_arm_joints: []\n";
    } else {
      out << "right_arm_joints:\n";
      for (auto item : msg.right_arm_joints) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

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

  // member: motor_on
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor_on: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_on, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ArmInfo & msg, bool use_flow_style = false)
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
  const driver::msg::ArmInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  driver::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use driver::msg::to_yaml() instead")]]
inline std::string to_yaml(const driver::msg::ArmInfo & msg)
{
  return driver::msg::to_yaml(msg);
}

template<>
inline const char * data_type<driver::msg::ArmInfo>()
{
  return "driver::msg::ArmInfo";
}

template<>
inline const char * name<driver::msg::ArmInfo>()
{
  return "driver/msg/ArmInfo";
}

template<>
struct has_fixed_size<driver::msg::ArmInfo>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<driver::msg::ArmInfo>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<driver::msg::ArmInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DRIVER__MSG__DETAIL__ARM_INFO__TRAITS_HPP_
