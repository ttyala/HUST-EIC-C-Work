#include <stdio.h>

void swap(int *x, int *y);
void main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    printf("main-->a @ %p, b @ %p\n",&a,&b);
    if(a>b)swap(&a,&b);
    if(a>c)swap(&a,&c);
    if(b>c)swap(&b,&c);
    printf("%d\t%d\t%d\n",a,b,c);
    
}

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    printf("%d>%d swap-->*x @ %p, *y @ %p\n",*x,*y,*x,*y);
    //printf("swap-->x @ %p, y @ %p\n",x,y);
}
