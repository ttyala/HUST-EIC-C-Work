#include <stdio.h>
//二级指针
int main()
{
    int num[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    int *p[3], **pp;
    int i,j;
    for (i=0;i<3;i++)
        p[i]=num[i];
    pp=p;
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
            printf("%-3d",*(*(pp+i)+j));
        printf("\n");
    }
}