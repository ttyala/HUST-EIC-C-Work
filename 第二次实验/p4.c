#include <stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    for(int i=1; i<=a ;i++)
    {
        for(int o=0; o<a-i; o++)
        {
            printf(" ");
        }
        for(int o=0; o<2*i-1; o++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(int i=a-1; i>0; i--)//i=2,1
    {
        for(int o=0; o<a-i; o++)
        {
            printf(" ");
        }
        for(int o=0; o<2*i-1; o++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}


/*
a=3
i=1,2,3
  *
 ***
*****
 ***
  *
*/