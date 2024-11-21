#include <stdio.h>
void main()
{
    int i,j,n,temp;
    scanf("%d",&n);
    int a[n];
    printf("input the number;\n");
    for(i=0;i<n;i++)
    {scanf("%d",&a[i]);}
    for(i=0,j=n-1;i<j;i++,j--)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    printf("now the numbers are:\n");
    for(i=0;i<n;i++)
    {printf("%5d",a[i]);}
}