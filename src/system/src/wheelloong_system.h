#ifndef WHEELLOONG_SYSTEM_H
#define WHEELLOONG_SYSTEM_H

#include <rclcpp/rclcpp.hpp>
#include <yaml-cpp/yaml.h>
#include <vector>
#include <string>
using namespace std;

class WheelloongSystem : public rclcpp::Node
{
public:
    WheelloongSystem();
    void init_params(const std::string& yaml_file_path);

private:
    template <typename T>
    void declare_and_set_param(const std::string& param_name, const T& value);
};

#endif // WHEELLOONG_SYSTEM_H    