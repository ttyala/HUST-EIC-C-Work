/*
1. 请写出c语言程序实现以下功能：从键盘输入一个小写英文字母，将其转换为大写英文
字母后，将转换后的大写英文字母及其十进制的ASCII码显示到屏幕上。
*/

#include <stdio.h>
int main()
{
    char ch;
    ch = getchar();
    ch = ch + ('A' - 'a');
    printf("%c %d",ch,(int)ch);
    return 0;
}