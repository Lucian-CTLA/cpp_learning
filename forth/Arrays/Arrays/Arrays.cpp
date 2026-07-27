//一维数组
//统计数组在内存中的长度
//获取数组在内存中的首地址
/*
//通过数组名统计整个数组占用内存大小
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	cout << "整个数组占用内存空间" << sizeof(arr) << endl;
	cout << "每个占用内存空间" << sizeof(arr[0]) << endl;
	cout << "数组元素个数" << sizeof(arr) / sizeof(arr[0]) << endl;
	//获取数组在内存中的首地址
	cout << "首地址" << (int)arr << endl;//转化位int类型
	cout << "第一个元素地址" << (int)&arr[0] << endl;
	cout << "第二`个元素地址" << (int)&arr[1] << endl;
*/
#include<iostream>
#include<string>
#include<ctime>
/*
srand((unsigned int)time(NULL));
rand()%100+1;
*/
using namespace std;
int main() {
	//案例1:五只小猪称体重
	//在一个数组中记录了5只小猪的体重int arr[5]={300,350,200,400,250};
	//找并打印最重那个小猪体重
	int arr[5] = { 300,350,200,400,250 };
	int heavy = 0;
		for (int i = 0;i < (sizeof(arr) / sizeof(arr[0]));i++) {
			if (heavy < arr[i]) {
				heavy = arr[i];
			}
		}
		cout << "最重那个小猪体重: " << heavy << endl;
	//案例2:元素逆置
		//声明一个5个元素的数组,并且将元素逆置:13254->45231
		int arr2[5] = { 1,3,2,5,4 };
		int start = 0;//起始元素下标
		int end = sizeof(arr2) / sizeof(arr2[0]) - 1;//末尾元素的下标
		while (start < end) {
			int temp = arr2[start];
			arr2[start] = arr2[end];
			arr2[end] = temp;
			start++;
			end--;
		}
		for (int i = 0;i < 5;i++) {
			cout << arr2[i] << endl;
		}

		
	return 0;
}