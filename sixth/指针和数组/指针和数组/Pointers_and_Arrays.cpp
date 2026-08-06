//利用指针访问数组的元素
#include<iostream>
using namespace std;
int main() {
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	cout << "the first one arr: " << arr[0] << endl;
	int* p = arr;//arr数组的首地址
	cout << "*p: " << *p << endl;
	for (int i=0;i < sizeof(arr)/sizeof(arr[0]);i++) {
		cout << "*p is : "<<*p << endl;
		p++;//指针向后偏移4个字节（int 是四个字节）
	}
	return 0;
}