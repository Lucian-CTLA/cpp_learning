//const修饰指针
#include<iostream>
using namespace std;
int main() {
	//const 修饰指针
	int a = 10;
	int b = 20;
	const int* p = &a;//常量指针，指针指向可以修改，值不能改
	p = &b;
	cout << *p << endl;
	//指针常量
	int* const p2 = &a;//指针常量，指针指向不能修改，值可以改
	*p2 = 30;
	cout << *p2 << endl;

	//指针常量和常量指针
	const int * const p3 = &b;//指针常量和常量指针，指针指向不能修改，值也不能改
	cout << *p3 << endl;

	return 0;
}