#ifndef DRIVER__MOTOR_DRIVER_NODE_HPP_
#define DRIVER__MOTOR_DRIVER_NODE_HPP_

#include "common.h"
#include "JAKAZuRobot.h"
#include "jktypes.h"
#include "jakaAPI.h"
#include "jkerr.h"
#include "timespec.h"
#include <cassert>
#include <chrono>
#include <cmath>
#include <iostream>
#include <thread>
#include <vector>
#include "cstdlib"

#define PI (3.141592653589793)
#define rad2deg(x) ((x) * 180.0 / M_PI)
#define deg2rad(x) ((x) * M_PI / 180.0)
using namespace std;

class JAKA
{
private:
    JAKAZuRobot robot;
    RobotStatus robotStatus;
    double speed[2];
    double vel[2] = {1, 1};
    double acc[2] = {1, 1};
    double tol[2] = {0, 0};
    double id[2] = {0, 0};
    MoveMode moveop[2] = {ABS, ABS};
    int armDof = 7;
    JointValue curJoint[2];
    CartesianPose curCart[2];
    JointValue jPos[2];
    CartesianPose cPos[2];
    RobotState state;
    
    // timespec next;
public:
    JAKA();
    ~JAKA();
    /**
     * @brief 新增enableMunip方法,机械臂启动
     * @param
     * @return  True，False
     */
    bool enableMunip();

    /**
     * @brief 新增disableMunip方法,机械臂关闭
     * @param
     * @return  True，False
     */
    bool disableMunip();

    /**
     * @brief 新增setJoint方法,各关节运动到指定角度值
     * @param 2*7指定角度值,类型double,单位rad
     * @return  True，False
     */
    bool setJoint(const std::vector<double> &leftJPos, const std::vector<double> &rightJPos) ;

    /**
     * @brief 新增setCartesian方法,机器人运动到笛卡尔空间指定坐标值
     * @param 2*指定坐标值xyzrpy，,类型double,xyz单位mm,rpy单位rad
     * @return  True，False
     */
    bool setCartesian(const std::vector<double> &leftCPos, const std::vector<double> &rightCPos) ;

    /**
     * @brief 新增getMotorActual方法,获取各关节的实际角度值、当前笛卡尔空间坐标值
     * @param 输入类型（joint、cartesian 或 all）；关节角度值（14个数值），单位为rad，坐标值xyzrpy(14个数值)，单位mm
     * @return  True，False
     */
    bool getMotorActual(vector<double> &actJointVel);
    bool getMotorActual(vector<double> &curJointL,vector<double> &curJointR, vector<double> &curCartL, vector<double> &curCartR);
    bool setSpeed(const std::vector<double> &Speed);
    void getSpeed(std::vector<double> cur_speed);
    bool start();
    bool getError();
    bool getMotorStatus();
    bool clearError();
};
#endif  // DRIVER__MOTOR_DRIVER_NODE_HPP_