//常量引用主要来修饰形参，防止误操作
//可以加const修饰形参，防止形参改变实参
#include<iostream>
using namespace std;
//打印数据函数
void showValue(const int& val) {
	//val = 10000;//加入const后就不会修改值了，变成可读
	cout <<val <<endl;

}

int main() {
	//int a = 10;
	//加上const后 编译器将代码创建为 int temp=10;const int &ref=temp;
	//const int& fer = 10;//引用必须一块合法存储空间
	//ref=20;//加入const变为只读，不可以修改
	int a = 100;
	showValue(a);
	cout << a << endl;
	return 0;
}