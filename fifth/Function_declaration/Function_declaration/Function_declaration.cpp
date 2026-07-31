 //函数的声明
//告诉编译器函数名称以及如何调用函数。函数实际主体可以单独定义
#include <iostream>
using namespace std;
//比较函数，实现两个整型数字进行比较，返回较大的值
//提前告诉编译器max函数存在
//声明
int max(int a, int b);

//定义
int max(int a, int b) {
	int c = a > b ? a : b;
	return c;
}
int main() {
	int a=0;
	int b=0;
	cin >> a>> b;
	cout<<max(a, b);

	return 0;
}