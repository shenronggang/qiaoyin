#pragma once
#include <iostream>
#include <cstdio>
#include "plan.h"


enum class State
{
    Init = -1,
    Idle = 0,
    Manual = 1,
    Auto = 2,
    Remote = 3
};

class FsmClass
{
private:
    void _init();
    void _idle();
    void _manual();
    void _auto();
    void _remote();
    State curState;
    PlanQiaoYin plan;
public:
    State get(){return curState;};
    bool switchState(int key);
    FsmClass();
    ~FsmClass();
};
