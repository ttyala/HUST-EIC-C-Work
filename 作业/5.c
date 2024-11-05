/*
5. 请写出c语言程序实现以下功能：输入nxn阶矩阵，用函数
编程计算并输出矩阵两条对角线上的所有元素之和（要求使用
两个自定义函数分别实现矩阵元素值输入和对角线元素求和功能）。
*/

#include <stdio.h>
#define N 4

void GetMatrix(int matrix[N][N]);
int CalculateDiagonalSum(int matrix[N][N]);

int main()
{
    int matrix[N][N]; 
    GetMatrix(matrix);
    
    printf("输入的%dx%d矩阵为:\n",N,N);
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {   
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    int diagonalSum = CalculateDiagonalSum(matrix);
    printf("对角线上的元素之和为: %d\n", diagonalSum);

    return 0;
}

void GetMatrix(int matrix[N][N])
{
    printf("请输入矩阵的元素:\n");
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
}

int CalculateDiagonalSum(int matrix[N][N])
{
    int sum = 0;
    for(int i = 0; i < N; i++)
    {
        sum += matrix[i][i]; // 主对角线
        sum += matrix[i][N - 1 - i]; // 副对角线
    }
    // 去掉中心元素的重复计数（在N为奇数时）
    if (N % 2 == 1) {
        sum -= matrix[N / 2][N / 2];
    }
    return sum;
}
