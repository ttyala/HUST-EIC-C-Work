#include<stdio.h>
float sin1(float x)
{
    int i;
    float sum,a,b;
    char s;
    s = 1;
    sum = 0;
    a = x;
    b = 1;
    for(i=1;a/b>1e-6;i++)
    {
        sum = sum + s*a/b;
        a = a*x*x;
        b = b*2*i*(2*i+1);
        s *=-1;
    }
    sum = sum + s*a/b;
    return sum;
}

void main()
{
    float x,sum;
    printf("please input x:");
    scanf("%f",&x);
    sum = sin1(x);
    printf("sum=%f\n",sum);

}