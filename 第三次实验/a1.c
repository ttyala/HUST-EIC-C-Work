#include<stdio.h>
int anyFun();
int main()
{
    anyFun();
    printf("%d\n",anyFun());
    printf("%p\n",anyFun);
    return 0;

}

int anyFun()
{
    printf("In anyFun()!\n");
    return 1;
}