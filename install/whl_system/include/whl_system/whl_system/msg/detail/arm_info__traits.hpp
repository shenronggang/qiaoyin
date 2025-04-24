// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from whl_system:msg/ArmInfo.idl
// generated code does not contain a copyright notice

#ifndef WHL_SYSTEM__MSG__DETAIL__ARM_INFO__TRAITS_HPP_
#define WHL_SYSTEM__MSG__DETAIL__ARM_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "whl_system/msg/detail/arm_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace whl_system
{

namespace msg
{

inline void to_flow_style_yaml(
  const ArmInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: joints
  {
    if (msg.joints.size() == 0) {
      out << "joints: []";
    } else {
      out << "joints: [";
      size_t pending_items = msg.joints.size();
      for (auto item : msg.joints) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: pos
  {
    if (msg.pos.size() == 0) {
      out << "pos: []";
    } else {
      out << "pos: [";
      size_t pending_items = msg.pos.size();
      for (auto item : msg.pos) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: gripper
  {
    if (msg.gripper.size() == 0) {
      out << "gripper: []";
    } else {
      out << "gripper: [";
      size_t pending_items = msg.gripper.size();
      for (auto item : msg.gripper) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: arm_speed
  {
    if (msg.arm_speed.size() == 0) {
      out << "arm_speed: []";
    } else {
      out << "arm_speed: [";
      size_t pending_items = msg.arm_speed.size();
      for (auto item : msg.arm_speed) {
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
  const ArmInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: joints
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.joints.size() == 0) {
      out << "joints: []\n";
    } else {
      out << "joints:\n";
      for (auto item : msg.joints) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.pos.size() == 0) {
      out << "pos: []\n";
    } else {
      out << "pos:\n";
      for (auto item : msg.pos) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: gripper
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.gripper.size() == 0) {
      out << "gripper: []\n";
    } else {
      out << "gripper:\n";
      for (auto item : msg.gripper) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: arm_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.arm_speed.size() == 0) {
      out << "arm_speed: []\n";
    } else {
      out << "arm_speed:\n";
      for (auto item : msg.arm_speed) {
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

}  // namespace whl_system

namespace rosidl_generator_traits
{

[[deprecated("use whl_system::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const whl_system::msg::ArmInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  whl_system::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use whl_system::msg::to_yaml() instead")]]
inline std::string to_yaml(const whl_system::msg::ArmInfo & msg)
{
  return whl_system::msg::to_yaml(msg);
}

template<>
inline const char * data_type<whl_system::msg::ArmInfo>()
{
  return "whl_system::msg::ArmInfo";
}

template<>
inline const char * name<whl_system::msg::ArmInfo>()
{
  return "whl_system/msg/ArmInfo";
}

template<>
struct has_fixed_size<whl_system::msg::ArmInfo>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<whl_system::msg::ArmInfo>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<whl_system::msg::ArmInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // WHL_SYSTEM__MSG__DETAIL__ARM_INFO__TRAITS_HPP_
