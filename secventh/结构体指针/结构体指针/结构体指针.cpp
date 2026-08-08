//结构体指针
//通过指针访问结构体中的成员
#include <iostream>
#include<string>
using namespace std;
//利用->可以通过结构体指针访问结构体属性
struct student{
	string name;
	int age;
	int score;
};
int main() {
	//创建学生体变量
	struct student s = {"zhangsan",12,32};
	//通过指针指向结构体变量
	struct student *p = &s;
	//通过指针访问结构体变量->
	cout<<"name:" << p->name<<"age:"<<p->age<<"score:"<<p->score<<endl;
	return 0;
}