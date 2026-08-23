#include<iostream>
using namespace std;
class Person {
public:
	Person() {
		cout << "666" << endl;
	}
	~Person() {
		cout << "6" << endl;
	}
	Person(int ci) {
		cout << "777" << endl;
		c = ci;
	}
	Person(const Person &p) {
		cout << "888" << endl;
		c = p.c;
	}
	int c;
};
//使用一个已经创建完毕的对象来初始化一个新对象
void test01() {
	Person p1(20);
	Person p2(p1);
	cout << "c: " << p2.c << endl;
}
//值传递的方式给函数参数传值
void dowor(Person p) {

}
void test02() {
	Person p;
	dowor(p);
}
//以值方式返回局部对象
Person dowor02() {
	Person p1(10);
	return p1;
}
void test03() {
	Person p = dowor02();
}
int main() {
	test01();
	test02();
	test03();
	return 0;
}