// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from whl_system:srv/InoutStruct.idl
// generated code does not contain a copyright notice

#ifndef WHL_SYSTEM__SRV__DETAIL__INOUT_STRUCT__TRAITS_HPP_
#define WHL_SYSTEM__SRV__DETAIL__INOUT_STRUCT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "whl_system/srv/detail/inout_struct__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'arm_info'
#include "whl_system/msg/detail/arm_info__traits.hpp"
// Member 'agv_info'
#include "whl_system/msg/detail/agv_info__traits.hpp"

namespace whl_system
{

namespace srv
{

inline void to_flow_style_yaml(
  const InoutStruct_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: robot_name
  {
    out << "robot_name: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_name, out);
    out << ", ";
  }

  // member: running_mode
  {
    out << "running_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.running_mode, out);
    out << ", ";
  }

  // member: ctrl_cmd
  {
    out << "ctrl_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.ctrl_cmd, out);
    out << ", ";
  }

  // member: enable
  {
    out << "enable: ";
    rosidl_generator_traits::value_to_yaml(msg.enable, out);
    out << ", ";
  }

  // member: arm_info
  {
    out << "arm_info: ";
    to_flow_style_yaml(msg.arm_info, out);
    out << ", ";
  }

  // member: agv_info
  {
    out << "agv_info: ";
    to_flow_style_yaml(msg.agv_info, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const InoutStruct_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: robot_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robot_name: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_name, out);
    out << "\n";
  }

  // member: running_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "running_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.running_mode, out);
    out << "\n";
  }

  // member: ctrl_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ctrl_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.ctrl_cmd, out);
    out << "\n";
  }

  // member: enable
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enable: ";
    rosidl_generator_traits::value_to_yaml(msg.enable, out);
    out << "\n";
  }

  // member: arm_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "arm_info:\n";
    to_block_style_yaml(msg.arm_info, out, indentation + 2);
  }

  // member: agv_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "agv_info:\n";
    to_block_style_yaml(msg.agv_info, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const InoutStruct_Request & msg, bool use_flow_style = false)
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

}  // namespace whl_system

