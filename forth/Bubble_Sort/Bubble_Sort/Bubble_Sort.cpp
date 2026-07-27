//冒泡排序
/*
比较相邻元素，如果第一个比第二个元素大就交换他们两个。
对每一对相邻元素做同样的工作，执行完毕后找到一个最大值。
重复以上步骤，每次比较次数-1，直到不需要比较。
{4，2，8，0，5，7，1，3，9}；升序排列
*/
#include<iostream>
using namespace std;
int main() {
	//利用冒泡排序做一个升序序列
	int arr[] = { 4,2,8,0,5,7,1,3,9 };
	cout << "排序前的结果： " << endl;
		for (int i = 0;i <= sizeof(arr) / sizeof(arr[0]);i++) {
			cout << arr[i] << " ";
		}
		cout << endl;
	//开始冒泡排序
	//排序的总轮数=元素个数-1
	//每轮对比次数=元素个数-排序轮数-1（轮数从0开始）
		for (int i = 0;i < 9 - 1;i++) {
			//内层循环对比
			for (int j = 0;j < 9 - i - 1;j++) {
				//第一个数字大则交换这两个数字
				if (arr[j] > arr[j + 1])
				{
					int temp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = temp;
				}
			}
	}
		cout << "排序后的结果： " << endl;
		for (int i = 0;i <= sizeof(arr) / sizeof(arr[0]);i++) {
			cout << arr[i] << " ";
		}
		cout << endl;

	return 0;
}