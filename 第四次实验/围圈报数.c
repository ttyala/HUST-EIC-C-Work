#include <stdio.h>

int main ()
{
    int i, k, m, n, num[50], *p;
    printf("\n input number of person: n=");
    scanf("%d", &n);
    p=num;
    for(i=0; i<n; i++)
        *(p+i)=i+1; //以1至n为序给每个人编号
    i=0;            //i为每次循环时计数变量
    k=0;            //k为按1，2，3报数时的计数变量
    m=0;            //m为退出人数

    while (m<n-1)  //如果是m==n-1，就不要循环了。已经完成
    {
        if(*(p+i)!=0) k++;
        if(k==3)
        {
            printf("At present, NO. %d is excluded!\n", *(p+i));
            *(p+i)=0; //清0，视为退出
            k=0;  //重新计数
            m++; //退出人数加1

        }
        i++;
        if(i==n) i=0; //报数到尾后，i恢复到0
    }
    while(*p==0) p++;
    printf("The last one is NO. %d\n", *p);

	return 0;
}
