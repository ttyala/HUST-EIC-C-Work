#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define TIMES 6000

// 主函数，程序入口点
int main()
{
    int face, roll, frequency[7]={0};
    float percent;
    srand(time(NULL));
    // 模拟掷骰子，记录各面的出现频率
    for(roll=0;roll<TIMES;roll++)
    {
        face = rand()%6+1;
        frequency[face]++;
    }
    // 打印结果表头
    printf("%4s%17s%17s\n","Face","Frequency","Percent");
    // 打印各面的频率和百分比
    for(face=1; face<=6; face++)
    {
        percent = (float)frequency[face]*100/TIMES;
        printf("%4d%17d%16.2f%%\n",face,frequency[face],percent);
    }
    return 0;
}