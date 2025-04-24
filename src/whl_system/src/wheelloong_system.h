#pragma once
#include <iostream>
#include "whl_system/srv/inout_struct.hpp"
#include "robot_data.h"
#include "fsm.h"

namespace whl_system
{
    class WheelloongSystem
    {
    public:
        WheelloongSystem();
        ~WheelloongSystem();
        void update();
        void work();
        void dwdate();
        void run();

    private:
        FsmClass fsm;
    };
}