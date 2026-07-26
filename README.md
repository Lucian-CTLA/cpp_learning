CPP的重要学习部分：
1.随机数
```c++
#include<ctime>//time()函数需要包含的头文件
int main(){
    srand((unsigned int)time(NULL));//置于时间的随机数种子
    int target=rand()%100+1
    //rand()[随机生成数字]%数字[0到这个数字的区间，也就是生成范围-1]eg:rand()%100[0~99]+1[1~100]
    return 0;
}
