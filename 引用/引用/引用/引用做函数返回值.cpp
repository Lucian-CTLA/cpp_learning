#include <iostream>
using namespace std;
//不要返回局部变量的引用
int& test01(){//&引用
	int a=10;//栈区，运行完释放
	return a;
}
//函数的调用可以作为左值
int& test02()
{
	static int a = 10;//静态变量，全局区，程序结束后释放
	return a;

}
int main() {
	int &ref2 = test02();
	cout << ref2 << endl;
	test02() = 1000;
	cout << ref2 << endl;

	return 0;
}