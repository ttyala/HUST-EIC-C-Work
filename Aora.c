/* 输入一个字母，实现大小写互换，如果不是字母输出“cnm傻逼” */

#include <stdio.h>

int main()
{
    char ch;
    printf("请输入一个字母：");
    ch = getchar();
    if(ch >= 'a' && ch <= 'z')
    {
        ch = ch -'a' + 'A';
        printf("大写为：%c",ch);
    }
    else if (ch >='A' && ch <='Z')
    {
        ch = ch - 'A' + 'a';
        printf("小写为：%c",ch);
    }
    else
    {
        printf("cnm傻逼");
    }
    
    
    

    return 0;
}