#include "wheelloong_system.h"
#include "rclcpp/rclcpp.hpp"

int main(int argc, char** argv) {
    rclcpp::init(argc, argv);

    std::unique_ptr<whl_system::WheelloongSystem> system = std::make_unique<whl_system::WheelloongSystem>();

    rclcpp::spin_some(rclcpp::Node::make_shared("wheelloong_system_node"));
    rclcpp::spin(system);
    rclcpp::shutdown();

    return 0;
}
