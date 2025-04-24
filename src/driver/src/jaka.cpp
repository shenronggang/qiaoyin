#include "jaka.h"
#include "thread"

JAKA::JAKA()
{       
    errno_t ret = 0;
    std::cout << "==================================================================" << std::endl;
    std::cout << "Jaka Login: " << std::endl;
    ret = robot.login_in(IP);
    if (ret != ERR_SUCC)
    {
        std::cout << "Jaka Login failed! ret = " << ret << std::endl;
    }
    std::this_thread::sleep_for(std::chrono::seconds(1));
    robot.clear_error();
    std::cout << "Jaka Login successs !!! " << ret << std::endl;

    std::cout << "Jaka Power on" << ret << std::endl;
    ret = robot.power_on();
    if (ret != ERR_SUCC)
    {
        std::cout << "Power on failed! ret = " << ret << std::endl;
    }
    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::cout << "Jaka Power on successs !!! " << ret << std::endl;

    std::cout << "JAKA Init succeed !!!" << std::endl;

    // std::cout << "Jaka start enable"<< std::endl;
    // std::this_thread::sleep_for(std::chrono::seconds(5));
    // enableMunip(); 
    // std::this_thread::sleep_for(std::chrono::seconds(3));
    // std::cout << "Jaka start enable successs !!! "<< std::endl;
}

JAKA::~JAKA()
{
    errno_t ret;
    disableMunip();
    ret = robot.power_off();
    if (ret != ERR_SUCC)
    {
        std::cout << "Power off failed! ret = " << ret << std::endl;
    }
    // 登出注销
    ret = robot.login_out();
    if (ret != ERR_SUCC)
    {
        std::cout << "Logout failed! ret = " << ret << std::endl;
    }
    std::cout << "Robot disabled and powered off successfully." << std::endl;
}

bool JAKA::start()
{
    return !getError();
}

bool JAKA::enableMunip()
{
    errno_t ret;
    ret = robot.enable_robot(); // enable
    if (ret != ERR_SUCC)
    {
        std::cout << "[jaka]: Enable failed! ret = " << ret << std::endl;
        return false;
    }else{
    robot.servo_move_use_none_filter();
    robot.servo_move_enable(1, 0);
    robot.servo_move_enable(1, 1);
    return true;
    }
}

bool JAKA::disableMunip()
{
    errno_t ret;
    // 下使能机器人
    robot.servo_move_enable(0, 0);
    robot.servo_move_enable(0, 1);
    ret = robot.disable_robot();
    if (ret != ERR_SUCC)
    {
        std::cout << "[jaka]: Disable failed! ret = " << ret << std::endl;
        return false;
    }
    if(!getMotorStatus()){
        return true;
    }else{return false;}
    return true;
}

bool JAKA::setJoint(const std::vector<double> &leftJPos, const std::vector<double> &rightJPos)
{
    errno_t ret;
    if (!leftJPos.empty())
    {
        std::cout << "\nset left arm joint(deg): ";
        for (std::vector<double>::size_type j = 0; j < leftJPos.size(); j++)
        {
            jPos[0].jVal[j] = rad2deg(leftJPos[j]);
            std::cout << jPos[0].jVal[j] << ", ";
            // jPos[0].jVal[j] = (0+kk*0.2)/ 180.0 * 3.14);
        }
        std::cout << std::endl;
    }
    if (!rightJPos.empty())
    {
        std::cout << "\nset left arm joint(deg): ";
        for (std::vector<double>::size_type j = 0; j < rightJPos.size(); j++)
        {
            jPos[1].jVal[j] = rad2deg(rightJPos[j]);
            std::cout << jPos[1].jVal[j] << ", ";
        }
        std::cout << std::endl;
    }
    ret = robot.edg_servo_j(0, &jPos[0], MoveMode::ABS);
    ret = robot.edg_servo_j(1, &jPos[1], MoveMode::ABS);
    robot.edg_send();
    if (ret != ERR_SUCC)
    {
        std::cout << "Move joint failed! ret = " << ret << std::endl;
        return false;
    }
    return true;
}

bool JAKA::setCartesian(const std::vector<double> &leftCPos, const std::vector<double> &rightCPos)
{
    errno_t ret;
    if (!leftCPos.empty())
    {
        cPos[0].tran.x = leftCPos[0];
        cPos[0].tran.y = leftCPos[1];
        cPos[0].tran.y = leftCPos[2];
        cPos[0].rpy.rx = leftCPos[3];
        cPos[0].rpy.ry = leftCPos[4];
        cPos[0].rpy.rz = leftCPos[5];
    }
    if (!rightCPos.empty())
    {
        cPos[1].tran.x = rightCPos[0];
        cPos[1].tran.y = rightCPos[1];
        cPos[1].tran.y = rightCPos[2];
        cPos[1].rpy.rx = rightCPos[3];
        cPos[1].rpy.ry = rightCPos[4];
        cPos[1].rpy.rz = rightCPos[5];
    }
    ret = robot.edg_servo_p(0, &cPos[0], MoveMode::ABS);
    ret = robot.edg_servo_p(1, &cPos[1], MoveMode::ABS);
    robot.edg_send();
    if (ret != ERR_SUCC)
    {
        std::cout << "Move Cartesion failed! ret = " << ret << std::endl;
        return false;
    }
    return true;
}

