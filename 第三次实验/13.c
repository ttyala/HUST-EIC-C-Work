#include <stdio.h>

#define N 10

void BubSort(int a[],int n);
void main()
{
    int a[N];
    for(int i=0;i<N;i++) scanf("%d",&a[i]);
    BubSort(a,N);
    for(int i=0;i<N;i++) printf("%d\t",a[i]);

}



void BubSort(int a[],int n)
{
    int i,j,t;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
}