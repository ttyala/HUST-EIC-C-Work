#include <stdio.h>
int main()
{
    int  *p1,*p2, a,b;
    int tmp;
    printf("please input tow numbers:");
    scanf("%d,%d",&a,&b);
    p1=&a;p2=&b;
    printf("p1指向(存放)的地址=%p, p2指向(存放)的地址=%p\n", p1, p2);
    printf("&p1=%p, *p1=%d, &p2=%p,*p2=%d\n", &p1, *p1, &p2, *p2);
    if(a<b)
    {
           tmp=*p1;*p1=*p2;*p2=tmp;
    }
    printf("a=%d,b=%d\n",a,b);
    printf("*p1=%d,*p2=%d\n",*p1,*p2);
    printf("p1指向的地址=%p, p2指向的地址=%p\n", p1, p2);
    printf("&p1=%p, &p2=%p\n", &p1, &p2);
    return 0;
}




