#include <rclcpp/rclcpp.hpp>
#include "wheelloong_system.h"

int main(int argc, char * argv[]) {
    rclcpp::init(argc, argv);
    auto node = std::make_shared<WheelloongSystem>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}   