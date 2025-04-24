int32 running_mode      #手动 自动
int32 ctrl_cmd          #运行 停止 暂停
int32 cur_step

bool[2] gripper         #夹爪状态
float64[2] q_agv_peed   #底盘运行速度
float64[3] robot_pos    #底盘位置

bool motor_on          #使能
float64[7] left_arm_joints   # 左臂关节角度（rad）
float64[7] right_arm_joints  # 右臂关节角度（rad）
float64[6] left_arm_cart     # 左臂笛卡尔坐标（xyz(mm), rpy(rad)）
float64[6] right_arm_cart    # 右臂笛卡尔坐标（xyz(mm), rpy(rad)）
float64[2] speed             # 左右臂运动速度
