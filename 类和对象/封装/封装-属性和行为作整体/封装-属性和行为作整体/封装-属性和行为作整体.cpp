//c++三大特性：封装，继承，多态
/*
将属性和行为作为一个整体，表现生活中的事务
将属性和行为加以权限控制
*/
//实例：设计一个圆类，求⚪的周长
//语法：chass 类名{ 访问权限： 属性 / 行为 }；
#include<iostream>
using namespace std;
//圆的周长：2*PI*半径
const double PI = 3.14;//常量，不改变
//class设计一个类，后面紧跟着的就是类的名称
class Circle {
	//访问权限
public:	//公共权限
	//属性
	int m_r;//半径
	//行为
	//获取圆的周长,行为函数
	double calculateZC() {
		return 2 * PI * m_r;
	}
};

int main() {
	//通过圆类创建具体的圆（对象）
	Circle c1;
	//给圆对象的属性赋值
	c1.m_r = 10;

	cout << "圆的周长" << c1.calculateZC() << endl;

	return 0;
}