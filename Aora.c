/* ����һ����ĸ��ʵ�ִ�Сд���������������ĸ�����cnmɵ�ơ� */

#include <stdio.h>

int main()
{
    char ch;
    printf("������һ����ĸ��");
    ch = getchar();
    if(ch >= 'a' && ch <= 'z')
    {
        ch = ch -'a' + 'A';
        printf("��дΪ��%c",ch);
    }
    else if (ch >='A' && ch <='Z')
    {
        ch = ch - 'A' + 'a';
        printf("СдΪ��%c",ch);
    }
    else
    {
        printf("cnmɵ��");
    }
    
    
    

    return 0;
}