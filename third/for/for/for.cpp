//for 循环
/*for (起始表达式；条件表达式；末尾循环体){
	循环语句；
}
*/
/*
* #include<string>
#include<ctime>
	srand((unsigned int)time(NULL));//设置随机数种子
	int target = rand() % 100 + 1;//生成1-100之间的随机数
	//从数字0打印到数字9：for循环
	for (int num = 0;num < 10;num++) {
		cout << num << endl;
	}*/
#include<iostream>
using namespace std;
int main() {
	//敲桌子，从1-100，数字各位含有7或者10位含有7或者数字是7的倍数，打印敲桌子，其余数字直接输出
	int i = 1;
	for(i;i<=100;i++)
	{
		if (i % 7 == 0 || i / 10 == 7 || i % 10 == 7) 
		{
			cout << "knock" << endl;
		}
		else
		{
			cout << i << endl;
		}
	}
	return 0;
}