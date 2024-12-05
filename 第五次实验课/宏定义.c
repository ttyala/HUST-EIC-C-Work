#include <stdio.h>

// 定义常量 N 和 M，M 为 N 加 1
#define N 5
#define M N+1
// 宏定义 f(x)，计算 x 与 M 的乘积
#define f(x) (x*M)

// 主函数
void main()
{
    int i1, i2;
    i1=f(2);  // =2*M=2*5+1
    i2=f(1+3);  //=1+3*N+1
    printf("%d %d\n",i1,i2); // 输出 i1 和 i2 的值
}