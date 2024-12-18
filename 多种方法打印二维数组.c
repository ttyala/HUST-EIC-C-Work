#include <stdio.h>
int main()
{
    //任务是打印a[1][2]，用多种方法
    int a[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};


    //最简单，直接数组名加上下标
    printf("下标访问：%d\n",a[1][2]);


    //行指针k,定义一个指向包含4个整数的数组的指针p，并将其指向二维数组a
    int (*p)[4]=a;
    printf("行指针：%d\n",*(*(p+1)+2));  //使用行指针p访问二维数组a的第1行第2列元素  
    //进入目标行，找到目标列，最后把元素取出来
    //p指向第0行的地址；(p+1)指向第1行的地址；*(p+1)指向第1行第0列的地址；*(p+1)+2指向第1行第2列的地址；*(*(p+1)+2)指向第1行第2列的元素
    //&a[0]             &a[1]               &a[1][0]                    &a[1][2]                   a[1][2]


    //元素指针
    int *pe=a[0];   // 定义一个整型指针pe，指向二维数组a的第一行首元素（即a[0][0]）
    printf("元素指针：%d\n",*(pe+(1*sizeof(int)+2)));
    //程序员自己负责偏移量 i*m+j 其中 i=行数 m=sizeof(数据类型) j=列数


    //指针数组
    int *pa[4];     // 定义指针数组pa，存储指向二维数组每一行的指针
    for(int i=0;i<4;i++)
    {
       pa[i]=a[i];  // 让指针数组的每个元素指向二维数组a的一行
    }
    printf("指针数组：%d\n",*(*(pa+1)+2));
    

    int b[12]={1,2,3,4,5,6,7,8,9,10,11,12};
    for(int i=0;i<12;i++)
    {
        printf("%5d",b[i]);
    }
    printf("\n");
    for(int i=0;i<12;i++)
    {
        printf("%5d",b[11-i]);
    }
    return 0;
}