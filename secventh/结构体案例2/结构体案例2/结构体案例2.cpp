/*
设计一个英雄结构体
name,age,sex
创建结构体数组
存放5英雄
通过冒泡排序按年龄升序排序最后生成结果
*/
#include<iostream>
#include<string>
#include<ctime>
using namespace std;
struct hero {
	string name;
	int age;
	string sex;
};

void bubblessort(struct hero harray[], int len) {
	for (int i = 0;i < len - 1;i++) {
		for (int j = 0;j < len - i - 1;j++) {
			if (harray[j].age>harray[j+1].age) {
				struct hero temp = harray[j];
				harray[j] = harray[j + 1];
				harray[j + 1] = temp;
			}

		}
	}
}
void printhero(struct hero harray[],int len) {
	for (int i = 0;i < len;i++) {
		cout << harray[i].name << harray[i].age << harray[i].sex << endl;
	}
}
int main() {
	srand((unsigned int)time (NULL));

	struct hero harray[5] = {
		{"l",23,"n"},
		{"g",22,"n"} ,{"zf",20,"n"},{"z",21,"n"},{"d",19,"v"} }
		;
	int len = sizeof(harray) / sizeof(harray[0]);
	bubblessort(harray, len);
	printhero(harray, len);
	return 0;
}