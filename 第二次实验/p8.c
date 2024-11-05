#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//#define TIME 10 //考试次数

void main()
{
    int a,b,c,result,input,grade,time1,TIME;
    clock_t start,end;
    time1 = 0;
    grade = 0;
    srand(time(0));
    while(1)
    {
        printf("please iuput the num of Q:");
        scanf("%d",&TIME);
        if(TIME%5==0)
        {
            start = clock();
            printf("time start!\n");
            break;
        }
        else
        {
           printf("ERROR!must be a multiple of 5!\n");
           continue;
        }
    }

    while (time1<TIME)
    {
        a = rand()%100+1;
        b = rand()%100+1;
        c = rand()%2;
        switch (c)
        {
        case 0:
            result = a + b;
            printf("%d+%d=",a,b);
            break;
        
        case 1:
            result = a - b;
            if(result<0){printf("%d-%d=",b,a);result = b-a;}
            else{printf("%d-%d=",a,b);}
            break;
        }
        scanf("%d",&input);
        if(input==result)
        {
            printf("correct!\n");
            grade += 100/TIME;
        }
        else{printf("wrong!answer=%d\n",result);}
        time1 += 1;

    }
    end = clock();
    printf("---------------\nYour grade=%d\nTime:%.2f",grade,(double)(end-start)/CLK_TCK);
}
