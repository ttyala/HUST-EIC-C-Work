#include<stdio.h>
int TestFun(void)
{
    return 9.7;//函数返回类型不符
}
int main()
{
    printf("%d\n",TestFun());
    printf("%f\n",TestFun());
    return 0;
}