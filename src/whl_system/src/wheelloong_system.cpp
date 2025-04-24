#include "wheelloong_system.h"

WheelloongSystem::WheelloongSystem()
{

}

WheelloongSystem::~WheelloongSystem() {
    
}

void WheelloongSystem::update()
{
    RCLCPP_INFO(node_->get_logger(), "Updating system with input data...");
}

void WheelloongSystem::work()
{
    // 实现工作逻辑
    RCLCPP_INFO(node_->get_logger(), "Working on the updated data...");
}

void WheelloongSystem::dwdate()
{
    // 实现其他更新逻辑，这里可能是拼写错误，推测是 update 相关
    RCLCPP_INFO(node_->get_logger(), "Performing another update operation...");
}

void WheelloongSystem::run() {
    rclcpp::spin(node_);  // 阻塞式运行，处理服务请求
}

