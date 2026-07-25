//整型short int long longlong
//统计占用内存多少：sizeof（数据类型/变量）
//浮点型 float double<只有6位有效数字>
//字符型 char 变量名='一个字节'
//看对应ASCII值(int)c
//转义字符:换行符\n  水平制表\t  反斜杠\\
//字符串 string 变量名="一串字符" 要包含头文件#include <string>
//布尔类型(true1/false0) bool 变量名=true/false
#include <iostream>
#include <string>
using namespace std;
int main() {
	int a = 10;
	float b = 3.1415926f;
	char c = 'a';
	string str1 = "666nilaile";
	bool d = true;
	cout << a << b << endl;
	cout << sizeof(b) << endl;
	cout << c<<(int)c << endl;
	cout << str1 << endl;
	cout << d << endl;
	return 0;
}