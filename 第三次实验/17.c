/*
һֻС���Ӷ����10�����ηֲ��Ķ��е�һ�������ڵ�һ������
û���ҵ����ӣ��͸�һ����������������ȥ��;:
Ҳû���ҵ�����
��������������������ȥ��;�Ժ�ÿ�ζ�һ����ȥ��С����
������ȥ�����һֱ�Ҳ������ӣ��������ӿ������ĸ�����?
*/

#include <stdio.h>

#define N 10 //hole�ĸ���

int search(int hole[N])
{
    //���ı��Ϊ1234567890
    int n =1,addnum =2;
    while(1){               //n�仯˳��0 2 5 9 4 0 7 5 4 4 5 7
        hole[n]=1;
        // printf("%d\n",n);
        n=(n + addnum) % 10;
        addnum++;
        if(addnum>1000)break;
    }
    return 1;
}

int find(int hole[N])
{
    for(int n=0;n<N;n++){
        printf("%d ",hole[n]);
    }    
    printf("С���ӿ����ڵĶ���");
    for(int n=0;n<N;n++){
        if(hole[n]!=1)printf("%2d",n);
    }
    return 0;
}

int main()
{
    int hole[N]={0};
    search(hole);
    find(hole);
    return 0;
}