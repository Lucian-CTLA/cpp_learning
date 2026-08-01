//野指针：指向非法空间
#include <iostream>
using namespace std;
int main() {
	int* p = (int*)0x1100;
	return 0;
}