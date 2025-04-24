/*=========== ***doc description @ yyp*** ===========
This is part of Nabo (Naughty Boy, 小炮), an open project for the control of biped robot，
Copyright (C) 2024 YYP, Shanghai Jiao Tong University, under MIT License.
Feel free to use in any purpose, and cite Nabo or 小炮 in any style, to contribut to the advancement of the community.
<https://github.com/tryingfly/nabo>
<https://www.zhihu.com/column/c_1746480685987373057>

读取解析配置文件*.ini
字符匹配非常耗力，因此不要在实时循环使用，可以在进实时循环前先找变量赋值

#include"ini.h"
=====================================================*/
#pragma once
#include<string>
#include<fstream>

using namespace std;

namespace Ini{
class iniClass{
public:
	iniClass();
	iniClass(const string &fileName);//等价于无参构造+open，
	bool open(const string &fileName, bool append=0);//append=1用于打开文件并在原有基础上键值对

	//--不存在section的独立数据获取--
	double getVal(const string &key);       //不要在实时循环使用
	double operator[](const string &key);   //不要在实时循环使用
	const string &getStr(const string &key);//不要在实时循环使用
	template<typename T>
	int getArray(const string &key, T*value, int n, bool mustMatch=1); //不要在实时循环使用，返回读取到的array size；mustMatch=1时，n和实际size不匹配即报错
	template<typename T,int n>
	int getArray(const string &key, T(&value)[n], bool mustMatch=1){return getArray(key,value,n,mustMatch);};//不要在实时循环使用，返回读取到的array size；mustMatch=1时，n和实际size不匹配即报错
	int getArraySize(const string &key);

	//--有section参数--
	double getVal(const string &section, const string &key);       //不要在实时循环使用
	const string &getStr(const string &section, const string &key);//不要在实时循环使用
	template<typename T>
	int getArray(const string &section, const string &key, T*value, int n, bool mustMatch=1);//不要在实时循环使用，返回读取到的array size；mustMatch=1时，n和实际size不匹配即报错
	template<typename T,int n>
	int getArray(const string &section, const string &key, T(&value)[n], bool mustMatch=1){return getArray(key,value,n,mustMatch);};//不要在实时循环使用，返回读取到的array size；mustMatch=1时，n和实际size不匹配即报错
	int getArraySize(const string &section, const string &key);
protected:
	class impClass;
	impClass&imp;
};

}//namespace

extern ofstream &fout;