// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from whl_system:msg/AgvInfo.idl
// generated code does not contain a copyright notice

#ifndef WHL_SYSTEM__MSG__DETAIL__AGV_INFO__TRAITS_HPP_
#define WHL_SYSTEM__MSG__DETAIL__AGV_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "whl_system/msg/detail/agv_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace whl_system
{

namespace msg
{

inline void to_flow_style_yaml(
  const AgvInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: agv_move_speed
  {
    if (msg.agv_move_speed.size() == 0) {
      out << "agv_move_speed: []";
    } else {
      out << "agv_move_speed: [";
      size_t pending_items = msg.agv_move_speed.size();
      for (auto item : msg.agv_move_speed) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: q_agv_speed
  {
    if (msg.q_agv_speed.size() == 0) {
      out << "q_agv_speed: []";
    } else {
      out << "q_agv_speed: [";
      size_t pending_items = msg.q_agv_speed.size();
      for (auto item : msg.q_agv_speed) {
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
  const AgvInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: agv_move_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.agv_move_speed.size() == 0) {
      out << "agv_move_speed: []\n";
    } else {
      out << "agv_move_speed:\n";
      for (auto item : msg.agv_move_speed) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: q_agv_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.q_agv_speed.size() == 0) {
      out << "q_agv_speed: []\n";
    } else {
      out << "q_agv_speed:\n";
      for (auto item : msg.q_agv_speed) {
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

inline std::string to_yaml(const AgvInfo & msg, bool use_flow_style = false)
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
  const whl_system::msg::AgvInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  whl_system::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use whl_system::msg::to_yaml() instead")]]
inline std::string to_yaml(const whl_system::msg::AgvInfo & msg)
{
  return whl_system::msg::to_yaml(msg);
}

template<>
inline const char * data_type<whl_system::msg::AgvInfo>()
{
  return "whl_system::msg::AgvInfo";
}

template<>
inline const char * name<whl_system::msg::AgvInfo>()
{
  return "whl_system/msg/AgvInfo";
}

template<>
struct has_fixed_size<whl_system::msg::AgvInfo>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<whl_system::msg::AgvInfo>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<whl_system::msg::AgvInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // WHL_SYSTEM__MSG__DETAIL__AGV_INFO__TRAITS_HPP_
