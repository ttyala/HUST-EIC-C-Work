#include <stdio.h>
#include <stdlib.h>
int FindMax(int *p,int m,int n,int *pRow,int *pCol);
int main(void)
{
    int *pScore=NULL,i,j,m,n,maxScore,row,col;
    printf("Please enter array size m,n:");
    scanf("%d,%d",&m,&n);//输入班级数m和学生数n
    pScore=(int*)calloc(m*n,sizeof(int));//申请m*n个sizeof(int)字节的内存
    if (pScore==NULL)
    {
        printf("No enough memory!\n");
        exit(0);
    }
    printf("Please enter the score:\n");
    for (i=0; i<m; i++)//输入m个班学生的某门课成绩
    {
        for (j=0; j<n; j++)
        {
            scanf("%d",&pScore[i*n+j]);
        }
    }
    maxScore=FindMax(pScore,m,n,&row,&col);
    printf("maxScore=%d,class=%d,number=%d\n",
           maxScore,row+1,col+1);//输出最高分及其所在的班级和班级内的序号
    free(pScore);//释放用calloc()申请的内存
    return 0;
}
//函数功能：计算任意m行n列的二维数组中元素的最大值，并指出其所在的行/列下标值
//函数参数：整型指针变量p，指向一个二维整型数组的第0行第0列
//　　　　 整型变量m，二维整型数组的行数
//　　　　 整型变量n，二维整型数组的列数
//　　　　 整型指针变量pRow，指向数组最大值所在的行
//　　　　 整型指针变量pCol，指向数组最大值所在的列
//函数返回值：数组元素的最大值
int FindMax(int *p,int m,int n,int *pRow,int *pCol)
{
    int i,j,max;
    max=p[0];//置初值，假设第一个元素值最大
    *pRow=0;//记录当前最大值所在的行下标
    *pCol=0;//记录当前最大值所在的列下标
    for (i=0; i<m; i++)
    {
        for (j=0; j<n; j++)
        {
            if (p[i*n+j] > max)
            {
                max=p[i*n+j];//记录当前最大值
                *pRow=i;//记录当前最大值所在的行下标
                *pCol=j;//记录当前最大值所在的列下标
            }
        }
    }
    return max;//返回最大值
}
