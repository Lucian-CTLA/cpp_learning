//函数的分文件编写
//让代码更清晰
/*
1.创建后缀.h（头文件）
2.创建后缀.cpp（源文件）
3.在头文件中写函数声明
4.源文件中写函数定义
*/

#include<iostream>
using namespace std;
#include "swap.h"//自己的头文件
//实现两个数字交换
//声明
//void swap(int a, int b);
//函数定义
/*
void swap(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
	cout << "a= " << a << endl;
	cout << "b= " << b << endl;
}
*/
int main() {
	int a = 0;
	int b = 0;
	cin >> a >> b;
	swap(a, b);

	return 0;
}