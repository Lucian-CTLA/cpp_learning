//用const来防止误操作
#include<iostream>
#include<string>
using namespace std;
struct student {
	string name;
	int age;
	int score;
}s;
//指针减少内存
void printstd(const student s) {//const防止修改
	cout << "name:" << s.name << "age: " << s.age << "score:" << s.score << endl;
}
int main() {
	
	s.name = "zhangsan";
	s.age = 83;
	s.score = 92;
	printstd(s);
	return 0;
}