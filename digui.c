#include <stdio.h>

int time = 0;
int f(int m,int n)
{
    if(n==0||m==0)return 1;
    else {
        printf("�ݹ�%d��\n",time++);
        return (f(m-1,n)+f(m,n-1)-f(m-1,n-1));
        }

}

// ���� f(100, 100)
int main() 
{
    
    f(100,100);
    printf("\n\n��tmd�ݹ���%d�Σ�����",time);
    return 0;
}


