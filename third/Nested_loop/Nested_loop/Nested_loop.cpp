//嵌套循环
#include <iostream>
#include<string>
#include<ctime>
/*	srand((unsigned int)time(NULL));
	rand() % 100 + 1;*/
using namespace std;
int main() {
	//利用嵌套循环打印九九乘法表
	int num = 0;
	for (int i = 1;i < 10;i++) {
		for (int j = 1;j <= i;j++) {
			num = i * j;
			cout << i << "*" << j << "=" << num<<"\t";
		}
		cout << endl;
	}

	return 0;
}