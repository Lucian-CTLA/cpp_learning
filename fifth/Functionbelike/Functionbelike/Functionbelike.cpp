///函数常见样式
/*
无参数无返回值
有参数无返回值
无参数有返回值
有参数有返回值



*/
#include <iostream>
using namespace std;
//1.无参数无返回值
void test01() {
	cout << "this is test 01" << endl;
}
//2.有参数无返回值
void test02(int a) {
	cout << "This is test02 the a is: " << a << endl;
}
//3.无参数有返回值
int test03() {
	int test = 0;
	cout << test << endl;
	return test;
}
//4.有参数有返回值
int test04(int a) {
	cout << "This is test04 the a is: " << a << endl;
	return a;
}
int main() {
	test01();
	test02(2);
	int num1=test03();
	cout << num1 << endl;
	test04(5);
	return 0;
}