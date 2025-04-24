#include "rclcpp/rclcpp.hpp"
#include "arm_driver_node.h"

int main(int argc, char** argv) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<ArmDriverNode>());
    rclcpp::shutdown();
    return 0;
}
