/*
4. 编写程序，输出从公元1600~2014年所有闰年的年号。每输出5个年号换一行。判断是
否为闰年的条件如下。
（1）公元年数如能被4整除，而不能被100整除，则是闰年。
（2）公元年数如能被400整除也是闰年。
*/

#include <stdio.h>

void main()
{
    int num =0;
    for(int n=1600; n<2015; ++n)
    {
        if(((n%4==0)&&(n%100!=0))||(n%400==0))
        {
            printf("%d ",n);
            num++;
            if(num==5)
            {
                printf("\n");
                num = 0;
            }
        }
    }   
}