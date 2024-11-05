#include <stdio.h>
//many errors. Find them!
int main()
{
    int i=1;
    printf("old i=%d,\n", i);
    i=add10(i);
    printf("new i=%d,\n", i);
}

int add10(int x)
{
    x+=10;
    printf("in add10 function\n");
    return x;
}



