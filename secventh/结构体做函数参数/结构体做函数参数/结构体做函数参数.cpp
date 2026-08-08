//将结构体作为参数像函数中传递
/*
值传递
地址传递
*/
#include<iostream>
#include<string>
using namespace std;
struct student {
	string name;
	int age;
	int score;
}s;
//打印学生信息的函数
//值传递（函数里面的值改变不会改变main里面的值）
void printStudent(struct student s) {
	cout <<"name: " << s.name <<"age: "<<s.age<<"score: "<<s.score << endl;
}
//地址传递(函数里面的值改变会改变main里面的值)
void printStudent2(struct student *p) {
	cout << "name2: " << p->name << "age2: " << p->age << "score2: " << p->score << endl;
}
int main() {
	s.name = "182";
	s.age = 29;
	s.score = 75;
	printStudent(s);
	printStudent2(&s);
	return 0;
}