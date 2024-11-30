#include <stdio.h>

int main()
{
    int x=1, find=0;
    while(!find)
    {
        if(x%2==1 && x%3==2 && x%5==4 && x%6==5 && x%7==0)
        {
            find+=1;
            printf("%d\n", x);
        }
         x++;
    }

}

