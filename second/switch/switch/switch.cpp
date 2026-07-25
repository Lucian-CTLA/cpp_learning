//switch
/*
switch(表达式)
{
	case 结果1：
		执行语句；
		break;
	case 结果2：
		执行语句；
		break;
	...
	default：
	    执行语句；
		break;
}
*/
#include<iostream>
#include<string>
using namespace std;
int main() {
	//给电影评分，9~10分：非常好，8~9分：好，7~8分：一般，6~7分：差，6分以下：很差
	int score;
	cout << "please enter the movie score(0~10)" << endl;
	cin >> score;
	switch (score) {
	case 10:
		cout << "very good" << endl;
		break;
	case 9:
		cout << "very good" << endl;
		break;
	case 8:
		cout << "good" << endl;
		break;
	case 7:
		cout << "average" << endl;
		break;
	case 6:
		cout << "bad" << endl;
		break;
	default:
		cout << "very bad" << endl;
		break;
	}
	return 0;
}