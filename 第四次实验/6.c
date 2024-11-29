#include<stdio.h>

int main()
{
    char list[100];
    char list_fixed[100];
    int n,num_W=0,num_L=0;
    scanf("%s",list);
    for(int i=0;list[i]!='E';i++)
    {
        list_fixed[i]=list[i];
        n=i+1;
    }

    printf("%s\n%d\n",list_fixed,n);
    for(int i=0;i<n;i++)
    {
        if(list_fixed[i]=='W')num_W++;
        if(list_fixed[i]=='L')num_L++;
    }
    printf("W:%d\nL:%d",num_W,num_L);
}