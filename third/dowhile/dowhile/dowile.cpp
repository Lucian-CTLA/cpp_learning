//dowhile循环
//do{循环代码}while（条件）;
//先执行一段语句，再判断条件是否符合
	//在屏幕中输出0~9这个数字
	/*int num = 0;
	do {
		cout << num << endl;
		num++;
	} while (num < 10);*/

#include<iostream>
#include<string>
#include<ctime>
using namespace std;
int main() {
	//水仙花数，每个位数的立方和等于这个数本身
	//eg:153 = 1 ^ 3 + 5 ^ 3 + 3 ^ 3
	int num=100;
	do {
		if (num == ((num / 100) * (num / 100) * (num / 100) + (num % 100 / 10) * (num % 100 / 10) * (num % 100 / 10) + (num % 10) * (num % 10) * (num % 10))) {
			cout << num << endl;
		}
		num++;
	}
	while (num <= 999);


	return 0;
}