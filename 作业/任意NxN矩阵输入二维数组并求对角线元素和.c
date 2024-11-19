/*
5. 请写出c语言程序实现以下功能：输入nxn阶矩阵，用函数
编程计算并输出矩阵两条对角线上的所有元素之和（要求使用
两个自定义函数分别实现矩阵元素值输入和对角线元素求和功能）。
*/
/*输入输出实例
5 5 5 5 5 6
7 89 5 7 4 6
0 6 4 7 6 89
6 3 4 8 6 5
8 4 5 3 8 6
7 5 4 87 6 9
----------------
输入的6x6矩阵为:
5,5,5,5,5,6,
7,89,5,7,4,6,
0,6,4,7,6,89,
6,3,4,8,6,5,
8,4,5,3,8,6,
7,5,4,87,6,9,
对角线元素求和为:155
*/


#include <stdio.h>
#define MAX 100 //矩阵n最大值


int matrix[MAX][MAX];

int main()
{
    int GetMatrix();    //输入NxN矩阵
    int DiagonalSum();  //对角线元素求和
    int n;//矩阵行数

    n = GetMatrix();
    printf("输入的%dx%d矩阵为:\n",n,n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {   
            printf("%d,",matrix[i][j]);
        }
        printf("\n");
    }
    int sum = DiagonalSum(n);
    printf("对角线元素求和为:%d",sum);
}

int GetMatrix()  //输入NxN矩阵
{   
    int n;
    char ch;
    for(int i=0;i<MAX;i++)
    {
        for(int j=0;j<MAX;j++)
        {   
            n = j+1;
            scanf("%d",&matrix[i][j]);
            ch = getchar();
            if(ch==('\n')){break;}
            // printf("%d\n",matrix[i][j]);
        }
        if(i==(n-1)){break;}
        //printf("%dx%d\n",n,n);
    }
    // printf("%d\n",n);
    return n;
}

int DiagonalSum(int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum += matrix[i][i];
        sum += matrix[i][n-i-1];
    }
    if(n%2==1)
    {
        sum -=matrix[n/2][n/2];
    }
    return sum;
}
