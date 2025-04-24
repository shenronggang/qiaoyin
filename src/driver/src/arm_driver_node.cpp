#include "arm_driver_node.h"

ArmDriverNode::ArmDriverNode(const rclcpp::NodeOptions &options)
    : Node("arm_driver_node", options)
{
    // 声明参数和创建发布器
    auto publish_freq = this->declare_parameter("publish_frequency", 10.0);
    arm_info_pub_ = this->create_publisher<driver::msg::ArmInfo>("/arm/get_arm_info", 10);
    timer_ = this->create_wall_timer(
        chrono::milliseconds(static_cast<int>(1000.0 / publish_freq)),
        bind(&ArmDriverNode::publish_arm_info_callback, this));

    // 创建服务服务器
    joint_service_ = this->create_service<driver::srv::ArmSetJoints>(
        "/arm/arm_set_joints",
        bind(&ArmDriverNode::handle_arm_set_joints, this, placeholders::_1, placeholders::_2));

    cart_service_ = this->create_service<driver::srv::ArmSetCart>(
        "/arm/arm_set_cart",
        bind(&ArmDriverNode::handle_arm_set_cart, this, placeholders::_1, placeholders::_2));

    // 初始化机械臂
    initialize_robot();
}

ArmDriverNode::~ArmDriverNode()
{
    jaka_.disableMunip();
    RCLCPP_INFO(this->get_logger(), "Arm driver node stopped");
}

void ArmDriverNode::initialize_robot()
{
    if (!jaka_.enableMunip())
    {
        RCLCPP_FATAL(this->get_logger(), "Robot initialization failed");
        rclcpp::shutdown();
    }
}

void ArmDriverNode::publish_arm_info_callback()
{
    if (!jaka_.getMotorActual(cur_joint_left, cur_joint_right, cur_cart_left, cur_cart_right))
    {
        handle_robot_error();
        return;
    }
    jaka_.getSpeed(cur_speed);
    for (size_t i = 0; i < 7; i++)
    {
        msg.left_arm_joints[i] = cur_joint_left[i];
        msg.right_arm_joints[i] = cur_joint_right[i];
        msg.left_arm_cart[i] = cur_cart_left[i];
        msg.right_arm_cart[i] = cur_cart_right[i];
    }
    msg.speed = {cur_speed[0], cur_speed[1]};
    arm_info_pub_->publish(msg);
}

void ArmDriverNode::handle_robot_error()
{
    if (jaka_.getError())
    {
        RCLCPP_ERROR(this->get_logger(), "Robot error detected, clearing...");
        jaka_.clearError();
    }
}

void ArmDriverNode::handle_arm_set_joints(
    const shared_ptr<driver::srv::ArmSetJoints::Request> request,
    shared_ptr<driver::srv::ArmSetJoints::Response> response)
{
    for (size_t i = 0; i < 7; i++)
    {
        tar_joints_left[i] = request->left_arm_joints[i];
        tar_joints_right[i] = request->right_arm_joints[i];
    }

    bool result = jaka_.setJoint(tar_joints_left, tar_joints_right);
    response->success = result;
    if (result)
    {
        RCLCPP_INFO(this->get_logger(), "Joints set successfully");
    }
    else
    {
        RCLCPP_ERROR(this->get_logger(), "Failed to set joints");
    }
}

void ArmDriverNode::handle_arm_set_cart(
    const shared_ptr<driver::srv::ArmSetCart::Request> request,
    shared_ptr<driver::srv::ArmSetCart::Response> response)
{
    for (size_t i = 0; i < 7; i++)
    {
        tar_cart_left[i] = request->left_arm_cart[i];
        tar_cart_right[i] = request->right_arm_cart[i];
    }
    bool result = jaka_.setCartesian(tar_cart_left, tar_cart_right);
    response->success = result;
    if (result)
    {
        RCLCPP_INFO(this->get_logger(), "Cartesian positions set successfully");
    }
    else
    {
        RCLCPP_ERROR(this->get_logger(), "Failed to set Cartesian positions");
    }
}
void ArmDriverNode::handle_arm_enable(
    const shared_ptr<driver::srv::ArmEnable::Request> request,
    shared_ptr<driver::srv::ArmEnable::Response> response)
{
    bool res = false;
    if (request->enable)
        res = jaka_.enableMunip();
    else
        res = jaka_.disableMunip();
    response->success = res;
}