namespace rosidl_generator_traits
{

[[deprecated("use whl_system::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const whl_system::srv::InoutStruct_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  whl_system::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use whl_system::srv::to_yaml() instead")]]
inline std::string to_yaml(const whl_system::srv::InoutStruct_Request & msg)
{
  return whl_system::srv::to_yaml(msg);
}

template<>
inline const char * data_type<whl_system::srv::InoutStruct_Request>()
{
  return "whl_system::srv::InoutStruct_Request";
}

template<>
inline const char * name<whl_system::srv::InoutStruct_Request>()
{
  return "whl_system/srv/InoutStruct_Request";
}

template<>
struct has_fixed_size<whl_system::srv::InoutStruct_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<whl_system::srv::InoutStruct_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<whl_system::srv::InoutStruct_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'q_arm_info'
// Member 'exp_arm_info'
// already included above
// #include "whl_system/msg/detail/arm_info__traits.hpp"

namespace whl_system
{

namespace srv
{

inline void to_flow_style_yaml(
  const InoutStruct_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: motor_on
  {
    out << "motor_on: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_on, out);
    out << ", ";
  }

  // member: running_mode
  {
    out << "running_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.running_mode, out);
    out << ", ";
  }

  // member: ctrl_cmd
  {
    out << "ctrl_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.ctrl_cmd, out);
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

  // member: q_agv_peed
  {
    if (msg.q_agv_peed.size() == 0) {
      out << "q_agv_peed: []";
    } else {
      out << "q_agv_peed: [";
      size_t pending_items = msg.q_agv_peed.size();
      for (auto item : msg.q_agv_peed) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: exp_agv_peed
  {
    if (msg.exp_agv_peed.size() == 0) {
      out << "exp_agv_peed: []";
    } else {
      out << "exp_agv_peed: [";
      size_t pending_items = msg.exp_agv_peed.size();
      for (auto item : msg.exp_agv_peed) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: robot_pos
  {
    if (msg.robot_pos.size() == 0) {
      out << "robot_pos: []";
    } else {
      out << "robot_pos: [";
      size_t pending_items = msg.robot_pos.size();
      for (auto item : msg.robot_pos) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: q_arm_info
  {
    out << "q_arm_info: ";
    to_flow_style_yaml(msg.q_arm_info, out);
    out << ", ";
  }

  // member: exp_arm_info
  {
    out << "exp_arm_info: ";
    to_flow_style_yaml(msg.exp_arm_info, out);
    out << ", ";
  }

  // member: step
  {
    out << "step: ";
    rosidl_generator_traits::value_to_yaml(msg.step, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const InoutStruct_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: motor_on
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor_on: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_on, out);
    out << "\n";
  }

  // member: running_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "running_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.running_mode, out);
    out << "\n";
  }

  // member: ctrl_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ctrl_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.ctrl_cmd, out);
    out << "\n";
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

  // member: q_agv_peed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.q_agv_peed.size() == 0) {
      out << "q_agv_peed: []\n";
    } else {
      out << "q_agv_peed:\n";
      for (auto item : msg.q_agv_peed) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: exp_agv_peed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.exp_agv_peed.size() == 0) {
      out << "exp_agv_peed: []\n";
    } else {
      out << "exp_agv_peed:\n";
      for (auto item : msg.exp_agv_peed) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: robot_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.robot_pos.size() == 0) {
      out << "robot_pos: []\n";
    } else {
      out << "robot_pos:\n";
      for (auto item : msg.robot_pos) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: q_arm_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "q_arm_info:\n";
    to_block_style_yaml(msg.q_arm_info, out, indentation + 2);
  }

  // member: exp_arm_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "exp_arm_info:\n";
    to_block_style_yaml(msg.exp_arm_info, out, indentation + 2);
  }

  // member: step
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "step: ";
    rosidl_generator_traits::value_to_yaml(msg.step, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const InoutStruct_Response & msg, bool use_flow_style = false)
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

}  // namespace whl_system

namespace rosidl_generator_traits
{

[[deprecated("use whl_system::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const whl_system::srv::InoutStruct_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  whl_system::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use whl_system::srv::to_yaml() instead")]]
inline std::string to_yaml(const whl_system::srv::InoutStruct_Response & msg)
{
  return whl_system::srv::to_yaml(msg);
}

template<>
inline const char * data_type<whl_system::srv::InoutStruct_Response>()
{
  return "whl_system::srv::InoutStruct_Response";
}

template<>
inline const char * name<whl_system::srv::InoutStruct_Response>()
{
  return "whl_system/srv/InoutStruct_Response";
}

template<>
struct has_fixed_size<whl_system::srv::InoutStruct_Response>
  : std::integral_constant<bool, has_fixed_size<whl_system::msg::ArmInfo>::value> {};

template<>
struct has_bounded_size<whl_system::srv::InoutStruct_Response>
  : std::integral_constant<bool, has_bounded_size<whl_system::msg::ArmInfo>::value> {};

template<>
struct is_message<whl_system::srv::InoutStruct_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<whl_system::srv::InoutStruct>()
{
  return "whl_system::srv::InoutStruct";
}

template<>
inline const char * name<whl_system::srv::InoutStruct>()
{
  return "whl_system/srv/InoutStruct";
}

template<>
struct has_fixed_size<whl_system::srv::InoutStruct>
  : std::integral_constant<
    bool,
    has_fixed_size<whl_system::srv::InoutStruct_Request>::value &&
    has_fixed_size<whl_system::srv::InoutStruct_Response>::value
  >
{
};

template<>
struct has_bounded_size<whl_system::srv::InoutStruct>
  : std::integral_constant<
    bool,
    has_bounded_size<whl_system::srv::InoutStruct_Request>::value &&
    has_bounded_size<whl_system::srv::InoutStruct_Response>::value
  >
{
};

template<>
struct is_service<whl_system::srv::InoutStruct>
  : std::true_type
{
};

template<>
struct is_service_request<whl_system::srv::InoutStruct_Request>
  : std::true_type
{
};

template<>
struct is_service_response<whl_system::srv::InoutStruct_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // WHL_SYSTEM__SRV__DETAIL__INOUT_STRUCT__TRAITS_HPP_
