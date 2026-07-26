//goto无条件跳转语句
#include <iostream>
using namespace std;
int main() {
	cout << "1.XXX" << endl;
	cout << "2.XXX" << endl;
	goto Flag;
	cout << "3.XXX" << endl;
	cout << "4.XXX" << endl;
Flag:
	cout << "5.XXX" << endl;
	return 0;
}