/*
引用必须初始化
初始化后不能改变
*/

#include <iostream>
using namespace std;

int main() {
	int a = 10;
	int b = 20;
	//int& c;错误
	int& c = a;
	c = b;//赋值操作不更改引用
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;

	return 0;
}