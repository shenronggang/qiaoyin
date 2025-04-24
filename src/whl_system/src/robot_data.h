#pragma once
#include <string>
#include <iostream>
#include <vector>
#define ArmDof 7

namespace whl
{
    using namespace std;
    //==传入组====
    struct cmdStruct
    {
        string robot_name = "qiaoyin";
        int running_mode = 0; // 运行模式0:idel, 1：手动， 2：自动， 3：数采
        int ctrl_cmd = 0;     // 0:初始状态， 1:启动， 2:停止， 3:暂停
        bool enable = 0;
    };

    struct whlSdkStruct
    {
        double arm_speed[2];            //手臂移动速度 左臂+右臂
        double agv_move_speed[2];       //机器人期望值 线速度+角速度
        bool gripper[2];                //下发夹爪控制 左臂+右臂
        double q_agv_speed[3];          //机器人移动期望值 线速度+角速度
        double q_arm_joints[2][ArmDof]; //下发机器人关节角 左臂+右臂
        double q_arm_pos[2][ArmDof];    //下发机器人笛卡尔 左臂+右臂
    };

    //==传出组=====
    struct ctrlStruct
    {
        int motor_on = 0;
        int running_mode = 0;               // 运行模式0:idel, 1：手动， 2：自动， 3：数采
        int ctrl_cmd = 0;                   // 0:初始状态， 1:启动， 2:停止， 3:暂停
        bool gripper[2];
        double q_agv_speed[2];               //机器人当前 线速度+角速度
        double exp_agv_speed[2];             //机器人期望 线速度+角速度
        double robot_pos[2];                //机器人在地图中的当前位置 x, y, rz
        double q_arm_joints[2][ArmDof];     //机器人当前关节角 左臂+右臂
        double exp_arm_joints[2][ArmDof];   //机器人期望关节角 左臂+右臂
        double q_arm_pos[2][ArmDof];        //机器人当前笛卡尔 左臂+右臂
        double exp_arm_pos[2][ArmDof];      //机器人期望笛卡尔 左臂+右臂
        int step = 0;
    };
    //==最终封装=========================================
    struct inputStruct
    {
        cmdStruct cmd;
        whlSdkStruct whlSdk;
    };

    struct outputStruct{
        ctrlStruct ctrl;
    };
} // namespace whl
