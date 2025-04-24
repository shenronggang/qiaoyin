# 机械臂状态消息
float64[7] left_arm_joints   # 左臂关节角度（rad）
float64[7] right_arm_joints  # 右臂关节角度（rad）
float64[6] left_arm_cart     # 左臂笛卡尔坐标（xyz(mm), rpy(rad)）
float64[6] right_arm_cart    # 右臂笛卡尔坐标（xyz(mm), rpy(rad)）
float64[2] speed             # 左右臂运动速度
bool motor_on
