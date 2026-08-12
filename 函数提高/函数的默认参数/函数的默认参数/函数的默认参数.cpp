//函数的形参列表中形参是可以有默认值的
//语法：返回值类型 函数名 （参数=默认值）{}
#include<iostream>
using namespace std;
int func(int a,int b=20,int c=30) {//b,c有默认值了
	return a + b + c;
}
//注意事项
/*
1.如果一个位置有一个默认参数，那么这个位置往后从左向右都必须有默认值
int func2(int a, int b = 10, int c) {
	return a + b + c;
}
2.如果函数声明有默认参数，函数实现就不能有默认参数了
声明和实现只能有一个默认参数
int func2(int a=10, int b=10);//声明
int func2(int a=10, int b=10) {//实现
	return a + b;
}
*/


int main() {
	int a=func(10,30);//如果传了就用传入的数据，没有用默认值
	cout << a << endl;

	return 0;
}