//引用的本质在c++内部实现一个指针常量
#include<iostream>
using namespace std;
void func(int &ref) {
	ref = 100;//ref引用转化为*ref

}
 int main() {
	 int a = 10;
	 //自动转化为int *const ref=&a;指针常量是指针指向不可改，也说明为什么引用不可更改
	 int &ref = a;
	 ref = 20;//内部发现ref是引用，帮助我们转化为 *ref=20;
	 cout << a << endl;
	 cout << ref << endl;
	 func(a);
	 return 0;
}