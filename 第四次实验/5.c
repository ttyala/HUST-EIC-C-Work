// #include<stdio.h>
// void GetStr(char *);
// int main()
// {
//     char s[80];
//     char *ptr=s;
//     GetStr(ptr);
//     puts(ptr);
//     return 0;
// }

// void GetStr(char *s)
// {
//     scanf("%s",s);
// }


#include<stdio.h>
#include<stdlib.h>
char* GetStr(void);
int main()
{
    char *ptr=NULL;
    ptr = GetStr();
    puts(ptr);
    return 0;
}

char* GetStr(void)
{
    char *s;
    s = (char *)malloc(100);
    scanf("%s",s);
    return s;
}