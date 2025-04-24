#include "fsm.h"

FsmClass::FsmClass() : curState(State::Init) {
}
FsmClass::~FsmClass() {}

void FsmClass::_init(){

}
void FsmClass::_idle()
{
    std::cout << "[State: Idle] 系统空闲，等待指令..." << std::endl;
}

void FsmClass::_manual()
{
    std::cout << "[State: Manual] 进入手动模式，等待操作..." << std::endl;
}

void FsmClass::_auto()
{
    std::cout << "[State: Auto] 进入自动模式，执行任务..." << std::endl;
    plan.run();
}

void FsmClass::_remote()
{
    std::cout << "[State: Remote] 进入远程模式，等待遥控信号..." << std::endl;
}

bool FsmClass::switchState(int key)
{
    State targetState = static_cast<State>(key);
    if (curState == targetState)
        return true;
    if (curState != State::Idle && targetState != State::Idle)
    {
        std::cerr << "错误：必须先切换到 Idle 状态！当前状态："
                  << static_cast<int>(curState) << std::endl;
        return false;
    }
    // 状态合法性检查
    if (targetState < State::Idle || targetState > State::Remote)
    {
        std::cerr << "错误：无效的状态码！有效范围：0-3" << std::endl;
        return false;
    }

    // 执行状态切换

    curState = targetState;
    std::cout << "成功切换到状态：" << static_cast<int>(curState) << " (";

    switch (curState)
    {
    case State::Idle:
        _idle();
        break;
    case State::Manual:
        _manual();
        break;
    case State::Auto:
        _auto();
        break;
    case State::Remote:
        _remote();
        break;
    default:
        std::cout << "未知状态";
    }
    std::cout << ")" << std::endl;
    return true;
}