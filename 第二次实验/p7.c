#include <stdio.h>

void main()
{
    int a,b,c;
    for(a=1;a<=98;a++)
    {
        for(b=1;b<=98;b++)
        {
            for(c=1;c<=98;c++)
            {
                if((a+b+c==100)&&(a*3+b*2+c/3==100)&&(c%3==0))
                {
                    printf("ĸ����:%d ������:%d С����:%d\n",a,b,c);
                }
            }
        }
    }
}