//引用作为重载条件
//函数重载碰到函数默认参数
#include<iostream>
using namespace std;
//引用作为重载条件
void func(const int& a) {
	cout << "func(const int &a)" << endl;
}
void func(int& a) {
	cout << "func(int& a)"<<endl;
}
//函数重载碰到默认参数
void func2(int a) {
	cout << "func2(int a)" << endl;
}
//void func2(int a) {
//	cout << "func2(int a)" << endl;
//}
// 
//void func2(int a,int b=10) {
//	cout << "func2(int a)" << endl;
//}
int main() {
	int a = 10;
	func(a);//a可读可写

	func(10);//10是不变的

	func2(10);//当函数重载碰到默认参数，出现二义性，报错，尽量避免这种情况
	return 0;
}