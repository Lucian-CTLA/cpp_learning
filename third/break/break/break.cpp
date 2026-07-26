//跳转语句break
#include<iostream>
using namespace std;
int main() {
	int select = 0;
	//1.出现在switch语句中(游戏选择难度)
	cout<<"you please select difficulty："<<endl;
	cout<<"1.easy"<<endl;
	cout<<"2.medium"<<endl;
	cout<<"3.hard"<<endl;
	
	cin>>select;
	switch (select) {
	case 1:
		cout << "you selected easy difficulty" << endl;
		break;
	case 2:
		cout << "you selected medium difficulty" << endl;
		break;
	case 3:
		cout << "you selected hard difficulty" << endl;
		break;
	}

	//2.出现在循环语句中
	for (int i = 0;i < 100;i++) {
		if (i > 50) {
			cout << "it bigger than 50";
			break;
		}
		cout << i << endl;
	}
	//3.出现在嵌套循环中，break语句只能跳出它所在的循环体，不能跳出外层循环体
	for (int i = 0;i < 10;i++) {
		for (int j = 0;j < 10;j++) {
			cout << "*";
			if (j == 5) {
				break;
			}
		}
		cout << endl;
	}

	return 0;
}