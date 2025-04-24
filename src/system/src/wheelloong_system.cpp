#include "wheelloong_system.h"

WheelloongSystem::WheelloongSystem() : Node("wheelloong_system") {}

void WheelloongSystem::init_params(const string &yaml_file_path)
{
    try
    {
        YAML::Node config = YAML::LoadFile(yaml_file_path);

        // 加载 inputStruct 参数
        if (config["inputStruct"])
        {
            auto inputStruct = config["inputStruct"];
            declare_and_set_param("inputStruct.robot_name", inputStruct["robot_name"].as<string>());
            declare_and_set_param("inputStruct.arm_speed", inputStruct["arm_speed"].as<double>());
            declare_and_set_param("inputStruct.agv_move_speed", inputStruct["agv_move_speed"].as<double>());
            declare_and_set_param("inputStruct.running_mode", inputStruct["running_mode"].as<int>());
            declare_and_set_param("inputStruct.ctrl_cmd", inputStruct["ctrl_cmd"].as<int>());
            declare_and_set_param("inputStruct.enable", inputStruct["enable"].as<int>());
            // 加载 q_arm_joints
            if (inputStruct["q_arm_joints"])
            {
                for (size_t i = 0; i < inputStruct["q_arm_joints"].size(); ++i)
                {
                    vector<double> joint_values = inputStruct["q_arm_joints"][i].as<vector<double>>();
                    declare_and_set_param("inputStruct.q_arm_joints[" + to_string(i) + "]", joint_values);
                }
            }
            // 加载 q_arm_pos
            if (inputStruct["q_arm_pos"])
            {
                for (size_t i = 0; i < inputStruct["q_arm_pos"].size(); ++i)
                {
                    vector<double> pos_values = inputStruct["q_arm_pos"][i].as<vector<double>>();
                    declare_and_set_param("inputStruct.q_arm_pos[" + to_string(i) + "]", pos_values);
                }
            }
            // 加载 exp_arm_pos
            if (inputStruct["exp_arm_pos"])
            {
                for (size_t i = 0; i < inputStruct["exp_arm_pos"].size(); ++i)
                {
                    vector<double> exp_pos_values = inputStruct["exp_arm_pos"][i].as<vector<double>>();
                    declare_and_set_param("inputStruct.exp_arm_pos[" + to_string(i) + "]", exp_pos_values);
                }
            }
            // 加载 gripper
            if (inputStruct["gripper"])
            {
                vector<int> gripper_values = inputStruct["gripper"].as<vector<int>>();
                declare_and_set_param("inputStruct.gripper", gripper_values);
            }
            // 加载 q_agv_speed
            if (inputStruct["double q_agv_speed"])
            {
                vector<double> agv_speed_values = inputStruct["double q_agv_speed"].as<vector<double>>();
                declare_and_set_param("inputStruct.q_agv_speed", agv_speed_values);
            }
        }
        // 加载 outputStruct 参数
        if (config["outputStruct"])
        {
            auto outputStruct = config["outputStruct"];
            declare_and_set_param("outputStruct.motor_on", outputStruct["motor_on"].as<int>());
            // 加载 gripper
            if (outputStruct["gripper"])
            {
                vector<int> gripper_values = outputStruct["gripper"].as<vector<int>>();
                declare_and_set_param("outputStruct.gripper", gripper_values);
            }
            // 加载 q_arm_joints
            if (outputStruct["q_arm_joints"])
            {
                for (size_t i = 0; i < outputStruct["q_arm_joints"].size(); ++i)
                {
                    vector<double> joint_values = outputStruct["q_arm_joints"][i].as<vector<double>>();
                    declare_and_set_param("outputStruct.q_arm_joints[" + to_string(i) + "]", joint_values);
                }
            }
            // 加载 exp_arm_joints
            if (outputStruct["exp_arm_joints"])
            {
                for (size_t i = 0; i < outputStruct["exp_arm_joints"].size(); ++i)
                {
                    vector<double> exp_joint_values = outputStruct["exp_arm_joints"][i].as<vector<double>>();
                    declare_and_set_param("outputStruct.exp_arm_joints[" + to_string(i) + "]", exp_joint_values);
                }
            }
            // 加载 q_arm_pos
            if (outputStruct["q_arm_pos"])
            {
                for (size_t i = 0; i < outputStruct["q_arm_pos"].size(); ++i)
                {
                    vector<double> pos_values = outputStruct["q_arm_pos"][i].as<vector<double>>();
                    declare_and_set_param("outputStruct.q_arm_pos[" + to_string(i) + "]", pos_values);
                }
            }
            // 加载 exp_arm_pos
            if (outputStruct["exp_arm_pos"])
            {
                for (size_t i = 0; i < outputStruct["exp_arm_pos"].size(); ++i)
                {
                    vector<double> exp_pos_values = outputStruct["exp_arm_pos"][i].as<vector<double>>();
                    declare_and_set_param("outputStruct.exp_arm_pos[" + to_string(i) + "]", exp_pos_values);
                }
            }
            // 加载 q_agv_peed
            if (outputStruct["q_agv_peed"])
            {
                vector<int> agv_peed_values = outputStruct["q_agv_peed"].as<vector<int>>();
                declare_and_set_param("outputStruct.q_agv_peed", agv_peed_values);
            }
            // 加载 exp_agv_peed
            if (outputStruct["exp_agv_peed"])
            {
                vector<int> exp_agv_peed_values = outputStruct["exp_agv_peed"].as<vector<int>>();
                declare_and_set_param("outputStruct.exp_agv_peed", exp_agv_peed_values);
            }
            // 加载 robot_pos
            if (outputStruct["robot_pos"])
            {
                vector<int> robot_pos_values = outputStruct["robot_pos"].as<vector<int>>();
                declare_and_set_param("outputStruct.robot_pos", robot_pos_values);
            }
            // 加载 step
            if (outputStruct["step"])
            {
                for (size_t i = 0; i < outputStruct["step"].size(); ++i)
                {
                    auto step = outputStruct["step"][i];
                    declare_and_set_param("outputStruct.step[" + to_string(i) + "].id", step["id"].as<int>());
                    declare_and_set_param("outputStruct.step[" + to_string(i) + "].descript", step["descript"].as<string>());
                }
            }
        }
    }
    catch (const exception &e)
    {
        RCLCPP_ERROR(this->get_logger(), "Failed to load YAML file: %s", e.what());
    }
}

template <typename T>
void WheelloongSystem::declare_and_set_param(const string &param_name, const T &value)
{
    this->declare_parameter(param_name, value);
    this->set_parameter(rclcpp::Parameter(param_name, value));
}