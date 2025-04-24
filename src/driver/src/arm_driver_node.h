#pragma once

#include "jaka.h"
#include "driver/msg/arm_info.hpp"
#include "driver/srv/arm_set_joints.hpp"
#include "driver/srv/arm_set_cart.hpp"
#include "driver/srv/arm_enable.hpp"
#include "rclcpp/rclcpp.hpp"


using namespace std;
class ArmDriverNode : public rclcpp::Node {
public:
    explicit ArmDriverNode(const rclcpp::NodeOptions& options = rclcpp::NodeOptions());
    ~ArmDriverNode();

private:
    vector<double> cur_joint_left,cur_joint_right,cur_cart_left,cur_cart_right;
    vector<double> tar_joints_left,tar_joints_right,tar_cart_left,tar_cart_right;
    vector<double> cur_speed,tar_speed;
    driver::msg::ArmInfo msg;
    void publish_arm_info_callback();
    void initialize_robot();
    void handle_robot_error();
    void handle_arm_set_joints(
        const shared_ptr<driver::srv::ArmSetJoints::Request> request,
        shared_ptr<driver::srv::ArmSetJoints::Response> response);
    void handle_arm_set_cart(
        const shared_ptr<driver::srv::ArmSetCart::Request> request,
        shared_ptr<driver::srv::ArmSetCart::Response> response);
    void handle_arm_enable(
        const shared_ptr<driver::srv::ArmEnable::Request> request,
        shared_ptr<driver::srv::ArmEnable::Response> response);
    
    JAKA jaka_;
    rclcpp::Publisher<driver::msg::ArmInfo>::SharedPtr arm_info_pub_;
    rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::Service<driver::srv::ArmSetJoints>::SharedPtr joint_service_;
    rclcpp::Service<driver::srv::ArmSetCart>::SharedPtr cart_service_;
};
