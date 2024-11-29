#include<stdio.h>
#define N 10

void FindMax(int score[],long num[],int n,int *pMaxScore, long *pMaxNum)
{
    
    *pMaxScore = score[0];
    *pMaxNum = num[0];
    for(int i=0;i<n;i++)
    {
        if(score[i]>*pMaxScore)
        {
            *pMaxScore = score[i];
            *pMaxNum = num[i];
        }
    }
}
int main()
{
    int sorce[N], maxSorce;
    int n, i;
    long num[N], maxNum;
    printf("how many students (<=10)?");
    scanf("%d",&n);
    printf("input student's ID and score:\n");
    for(i=0;i<n;i++)
    {
        scanf("%ld%d",&num[i],&sorce[i]);
    }
    FindMax(sorce, num, n, &maxSorce, &maxNum);
    printf("maxScore = %d, maxNum = %ld\n",maxSorce,maxNum);
    return 0;
}