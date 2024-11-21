#include<stdio.h>
void funA(int,int);
int main()
{
    funA(1.2, 3.8);//函数调用参数类型不符，自动变为int
    funA(1,3);
    return 0;
}

void funA(int a,int b)
{
    double result1, result2;
    result1 = a;
    result2 = b;
    printf("%f, %f\n",result1, result2);
}