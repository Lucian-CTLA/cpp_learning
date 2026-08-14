//设计一个学生类，属性有姓名和学号，可以给姓名和学号赋值，可以显示学生姓名和学号

#include<iostream>
#include<string>
using namespace std;

class student {
public:
	string name;
	string num;
	string s1(){
		return "name: " + name + " number: " + num;
	}

};

int main() {
	student sn;
	string sa, su;
	cin >> sa >> su;
	sn.name=sa;
	sn.num=su;
	
	cout << sn.s1() << endl;

	return 0;
}