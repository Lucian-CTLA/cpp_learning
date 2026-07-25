//三目运算符 表达式1 ？ 表达式2 ： 表达式3
//表达式1成立，则执行表达式2，否则执行表达式3
#include <iostream>
#include<string>
using namespace std;
int main() {
	//创建三个变量a,b,c然后比较a,b的值，大的一个赋值给c
	int a, b, c;
	cout << "please enter tow numbers: " << endl;
	cin >> a>>b;
	c = (a > b) ? a : b;
	cout << "the bigger number is: " << c << endl;
	return 0;
}