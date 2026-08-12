//c++中函数的形参列表里可以有占位参数，用来做占位，调用函数时必须填补该位置
//语法：返回值类型 函数名 （数据类型）{}
#include<iostream>
using namespace std;
//展位参数可以有默认参数
void func(int a,int=10) {//int占位
	cout << "func" << endl;
}
int main() {
	func(10);
	return 0;
}