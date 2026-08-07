//将自定义的结构体放入到数组中方便维护
//语法：struct 结构体名 数组名[元素个数]={{}，{}，{}，...}
#include <iostream>
#include<string>
using namespace std;
//结构体数组
//定义结构体
struct Student {
	string name;
	int age;
	int scort;
};
int main() {
	//创建一个结构体的数组：
	struct Student stuarray[3] = { {"张三",13,23},{"李四",32,23},{"王五",32,21}};
	//给结构体数组元素赋值
	stuarray[1].name = "999";
	stuarray[1].age = 80;
	stuarray[1].scort = 98;

	//遍历结构体数组
	int len = sizeof(stuarray) / sizeof(stuarray[0]);
	for (int i = 0;i < len;i++) {
		cout <<"名字" << stuarray[i].name <<"年龄"<<stuarray[i].age<<"分数" <<stuarray[i].scort<< endl;

	}
	return 0;
}