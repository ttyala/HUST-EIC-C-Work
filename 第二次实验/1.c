#include <stdio.h>

void main()
{
    int flag=1;
    for (int i =0;i<5;i++)
    {
        if(flag) { printf("i=%d----\n",i);}
        else {break;}
        for(int j=14;j>0;j--)
        {
            if(j>=11)
            {
                printf("j=%d,",j);
            }
            else
            {
                printf("\n");
                flag=0;
                break;
            }
        }
    }
}