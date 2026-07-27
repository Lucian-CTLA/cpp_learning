//案例考试成绩统计
/*
三名同学考试如下，分别输出三名同学总成绩
		语文	数学	英语
张三	100		100		100
李四	90		50		100
王五	60		70		80
*/
#include <iostream>
#include<string>
using namespace std;
int main() {
	int grades[3][3] = {
		{100,100,100},
		{90,50,100},
		{60,70,80}
	};
	string name[3] = {"张三","李四","王五"};
	for (int i = 0;i < 3;i++) {
		int num = 0;
		for (int j = 0;j < 3;j++) {
			num += grades[i][j];
			
		}
		cout << name[i]<<" :" << num << endl;
	}
	return 0;
}