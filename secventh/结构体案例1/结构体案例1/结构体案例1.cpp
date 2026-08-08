/*
做毕设 每名老师带5个学生 ，3老师
设计学生和老师结构体，在老师结构体中有老师name和5个学生的数组
学生有name,score,创建数组存放3老师通过函数给学生赋值
打印出老师数据和所带学生数据
*/
#include<iostream>
#include<string>
#include<ctime>
using namespace std;
struct student {
	string name;
	int score;
};
struct teacher {
	string name;
	struct student s[5];

};

void allocatespace(struct teacher tarray[],int len) {
	string nameSeed = "ABCDE";
	
	for (int i = 0;i < len;i++) {
		tarray[i].name = "Teacher_";
		tarray[i].name += nameSeed[i];
		for (int j = 0;j < 5;j++) {
			tarray[i].s[j].name = "student_";
			tarray[i].s[j].name += nameSeed[j];//🍕
			int random = rand() % 60+40;
			tarray[i].s[j].score =random;
		}
	}

}
void printinfor(struct teacher tarray[],int len) {
	for (int i = 0;i < len;i++) {
		cout << tarray[i].name << endl;
		for (int j = 0;j < 5;j++) {
			cout << tarray[i].s[j].name << endl;
			cout << tarray[i].s[j].score << endl;
		}
	}

}

int main() {
	//随机数种子
	srand((unsigned int)time(NULL));

	struct teacher tarray[3];
	struct student s[5];
	int len = sizeof(tarray) / sizeof(tarray[0]);
	allocatespace(tarray, len);
	printinfor(tarray, len);
	return 0;
}