//whille循环
//while（循环条件）{
// 循环语句
// }
	//在屏幕中打印0~9这10个数字
/*int a = 0;
while (a < 10) {
	cout << a << endl;
	a++;
}
*/

#include<iostream>
#include <string>
#include<ctime>//time()函数需要包含的头文件
using namespace std;
int main() {
	//添加随机数种子，确保每次运行程序时生成的随机数都不同
	srand((unsigned int)time(NULL));
	//猜数字，随机生成1~100之间的数字，用户输入数字，程序提示用户输入的数字是大了还是小了，直到用户猜中为止
	//1.随机生成1~100之间的数字
	int target = rand() % 100 + 1;//rand()【随机生成数字】%数字【0~这个数字的区间，也就是生成范围-1】eg:rand()%100【0~99】+1【1~100】
	int num;
	//2.用户输入数字
	while (true) {
		cin >> num;
		//3.程序提示用户输入的数字是大了还是小了，直到用户猜中为止
		if (num == target) {
			cout << "恭喜你，猜对了！" << endl;
			//退出游戏
			break;
		}
		else if (num > target) {
			cout << "你猜的数字大了，请重新输入：" << endl;
		}
		else {
			cout << "你猜的数字小了，请重新输入：" << endl;
		}
	}
	

	return 0;
}