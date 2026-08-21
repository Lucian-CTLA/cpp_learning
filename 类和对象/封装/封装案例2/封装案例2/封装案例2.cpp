//设计一个学生类，属性有姓名和学号，可以给姓名和学号赋值，可以显示学生姓名和学号

#include<iostream>
#include<string>
using namespace std;

//class student {
//public:
//	string name;
//	string num;
//	string s1(){
//		return "name: " + name + " number: " + num;
//	}
//
//};
class studnet {
public://公共权限
	//属性：
	string name;
	int id;
	string s1(){
		return  name;
	}
	int s2() {
		return id;
	}

};

int main() {
	/*student sn;
	string sa, su;
	cin >> sa >> su;
	sn.name=sa;
	sn.num=su;
	
	cout << sn.s1() << endl;*/
	studnet sn;
	string sn_name;
	int sn_id;
	cin >> sn_name >> sn_id;
	sn.name = sn_name;
	sn.id = sn_id;
	cout << "name: " << sn.s1() << " " << "id: " << sn.s2() << endl;
	return 0;
}