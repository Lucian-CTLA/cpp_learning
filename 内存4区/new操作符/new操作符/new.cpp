//利用new操作符在堆区开辟数据
//释放利用delete
//语法： new 数据类型
//利用new创建的数据，会返回该数据对应类型的指针

#include<iostream>
using namespace std;
int* func() {
	int* a = new int(10);
	return a;
}
//堆区用new开辟数组
void arr() {
	//创建10个整形数据数组
	int *arr= new int[10];
	for (int i = 0;i < 10;i++) {
		arr[i] = i + 100;
	}
	for (int i = 0;i < 10;i++) {
		cout << arr[i] << endl;
	}
	delete[] arr;//释放数组的时候要加[]
}

int main() {
	int* p = func();
	cout << *p << endl;
	delete p;//释放
	arr();
	
	return 0;
}