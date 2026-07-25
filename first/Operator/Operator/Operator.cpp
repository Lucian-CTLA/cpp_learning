//运算符+ - * / % ++ --
//赋值运算符 += -= = /= %=
//比较运算符 == ！= < > >= <=
//逻辑运算符 && || ！
#include <iostream>
#include <string>
using namespace std;
int main() {
	int a = 10, b = 3;
	cout << "a + b = " << a + b << endl;
	cout << "a - b = " << a - b << endl;
	cout << "a * b = " << a * b << endl;
	cout << "a / b = " << a / b << endl;
	cout << "a % b = " << a % b << endl;
	//后置递增（后加再计算）
	int a1 = 10;
	int b1 = a1++;
	cout << "b1 = " << b1 << endl;
	//前置递增（先加再计算）
	int c = 10;
	int d = ++c;
	cout << "d = " << d << endl;
	//赋值运算符
	int i = 5;
	i += 2;
	cout << i << endl;
	int j = 5;
	int g = 10;
	bool num = (j > g);
	cout << num << endl;
	//逻辑运算符
	int a2 = 10;
	cout << !a2 << endl;//!真变假
	int b2 = 0;
	cout << (a2 && b2);
	cout << (a2 || b2);
	return 0;
}