bool JAKA::getMotorActual(std::vector<double> &actJointVel)
{
    errno_t ret;
    // 分别获取左臂和右臂的状态
    for (unsigned char robot_index = 0; robot_index < 2; ++robot_index)
    {
        timespec next;
        clock_gettime(CLOCK_REALTIME, &next);
        robot.edg_recv(&next);
        ret = robot.edg_get_stat(robot_index, &curJoint[robot_index], &curCart[robot_index]);
        if (ret != ERR_SUCC)
        {
            std::string errorMsg = "Get state failed for jaka index " + std::to_string(static_cast<int>(robot_index)) + "! ret = " + std::to_string(ret);
            std::cout << errorMsg << std::endl;            
            return false;
        }
    }
    int x=0;
    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < JAKA_ROBOT_MAX_JOINT; ++j)
        {
            actJointVel[x] = deg2rad(curJoint[i].jVal[j]);
            std::cout << actJointVel[x] << ", ";  
            x++;
        }
        std::cout << std::endl;
    }
    return true;
}
bool JAKA::getMotorActual(vector<double> &curJointL,vector<double> &curJointR, vector<double> &curCartL, vector<double> &curCartR)
{
    errno_t ret;
    // 分别获取左臂和右臂的状态
    timespec next;
    clock_gettime(CLOCK_REALTIME, &next);
    robot.edg_recv(&next);
    ret = robot.edg_get_stat(0, &curJoint[0], &curCart[0]);
    if (ret != ERR_SUCC)
    {
        std::string errorMsg = "Get arm left state error ! ret = " + std::to_string(ret);
        std::cout << errorMsg << std::endl;            
        return false;
    }
    clock_gettime(CLOCK_REALTIME, &next);
    robot.edg_recv(&next);
    ret = robot.edg_get_stat(1, &curJoint[1], &curCart[1]);
    if (ret != ERR_SUCC)
    {
        std::string errorMsg = "Get arm right state error ! ret = " + std::to_string(ret);
        std::cout << errorMsg << std::endl;            
        return false;
    }
    for (int i = 0; i < JAKA_ROBOT_MAX_JOINT; ++i)
    {
        curJointL[i] = deg2rad(curJoint[0].jVal[i]);  
        curJointR[i] = deg2rad(curJoint[1].jVal[i]);  
    }

    curCartL[0] = curCart[0].tran.x;
    curCartL[1] = curCart[0].tran.y;
    curCartL[2] = curCart[0].tran.z;
    curCartL[3] = curCart[0].rpy.rx;
    curCartL[4] = curCart[0].rpy.ry;
    curCartL[5] = curCart[0].rpy.rz;

    curCartR[7] = curCart[1].tran.x;
    curCartR[8] = curCart[1].tran.y;
    curCartR[9] = curCart[1].tran.z;
    curCartR[10] = curCart[1].rpy.rx;
    curCartR[11] = curCart[1].rpy.ry;
    curCartR[12] = curCart[1].rpy.rz;

    return true;
}

bool JAKA::setSpeed(const std::vector<double> &Speed)
{
    speed[0] = Speed[0];
    speed[1] = Speed[1];
    return true;
}
void JAKA::getSpeed(std::vector<double> cur_speed){
    cur_speed[0] = speed[0];
    cur_speed[1] = speed[1];
}
bool JAKA::getError()
{
    int error[2] = {-1, -1};
    int ret = robot.robot_is_in_error(error);
    if (ret == ERR_SUCC)
    {
        // printf("[jaka]: get jaka error %s, %s\n", error[0] ? "true" : "false", error[1] ? "true" : "false");
        return error[0]&&error[1];
    }else{
        return false;
    }
}

bool JAKA::clearError(){
    errno_t ret;
    int error[2] = {-1, -1};
    ret = robot.robot_is_in_error(error);
    if (ret == ERR_SUCC)
    {
        printf("robot has error %s, %s\n", error[0] ? "true" : "false", error[1] ? "true" : "false");
    }
    ErrorCode code;
    ret = robot.get_last_error(&code);
    if (code.code != 0)
    {
        // printf("errcode = %x, %s \n", code.code, code.message);
        std::this_thread::sleep_for(std::chrono::seconds(1));
        robot.clear_error();
    }
    else
    {
        printf("no error\n");
    }
    return true;
}

bool JAKA::getMotorStatus(){
    // check_error(robot,1);
    robot.get_robot_state(&state);
    // std::cout << "jaka get_robot_state:"<< state.estoped << 
    // ", " << state.poweredOn <<", " << state.servoEnabled << std::endl;
    return state.servoEnabled;
}


