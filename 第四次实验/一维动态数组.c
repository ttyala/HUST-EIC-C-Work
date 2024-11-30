#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int *p=NULL,n,i,sum;
    printf("Please enter array size:");
    scanf("%d",&n);
    p=(int *)malloc(n * sizeof (int));//申请n个sizeof(int)字节的内存
    if (p==NULL) //确保指针使用前是非空指针，当p为空指针时结束程序运行
    {
        printf("No enough memory!\n");
        exit(0);
    }
    printf("Please enter the score:");
    for (i=0; i<n; i++) //输入n个学生的分数
    {
        scanf("%d",p + i);
    }
    sum=0;
    for (i=0; i<n; i++)
    {
        sum=sum + *(p + i);
    }
    printf("aver=%d\n",sum/n);
    free(p);
    return 0;
}
