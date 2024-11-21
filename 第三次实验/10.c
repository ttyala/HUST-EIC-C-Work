#include <stdio.h>
#define N 40
int Average(int score[], int n);
void ReadScore(int score[], int n);
int main()
{
    int score[N], aver, n;
    printf("Input n:");
    scanf("%d",&n);
    ReadScore(score,n);
    aver = Average(score,n);
    printf("Average score is %d\n",aver);
    return 0;
}

int Average(int score[], int n)
{
    int i, sum = 0;
    for(i=0;i<n;i++)
    {
        sum += score[i];
    }
    return sum/n;
}

void ReadScore(int score[], int n)
{
    int i;
    printf("Input score:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&score[i]);
    }
}