/*
5. ��д��c���Գ���ʵ�����¹��ܣ�����nxn�׾����ú���
��̼��㲢������������Խ����ϵ�����Ԫ��֮�ͣ�Ҫ��ʹ��
�����Զ��庯���ֱ�ʵ�־���Ԫ��ֵ����ͶԽ���Ԫ����͹��ܣ���
*/

#include <stdio.h>
#define N 4

void GetMatrix(int matrix[N][N]);
int CalculateDiagonalSum(int matrix[N][N]);

int main()
{
    int matrix[N][N]; 
    GetMatrix(matrix);
    
    printf("�����%dx%d����Ϊ:\n",N,N);
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {   
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    int diagonalSum = CalculateDiagonalSum(matrix);
    printf("�Խ����ϵ�Ԫ��֮��Ϊ: %d\n", diagonalSum);

    return 0;
}

void GetMatrix(int matrix[N][N])
{
    printf("����������Ԫ��:\n");
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
        sum += matrix[i][i]; // ���Խ���
        sum += matrix[i][N - 1 - i]; // ���Խ���
    }
    // ȥ������Ԫ�ص��ظ���������NΪ����ʱ��
    if (N % 2 == 1) {
        sum -= matrix[N / 2][N / 2];
    }
    return sum;
}
