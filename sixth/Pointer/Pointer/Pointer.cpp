//指针：通过指针直接访问内存
//记录地址编号,保存地址
#include<iostream>
using namespace std;
int main() {
	//1。定义一个指针
	int a = 10;
	//数据类型 * 指针变量名；
	int *p; 
	//让指针记录a的地址
	p = &a;
	//a的地址
	cout << p << endl;
	//2.使用指针
	//可以通过解引用的方式来找到指针指向的内存
	//指针前加*为解引用

	*p = 100;
	cout <<"*p= " << *p << endl;
	cout << "a= " << a << endl;

	return 0;
}