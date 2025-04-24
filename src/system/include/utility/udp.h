/*=========== ***doc description @ yyp*** ===========
This is part of Nabo (Naughty Boy, 小炮), an open project for the control of biped robot，
Copyright (C) 2024 YYP, Shanghai Jiao Tong University, under MIT License.
Feel free to use in any purpose, and cite Nabo or 小炮 in any style, to contribut to the advancement of the community.
<https://github.com/tryingfly/nabo>
<https://www.zhihu.com/column/c_1746480685987373057>

=====================================================*/
#pragma once
namespace Udp{

class udpServerClass{
public:
	udpServerClass();
	//断线后内部会自动记录调用次数的负数。调用负次数小于allowNewCnt后，自动允许新连接。allowNewCnt>=0，不自动允许新连接
	udpServerClass(unsigned short port,bool singleClient=1, int allowNewCnt=-500);
	~udpServerClass();
	//断线后内部会自动记录调用次数的负数。调用负次数小于allowNewCnt后，自动允许新连接。allowNewCnt>=0，不自动允许新连接
	bool openPort(unsigned short port,bool singleClient=1, int allowNewCnt=-500);
	void allowNew();//手动允许新连接
	int recv(void*buf);//等待时间10us，正常接收到返回长度，多联返回0，失联返回调用次数的负数
	void send(void*buf,int len);
	bool isConnect();
private:
	udpServerClass(const udpServerClass&)=delete;
	udpServerClass& operator=(const udpServerClass&)=delete;
	class impClass;
	impClass&imp;
};
// =================================
class udpClientClass{
public:
	udpClientClass();
	udpClientClass(const char*ip, unsigned short port);
	~udpClientClass();
	bool connect(const char*ip, unsigned short port);
	int recv(void*buf);//等待时间10us，接收到返回长度，否则返回调用次数的负数
	void send(void*buf,int len);
private:
	udpClientClass(const udpClientClass&)=delete;
	udpClientClass& operator=(const udpClientClass&)=delete;
	class impClass;
	impClass&imp;
};

}//namespace

