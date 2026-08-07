//结构体：属于用户自定义的数据类型，允许将不同类型的数据组合在一起
//语法：struct 结构体名{结构体成员列表}；
/*
通过结构体创建变量：
struct 结构体名 变量名；
struct 结构体名 变量名 = {成员1,成员2,...};
定义结构体时顺便创建变量
*/
#include<iostream>
using namespace std;
#include<string>
//创建学生数据类型（包含姓名、年龄、成绩等成员）
struct student{
//成员列表
	//姓名
	string name;
	//年龄
	int age;
	//分数
	float scrot;
}s3;//顺便创建结构体变量
//通过学生类型创建具体学生

int main() {
	struct student s1;
	struct student s2 = { "李四", 18, 90 };

	//给s1赋值
	s1.name = "张三";
	s1.age = 20;
	s1.scrot = 100;
	s3.name = "王五";
	s3.age = 79;
	s3.scrot = 100;
	cout << "name" << s1.name << "age: " << s1.age << "scrot: " << s1.scrot << endl;
	cout << "name" << s2.name << "age: " << s2.age << "scrot: " << s2.scrot << endl;
	cout << "name" << s3.name << "age: " << s3.age << "scrot: " << s3.scrot << endl;
	return 0;
}