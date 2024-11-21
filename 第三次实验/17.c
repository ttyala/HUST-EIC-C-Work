/*
一只小兔子躲进了10个环形分布的洞中的一个。狼在第一个洞中
没有找到兔子，就隔一个洞，到第三个洞去找;:
也没有找到，就
隔两个洞，到第六个洞去找;以后每次多一个洞去找小兔子
这样下去，如果一直找不到兔子，请问兔子可能在哪个洞中?
*/

#include <stdio.h>

#define N 10 //hole的个数

int search(int hole[N])
{
    //洞的编号为1234567890
    int n =1,addnum =2;
    while(1){               //n变化顺序0 2 5 9 4 0 7 5 4 4 5 7
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
    printf("小兔子可能在的洞：");
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