/*=========== ***doc description @ yyp*** ===========
计时
=====================================================*/
#pragma once

namespace Timing{
class timingClass{
public:
	timingClass();
	~timingClass();
	void tic();//开始计时
	double toc();//距离计时，ms
	long nowNs(); //当前时间戳，ns
	int nowMs();//仅当前时间戳的ms3位
	int nowUs();//仅当前时间戳的us3位
	double nowMsUs();//仅当前时间戳的ms3位+小数点us3位
	void sleepMs(double ms);
	double toc20();
	void toc20print(const char* preFix="");//20次平均耗时打印
private:
	class impClass;
	impClass &imp;
};
// ==========================
long nowNs(); //当前时间戳，ns
int nowMs();//仅当前时间戳的ms3位
int nowUs();//仅当前时间戳的us3位
double nowMsUs();//仅当前时间戳的ms3位+小数点us3位
void sleepMs(double ms);

}//namespace
