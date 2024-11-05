# include <stdio.h>
int  main( )
{
    char ch1, ch2;
    ch1 = getchar();
    printf("是ch1=%c,\n",ch1);
    ch2 = getchar();
    while (ch2=='\n')
        ch2 = getchar();
    printf("ch2=%c,\n",ch2);
    printf("over!");
    return 0;
}
