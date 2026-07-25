//练习案例
//三只小猪称体重，分别输入然后比较三只小猪的体重，输出最重的小猪的体重。
#include <iostream>
#include<string>
using namespace std;
int main() {
	int pig_1, pig_2, pig_3;
	cout<<"please enter the weight of the first pig: ";
	cin >> pig_1 >> pig_2 >> pig_3;
	if (pig_1 > pig_2) {
		if (pig_1 > pig_3) {
			cout << "The first pig is the heaviest, weight: " << pig_1 << endl;
		}
		else {
			cout << "The third pig is the heaviest,weight:" << pig_3 << endl;
		}
	}
	else if (pig_2 > pig_1) {
		if (pig_2 > pig_3) {
			cout << "The second pig is the heaviest,weight:" << pig_2 << endl;
		}
		else {
			cout << "The third pig is the heaviest,weight:" << pig_3 << endl;
		}
	}
	else if(pig_3>pig_1) {
		if(pig_3>pig_2) {
			cout << "The third pig is the heaviest,weight:" << pig_3 << endl;
		}
		else {
			cout << "The second pig is the heaviest,weight:" << pig_2 << endl;
		}
	}
	return 0;
}