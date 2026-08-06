//指针和函数
//利用指针做函数参数，可以修改实参的值
#include<iostream>
using namespace std;
//实现两个数字进行交换
void change01(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
	cout << "a: " << a << " b: " << b << endl;
}
void change02(int *p,int *b) {
	int temp = *p;
	*p = *b;
	*b = temp;
}
int main() {
	//值传递
	int a = 0;
	int b = 0;
	cin >> a >> b;
	change01(a, b);
	cout << "a: " << a << " b: " << b << endl;
	//地址传递
	change02(&a, &b);
	cout << "a: " << a << " b: " << b << endl;
	return 0;
}