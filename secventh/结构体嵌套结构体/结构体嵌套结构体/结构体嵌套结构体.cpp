//结构体中的成员可以是另一个结构体
//每个老师辅导一个学员，一个老师的结构体中，记录一个学生的结构体
#include<iostream>
#include<string>
using namespace std;
struct student {
	string name;
	int age;
	int score;
};
struct teacher {
	int id;
	string name;
	int age;
	struct student std;//子结构体
};
int main() {
	struct student std = {"zhangsan",18,48};
	teacher tea;
	tea.id= 19;
	tea.name = "laoshi";
	tea.age = 28;
	tea.std.name = "jk";
	tea.std.age = 92;
	tea.std.score = 103;
	cout << tea.id << tea.name << tea.age << tea.std.name << tea.std.age << tea.std.score << endl;
	return 0;
}