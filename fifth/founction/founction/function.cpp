//函数
/*
 将一段经常使用的代码进行封装，减少重复代码
 较大的程序，分为若干个程序块，每个模块实现特定功能
 返回值类型 函数名 （参数列表）
 {
 函数体语句；
 return 表达式
 }
 */
#include<iostream>
using namespace std;
//实现一个加法函数，功能是传入两个整型数据，计算相加结果后返回
int add(int num1, int num2) {
	int num = num1 + num2;
	cout << num << endl;
	return num;
}

int main() {
	int a;
	int b;
	cin >> a >> b;
	add(a,b);
	return 0;
}