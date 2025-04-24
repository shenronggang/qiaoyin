/**
 * encoding: gb2312
 */

#ifndef _JHERR_H_
#define _JHERR_H_

#define ERR_SUCC                                    0              //调用成功
#define ERR_FUCTION_CALL_ERROR                      2              //异常调用，调用接口异常，控制器不支持
#define ERR_INVALID_HANDLER		                    -1             //无效的控制句柄
#define	ERR_INVALID_PARAMETER                       -2             //无效的参数
#define ERR_COMMUNICATION_ERR	                    -3             //通信连接错误
#define ERR_KINE_INVERSE_ERR                        -4             //逆解失败
#define ERR_EMERGENCY_PRESSED                       -5             //急停开关被按下
#define ERR_NOT_POWERED                             -6             //机器人未上电
#define ERR_NOT_ENABLED                             -7             //机器人未使能
#define ERR_DISABLE_SERVOMODE                       -8             //机器人没有进入servo模式
#define ERR_NOT_OFF_ENABLE                          -9             //机器人没有关闭使能
#define ERR_PROGRAM_IS_RUNNING                      -10            //程序正在运行，不允许操作
#define ERR_CANNOT_OPEN_FILE                        -11            //无法打开文件，文件不存在
#define ERR_MOTION_ABNORMAL                         -12            //运动过程中发生异常
#define ERR_FTP_PREFROM			                    -14            //ftp异常
#define ERR_VALUE_OVERSIZE                          -15            // socket msg or value oversize

#define ERR_TROQUE_CONTROL_NOT_ENABLE               -22            // 电流环未使能
#define ERR_ROBOT_NOT_STOPPED                       -23            // 机器人运动中，无法执行该操作
#define ERR_INVERSE_OUT_OF_LIMIT                    -24            // 逆解超出软限位

#define ROBOT_IN_ERROR                              0xFF           // 机器人处于错误状态，请查询相关错误，并清除机器人错误

#endif
