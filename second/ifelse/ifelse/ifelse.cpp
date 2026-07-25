//if(条件判断){满足条件时执行的代码}
// else if(条件判断){满足条件时执行的代码}
//else{不满足条件时执行的代码}
// 	//用户输入分数，分数大于600视为考了一本大学，不到600但是大于500则是考了二本大学，不到500则是考了三本大学
	/*int score;
	cout << "please input your score: " <<endl;
	cin >> score;
	if(score >= 600){
		cout << "your got into a first-rate university" << endl;
	}
	else if (score < 600 && score >= 500) {
		cout<<"your got into a second-rate university" << endl;
	}
	else {
		cout<<"your got into a third-rate university" << endl;
	}*/
//嵌套if语句
/*
案例需求:
，提示用户输入一个高考考试分数，根据分数做如下判断
分数如果大于600分视为考上一本，大于500分考上二本，大于400考上三本，其余视为未考上本科；i
，在一本分数中，如果大于700分，考入北大，大于650分，考入清华，大于600考入人大。
*/
#include <iostream>
#include <string>
using namespace std;
int main() {
	/*
案例需求:
，提示用户输入一个高考考试分数，根据分数做如下判断
分数如果大于600分视为考上一本，大于500分考上二本，大于400考上三本，其余视为未考上本科；i
，在一本分数中，如果大于700分，考入北大，大于650分，考入清华，大于600考入人大。
*/
	int score;
	cout << "please input your score: " << endl;
	cin >> score;
	if (score>600) {
		if (score > 700) {
			cout << "your got into Peking University" << endl;
		}
		else  if (score > 650 && score < 700) {
			cout << "your got into Tsinghua University" << endl;
		}
		else {
			cout << "your got into Renmin University of China" << endl;
		}
	}
	else if (score > 500 && score <= 600) {
		cout << "your got into a second-rate university" << endl;
	}
	else if (score > 400 && score <= 500) {
		cout << "your got into a third-rate university" << endl;
	}
	else {
		cout << "your did not get into a university" << endl;
	}
	return 0;
}