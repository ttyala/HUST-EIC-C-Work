#include<stdio.h>

void main()
{
    int test[5]={1,2,3,4,5};
    printf("%d,%d,%d,%d\n",test[-1],test[0],test[4],test[5]);
    printf("%d,%d,%d,%d\n",test[-1],test[0],test[4],test[5]);
 //地址是否连续？
    printf("%p,%p,%p,%p\n",&test[-1],&test[0],&test[4],&test[5]);
 //地址相减
    printf("%d,%d\n",&test[0]-&test[1],&test[6]-&test[4]);
 //数组名的本质
    printf("%p,%p,%p,%p\n",test,&test[0],test+1,&test[0]+1);
    printf("%p,%p",&test,&test+1);
}