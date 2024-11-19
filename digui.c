#include <stdio.h>

int time = 0;
int f(int m,int n)
{
    if(n==0||m==0)return 1;
    else {
        printf("递归%d次\n",time++);
        return (f(m-1,n)+f(m,n-1)-f(m-1,n-1));
        }

}

// 计算 f(100, 100)
int main() 
{
    
    f(100,100);
    printf("\n\n我tmd递归了%d次！！！",time);
    return 0;
}


