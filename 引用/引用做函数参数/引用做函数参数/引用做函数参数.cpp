/*
作用：函数传参时，可以利用引用的技术让形参修饰实参
优点：简化指针修改实参
*/
#include<iostream>
using namespace std;
//交换函数
void change01(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
	//值传递
}
void change02(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
	//地址传递
}
void change03(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
	//引用传递
}

int main() {
	int a = 10;
	int b = 20;
	change01(a, b);
	cout << a << endl;
	cout << b << endl;

//	change02(&a, &b);
//	cout << a << endl;
//	cout << b << endl;

	change03(a, b);
	cout << a << endl;
	cout << b << endl;

	return 0;
}