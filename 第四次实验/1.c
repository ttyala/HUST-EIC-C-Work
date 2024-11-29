#include<stdio.h>
void main()
{
    int m[2][2]={0};
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("%p,",m+2*i+j);
            printf("%p,",m[0]+2*i+j);
            printf("%p,",&m[0][0]+2*i+j);
            printf("%p\n",&m[i][j]);
        }
        printf("\n");
    }
}