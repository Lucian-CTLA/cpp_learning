//两种分类方式：
//​ 按参数分为： 有参构造和无参构造
//​ 按类型分为： 普通构造和拷贝构造

#include<iostream>
using namespace std;

//构造函数分类及调用
class Person {
public:
	//普通构造函数
	 Person(){
		 cout<<"无参数构造666" << endl;
	}
	 Person(int a) {
		 age=a;
		 cout << "有参数构造777" << endl;
	 }
	 
	 //拷贝构造函数，不能改变本身所以用const，引用的方法传进来&
	 Person(const Person &p) {
		 cout << "拷贝有参数构造888" << endl;
		 age = p.age;//将传入的人身上所有的属性拷贝到身上
	 }
	 int age;
};
void test01() {
//三种调用方式：
//​ 括号法
	Person p;
	Person p2(10);
	Person p3(p2);//拷贝：
	//注意1：调用无参构造函数不能加括号,例如：Person p1();，如果加了编译器认为这是一个函数声明
	//cout << "p2: " << p2.age << endl;
	//cout << "p3: " << p3.age << endl;
//​ 显示法
	Person p1;
	Person p22 = Person(10);//有参构造
	Person p33 = Person(p22);//拷贝
	Person(20);//匿名对象，当前行结束之后，马上析构
	cout << "aaa" << endl;
	//注意2：不能利用 拷贝构造函数 初始化匿名对象 编译器认为是对象声明:Person(p3)===Person p3;
//​ 隐式转换法
	Person p4 = 10;//Person p4=Person(10);
	Person p5 = p4;//拷贝
}

int main() {
	test01();
	return 0;
}