/*
2. 请写出c语言程序实现以下功能：从键盘上任意输入三角形的三边长a、b、c，判断能否
构成三角形。若能，计算并输出三角形面积；否则，提示不能构成三角形。已知构成三角形
的条件是：任意两边之和大于第三边。
*/

#include <stdio.h>
#include <math.h>

void main()
{
    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);
    if((a+b>c)&&(a+c>b)&&(b+c>a))
    {   
        float p = (a+b+c)/2;
        float S = sqrt(p*(p-a)*(p-b)*(p-c));
        printf("三角形面积为:%f",S);
    }
    else
    {
        printf("不能构成三角形");
    }
}