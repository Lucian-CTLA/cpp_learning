//全局区和代码区一样在运行前都存在
//存放全局变量和静态变量以及常量
/*
存放：全局变量，静态变量，常量区，字符串常量，其他常量
数据在程序结束后进行释放
*/
#include<iostream>
#include<string>
using namespace std;
//全局变量
int g_a = 10;
//const
const int c_g_a = 10;

int main() {
	//全局区
	//局部变量
	int a = 10;
	//静态变量
	static int s_a = 10;
	//字符串常量
	string hw = "nihao";
	//const修饰变量
	const int c_a = 10;

	return 0;
}