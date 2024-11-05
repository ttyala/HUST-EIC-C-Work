#include <stdio.h>

void main()
{
    int grade;
    printf("please input your grade:");
    scanf("%d",&grade);
    if(grade >= 90)
    {
        printf("good");
    }
    else if(grade >= 60)
    {
        printf("middle");
    }
    else
    {
        printf("fail");
    }
}