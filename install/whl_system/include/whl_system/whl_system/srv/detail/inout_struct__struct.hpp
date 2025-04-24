// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from whl_system:srv/InoutStruct.idl
// generated code does not contain a copyright notice

#ifndef WHL_SYSTEM__SRV__DETAIL__INOUT_STRUCT__STRUCT_HPP_
#define WHL_SYSTEM__SRV__DETAIL__INOUT_STRUCT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'arm_info'
#include "whl_system/msg/detail/arm_info__struct.hpp"
// Member 'agv_info'
#include "whl_system/msg/detail/agv_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__whl_system__srv__InoutStruct_Request __attribute__((deprecated))
#else
# define DEPRECATED__whl_system__srv__InoutStruct_Request __declspec(deprecated)
#endif

namespace whl_system
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct InoutStruct_Request_
{
  using Type = InoutStruct_Request_<ContainerAllocator>;

  explicit InoutStruct_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : arm_info(_init),
    agv_info(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_name = "";
      this->running_mode = 0l;
      this->ctrl_cmd = 0l;
      this->enable = false;
    }
  }

  explicit InoutStruct_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : robot_name(_alloc),
    arm_info(_alloc, _init),
    agv_info(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_name = "";
      this->running_mode = 0l;
      this->ctrl_cmd = 0l;
      this->enable = false;
    }
  }

  // field types and members
  using _robot_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _robot_name_type robot_name;
  using _running_mode_type =
    int32_t;
  _running_mode_type running_mode;
  using _ctrl_cmd_type =
    int32_t;
  _ctrl_cmd_type ctrl_cmd;
  using _enable_type =
    bool;
  _enable_type enable;
  using _arm_info_type =
    whl_system::msg::ArmInfo_<ContainerAllocator>;
  _arm_info_type arm_info;
  using _agv_info_type =
    whl_system::msg::AgvInfo_<ContainerAllocator>;
  _agv_info_type agv_info;

  // setters for named parameter idiom
  Type & set__robot_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->robot_name = _arg;
    return *this;
  }
  Type & set__running_mode(
    const int32_t & _arg)
  {
    this->running_mode = _arg;
    return *this;
  }
  Type & set__ctrl_cmd(
    const int32_t & _arg)
  {
    this->ctrl_cmd = _arg;
    return *this;
  }
  Type & set__enable(
    const bool & _arg)
  {
    this->enable = _arg;
    return *this;
  }
  Type & set__arm_info(
    const whl_system::msg::ArmInfo_<ContainerAllocator> & _arg)
  {
    this->arm_info = _arg;
    return *this;
  }
  Type & set__agv_info(
    const whl_system::msg::AgvInfo_<ContainerAllocator> & _arg)
  {
    this->agv_info = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    whl_system::srv::InoutStruct_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const whl_system::srv::InoutStruct_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<whl_system::srv::InoutStruct_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<whl_system::srv::InoutStruct_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      whl_system::srv::InoutStruct_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<whl_system::srv::InoutStruct_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      whl_system::srv::InoutStruct_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<whl_system::srv::InoutStruct_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<whl_system::srv::InoutStruct_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<whl_system::srv::InoutStruct_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__whl_system__srv__InoutStruct_Request
    std::shared_ptr<whl_system::srv::InoutStruct_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__whl_system__srv__InoutStruct_Request
    std::shared_ptr<whl_system::srv::InoutStruct_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const InoutStruct_Request_ & other) const
  {
    if (this->robot_name != other.robot_name) {
      return false;
    }
    if (this->running_mode != other.running_mode) {
      return false;
    }
    if (this->ctrl_cmd != other.ctrl_cmd) {
      return false;
    }
    if (this->enable != other.enable) {
      return false;
    }
    if (this->arm_info != other.arm_info) {
      return false;
    }
    if (this->agv_info != other.agv_info) {
      return false;
    }
    return true;
  }
  bool operator!=(const InoutStruct_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct InoutStruct_Request_

// alias to use template instance with default allocator
using InoutStruct_Request =
  whl_system::srv::InoutStruct_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace whl_system


// Include directives for member types
// Member 'q_arm_info'
// Member 'exp_arm_info'
// already included above
// #include "whl_system/msg/detail/arm_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__whl_system__srv__InoutStruct_Response __attribute__((deprecated))
#else
# define DEPRECATED__whl_system__srv__InoutStruct_Response __declspec(deprecated)
#endif

namespace whl_system
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct InoutStruct_Response_
{
  using Type = InoutStruct_Response_<ContainerAllocator>;

  explicit InoutStruct_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : q_arm_info(_init),
    exp_arm_info(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motor_on = 0l;
      this->running_mode = 0l;
      this->ctrl_cmd = 0l;
      std::fill<typename std::array<bool, 2>::iterator, bool>(this->gripper.begin(), this->gripper.end(), false);
      std::fill<typename std::array<double, 2>::iterator, double>(this->q_agv_peed.begin(), this->q_agv_peed.end(), 0.0);
      std::fill<typename std::array<double, 2>::iterator, double>(this->exp_agv_peed.begin(), this->exp_agv_peed.end(), 0.0);
      std::fill<typename std::array<double, 3>::iterator, double>(this->robot_pos.begin(), this->robot_pos.end(), 0.0);
      this->step = 0l;
    }
  }

  explicit InoutStruct_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : gripper(_alloc),
    q_agv_peed(_alloc),
    exp_agv_peed(_alloc),
    robot_pos(_alloc),
    q_arm_info(_alloc, _init),
    exp_arm_info(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motor_on = 0l;
      this->running_mode = 0l;
      this->ctrl_cmd = 0l;
      std::fill<typename std::array<bool, 2>::iterator, bool>(this->gripper.begin(), this->gripper.end(), false);
      std::fill<typename std::array<double, 2>::iterator, double>(this->q_agv_peed.begin(), this->q_agv_peed.end(), 0.0);
      std::fill<typename std::array<double, 2>::iterator, double>(this->exp_agv_peed.begin(), this->exp_agv_peed.end(), 0.0);
      std::fill<typename std::array<double, 3>::iterator, double>(this->robot_pos.begin(), this->robot_pos.end(), 0.0);
      this->step = 0l;
    }
  }

  // field types and members
  using _motor_on_type =
    int32_t;
  _motor_on_type motor_on;
  using _running_mode_type =
    int32_t;
  _running_mode_type running_mode;
  using _ctrl_cmd_type =
    int32_t;
  _ctrl_cmd_type ctrl_cmd;
  using _gripper_type =
    std::array<bool, 2>;
  _gripper_type gripper;
  using _q_agv_peed_type =
    std::array<double, 2>;
  _q_agv_peed_type q_agv_peed;
  using _exp_agv_peed_type =
    std::array<double, 2>;
  _exp_agv_peed_type exp_agv_peed;
  using _robot_pos_type =
    std::array<double, 3>;
  _robot_pos_type robot_pos;
  using _q_arm_info_type =
    whl_system::msg::ArmInfo_<ContainerAllocator>;
  _q_arm_info_type q_arm_info;
  using _exp_arm_info_type =
    whl_system::msg::ArmInfo_<ContainerAllocator>;
  _exp_arm_info_type exp_arm_info;
  using _step_type =
    int32_t;
  _step_type step;

  // setters for named parameter idiom
  Type & set__motor_on(
    const int32_t & _arg)
  {
    this->motor_on = _arg;
    return *this;
  }
  Type & set__running_mode(
    const int32_t & _arg)
  {
    this->running_mode = _arg;
    return *this;
  }
  Type & set__ctrl_cmd(
    const int32_t & _arg)
  {
    this->ctrl_cmd = _arg;
    return *this;
  }
  Type & set__gripper(
    const std::array<bool, 2> & _arg)
  {
    this->gripper = _arg;
    return *this;
  }
  Type & set__q_agv_peed(
    const std::array<double, 2> & _arg)
  {
    this->q_agv_peed = _arg;
    return *this;
  }
  Type & set__exp_agv_peed(
    const std::array<double, 2> & _arg)
  {
    this->exp_agv_peed = _arg;
    return *this;
  }
  Type & set__robot_pos(
    const std::array<double, 3> & _arg)
  {
    this->robot_pos = _arg;
    return *this;
  }
  Type & set__q_arm_info(
    const whl_system::msg::ArmInfo_<ContainerAllocator> & _arg)
  {
    this->q_arm_info = _arg;
    return *this;
  }
  Type & set__exp_arm_info(
    const whl_system::msg::ArmInfo_<ContainerAllocator> & _arg)
  {
    this->exp_arm_info = _arg;
    return *this;
  }
  Type & set__step(
    const int32_t & _arg)
  {
    this->step = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    whl_system::srv::InoutStruct_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const whl_system::srv::InoutStruct_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<whl_system::srv::InoutStruct_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<whl_system::srv::InoutStruct_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      whl_system::srv::InoutStruct_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<whl_system::srv::InoutStruct_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      whl_system::srv::InoutStruct_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<whl_system::srv::InoutStruct_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<whl_system::srv::InoutStruct_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<whl_system::srv::InoutStruct_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__whl_system__srv__InoutStruct_Response
    std::shared_ptr<whl_system::srv::InoutStruct_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__whl_system__srv__InoutStruct_Response
    std::shared_ptr<whl_system::srv::InoutStruct_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const InoutStruct_Response_ & other) const
  {
    if (this->motor_on != other.motor_on) {
      return false;
    }
    if (this->running_mode != other.running_mode) {
      return false;
    }
    if (this->ctrl_cmd != other.ctrl_cmd) {
      return false;
    }
    if (this->gripper != other.gripper) {
      return false;
    }
    if (this->q_agv_peed != other.q_agv_peed) {
      return false;
    }
    if (this->exp_agv_peed != other.exp_agv_peed) {
      return false;
    }
    if (this->robot_pos != other.robot_pos) {
      return false;
    }
    if (this->q_arm_info != other.q_arm_info) {
      return false;
    }
    if (this->exp_arm_info != other.exp_arm_info) {
      return false;
    }
    if (this->step != other.step) {
      return false;
    }
    return true;
  }
  bool operator!=(const InoutStruct_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct InoutStruct_Response_

// alias to use template instance with default allocator
using InoutStruct_Response =
  whl_system::srv::InoutStruct_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace whl_system

namespace whl_system
{

namespace srv
{

struct InoutStruct
{
  using Request = whl_system::srv::InoutStruct_Request;
  using Response = whl_system::srv::InoutStruct_Response;
};

}  // namespace srv

}  // namespace whl_system

#endif  // WHL_SYSTEM__SRV__DETAIL__INOUT_STRUCT__STRUCT_HPP_
