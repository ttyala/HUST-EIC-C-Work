#include <stdio.h>

float aver1(float *,int n);
float aver2(float (*p)[4],int n);

void main()
{
    float score[3][4]={
        {63,65,75,61},
        {83,87,90,85},
        {90,95,100,93}
    };
    printf("total average score = %f\n",aver(*score,12));
    printf("no.2 average score = %f",aver(score[1],4));
}

float aver1(float *pdata,int n)
{
    int i;
    float average=0;
    for(i=0;i<n;i++)average+=pdata[i];
    average=average/n;
    return average;
}


float aver2(float (*p)[4],int n)
{
    int i,j;
    float average=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<4;j++)
            average+=*(*(p+i)+j);
        p++;
    }
}



/*
data[0][0]=*data[0]  
data[0]=&data[0][0]  0行0列的地址
*/