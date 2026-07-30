//函数的调用
//值传递：函数调用时实参将数值传入给形参
//形参发生改变，不会影响实参
#include<iostream>
using namespace std;
//定义一个加法函数
int add(int num1,int num2) {
	int sum = num1 + num2;
	cout << sum << endl;
	return sum;
}
//定义一个两个数字交换的函数
void change(int num1, int num2) {//不需要返回值
	int temp =  num1;
	num1 = num2;
	num2 = temp;
	cout << "num1: " << num1 << " " << "num2: " << num2 << endl;
	//不需要返回值
}

int main() {
	int a = 0;
	int b=0;
	cin >> a >> b;
	/*add(a,b);*/
	change(a, b);
	return 0;
}