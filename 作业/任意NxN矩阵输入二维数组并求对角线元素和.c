/*
5. ��д��c���Գ���ʵ�����¹��ܣ�����nxn�׾����ú���
��̼��㲢������������Խ����ϵ�����Ԫ��֮�ͣ�Ҫ��ʹ��
�����Զ��庯���ֱ�ʵ�־���Ԫ��ֵ����ͶԽ���Ԫ����͹��ܣ���
*/
/*�������ʵ��
5 5 5 5 5 6
7 89 5 7 4 6
0 6 4 7 6 89
6 3 4 8 6 5
8 4 5 3 8 6
7 5 4 87 6 9
----------------
�����6x6����Ϊ:
5,5,5,5,5,6,
7,89,5,7,4,6,
0,6,4,7,6,89,
6,3,4,8,6,5,
8,4,5,3,8,6,
7,5,4,87,6,9,
�Խ���Ԫ�����Ϊ:155


*/


#include <stdio.h>
#define MAX 100 //����n���ֵ


int GetMatrix(int matrix[MAX][MAX]);
int DiagonalSum(int n, int matrix[MAX][MAX]);

int main()
{
    int matrix[MAX][MAX];
    int n;//��������

    n = GetMatrix(matrix);
    printf("�����%dx%d����Ϊ:\n",n,n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {   
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    int sum = DiagonalSum(n,matrix);
    printf("�Խ���Ԫ�����Ϊ:%d\n����enter�ر�......\n",sum);
    n = getchar();

}

int GetMatrix(int matrix[MAX][MAX])  //����NxN����
{   
    int n;//nxn����
    char ch;
    printf("����������NxN����Ԫ���Կո�ָ����س�����\n����:\n");
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

int DiagonalSum(int n,int matrix[MAX][MAX])
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
