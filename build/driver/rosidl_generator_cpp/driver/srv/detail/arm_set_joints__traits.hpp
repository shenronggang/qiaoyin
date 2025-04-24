// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from driver:srv/ArmSetJoints.idl
// generated code does not contain a copyright notice

#ifndef DRIVER__SRV__DETAIL__ARM_SET_JOINTS__TRAITS_HPP_
#define DRIVER__SRV__DETAIL__ARM_SET_JOINTS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "driver/srv/detail/arm_set_joints__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace driver
{

namespace srv
{

inline void to_flow_style_yaml(
  const ArmSetJoints_Request & msg,
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
  const ArmSetJoints_Request & msg,
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

inline std::string to_yaml(const ArmSetJoints_Request & msg, bool use_flow_style = false)
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
  const driver::srv::ArmSetJoints_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  driver::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use driver::srv::to_yaml() instead")]]
inline std::string to_yaml(const driver::srv::ArmSetJoints_Request & msg)
{
  return driver::srv::to_yaml(msg);
}

template<>
inline const char * data_type<driver::srv::ArmSetJoints_Request>()
{
  return "driver::srv::ArmSetJoints_Request";
}

template<>
inline const char * name<driver::srv::ArmSetJoints_Request>()
{
  return "driver/srv/ArmSetJoints_Request";
}

template<>
struct has_fixed_size<driver::srv::ArmSetJoints_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<driver::srv::ArmSetJoints_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<driver::srv::ArmSetJoints_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace driver
{

namespace srv
{

inline void to_flow_style_yaml(
  const ArmSetJoints_Response & msg,
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
  const ArmSetJoints_Response & msg,
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

inline std::string to_yaml(const ArmSetJoints_Response & msg, bool use_flow_style = false)
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
  const driver::srv::ArmSetJoints_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  driver::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use driver::srv::to_yaml() instead")]]
inline std::string to_yaml(const driver::srv::ArmSetJoints_Response & msg)
{
  return driver::srv::to_yaml(msg);
}

template<>
inline const char * data_type<driver::srv::ArmSetJoints_Response>()
{
  return "driver::srv::ArmSetJoints_Response";
}

template<>
inline const char * name<driver::srv::ArmSetJoints_Response>()
{
  return "driver/srv/ArmSetJoints_Response";
}

template<>
struct has_fixed_size<driver::srv::ArmSetJoints_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<driver::srv::ArmSetJoints_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<driver::srv::ArmSetJoints_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<driver::srv::ArmSetJoints>()
{
  return "driver::srv::ArmSetJoints";
}

template<>
inline const char * name<driver::srv::ArmSetJoints>()
{
  return "driver/srv/ArmSetJoints";
}

template<>
struct has_fixed_size<driver::srv::ArmSetJoints>
  : std::integral_constant<
    bool,
    has_fixed_size<driver::srv::ArmSetJoints_Request>::value &&
    has_fixed_size<driver::srv::ArmSetJoints_Response>::value
  >
{
};

template<>
struct has_bounded_size<driver::srv::ArmSetJoints>
  : std::integral_constant<
    bool,
    has_bounded_size<driver::srv::ArmSetJoints_Request>::value &&
    has_bounded_size<driver::srv::ArmSetJoints_Response>::value
  >
{
};

template<>
struct is_service<driver::srv::ArmSetJoints>
  : std::true_type
{
};

template<>
struct is_service_request<driver::srv::ArmSetJoints_Request>
  : std::true_type
{
};

template<>
struct is_service_response<driver::srv::ArmSetJoints_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // DRIVER__SRV__DETAIL__ARM_SET_JOINTS__TRAITS_HPP_
