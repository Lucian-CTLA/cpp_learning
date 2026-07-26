//continue执行到本行就不会再执行下面的代码了而是只会等待执行下一次循环
#include<iostream>
using namespace std;
int main() {
	//1-100,基数输出偶数不输出
	for (int i = 1;i <= 100;i++) {
		if (i % 2 == 0) {
			continue;
		}
		cout << i << endl;
	}
	return 0;
}