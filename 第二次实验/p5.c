#include <stdio.h>

void main()
{
    int i,j;
    for(i=40;i<101;i++)
    {
        for(j=2;j<=i;j++)
        {
            if(i%j==0){break;}

        }
        if(i==j)
        {printf("%d,",i);}
    }
}