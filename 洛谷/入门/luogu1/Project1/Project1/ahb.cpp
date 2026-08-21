//输入两个整数 a,b，输出它们的和。
#include <iostream>
using namespace std;
class add {
public:
    int a;
    int b;
    int addahb() {
        return a + b;
    }

};
int main() {
    add ab;
    int a;
    int b;
    cin >> a >> b;
    ab.a = a;
    ab.b = b;
    cout << ab.addahb() << endl;
    return 0;

}