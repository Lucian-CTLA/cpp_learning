//二维数组的名称
//查看内存空间
//查看首地址
#include<iostream>
using namespace std;
int main() {
	int arr[2][3] = { 
		{1,2,3},
		{4,5,6} 
	};
	cout << "内存空间 : " << sizeof(arr)<<endl;
	cout << "First line: " << sizeof(arr[0]) <<endl;
	cout << "First one: " << sizeof(arr[0][0]) << endl;
	cout << "行数： " << sizeof(arr) / sizeof(arr[0]) << endl;
	cout << "列数; " << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;
	cout << "二维数组首地址: " << (int)arr << endl;
	cout << "二维数组第一行首地址: " << (int)arr[0] << endl;
	cout << "二维数组第二行首地址: " << (int)arr[1] << endl;
	cout << "二维数组第一个首地址: " << (int)&arr[0][0] << endl;
	cout << "二维数组第二个首地址: " << (int)&arr[0][1] << endl;
	return 0;
}