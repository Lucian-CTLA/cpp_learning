//由程序员分配释放，若程序员不能释放，程序结束后由操作系统回收
//c++中主要利用new在堆区开辟内存
#include<iostream>
using namespace std;
int * func() {
	//利用new可以将数据开辟到堆区
	int* p = new int(10);
	return p;
}

int main() {
	//堆区开辟数据
	int* p = func();
	cout << *p << endl;

	return 0;
}