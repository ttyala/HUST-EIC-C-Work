#include <stdio.h>
void swap(int,int);
void main()
{
    int a=3, b=5;
    printf("main-->a @ %p, b @ %p\n",&a,&b);
    printf("a=%d,    b=%d\n",a,b);
    swap(a,b);
    printf("a=%d,    b=%d\n",a,b);
}

void swap(int a,int b)
{
    int temp;
    temp = a;
    a = b;
    b= temp;
    printf("swap-->a @ %p, b @ %p\n",&a,&b);
}
