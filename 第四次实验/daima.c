#include<stdio.h>

int main()
{
    int *p,i,a[5];
    p = a;
    printf("input 5 numbers:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",p++);
    }
    printf("\n");
    for(p=a,i=0;i<5;i++)
        printf("%d ",*p++);
    return 0;
}