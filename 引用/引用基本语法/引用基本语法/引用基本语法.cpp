/*
作用：给变量起别名
语法：数据类型 &别名 =原名 
*/
#include <iostream>
using namespace std;

int main() {
	int a = 10;
	int& b = a;
	cout << a << endl;
	cout << b << endl;

	b = 20;
	cout << a << endl;
	cout << b << endl;


	return 0;
}