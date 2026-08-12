/*
函数重载
满足条件：
同一个作用域下
函数名称相同
函数参数类型不同或者个数不同或者顺序不同
*/


#include<iostream>
using namespace std;

void func() {
    cout << "func" << endl;
}

void func(int a) {
    cout << "func (int a)" << endl;
}
void func(double a) {
    cout << "func(double)" << endl;
}
void func(int a, double b) {
    cout << "func(int a double b)" << endl;
}

void func(double a, int b) {
    cout << "func(double a int b)" << endl;
}
// 函数的返回值不可以作为函数的重载的条件
int main() {
    func(20,3.14);
    func(20.2, 3);// 调用有参版本（第二个函数），输出 "func (int a)"
    return 0;
}