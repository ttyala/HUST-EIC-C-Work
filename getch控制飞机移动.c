#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
//scanf()函数要求输入字符后按回车键才能执行，交互效果不好
//使用getch()，不需要回车。
int main()
{
    int i,j;
    int x = 5, y = 10;
    char input;

    while (1)
    {
        system("cls"); //清屏
        //输出飞机上面的空行
        for (i=0;i<x;i++)
            printf("\n");
        //输出飞机左边的空格
        for (j=0;j<y;j++)
            printf(" ");
        //输出简陋的飞机
        {
            for(int i=0;i<1;i++){
                // for(int i;i<3;i++){
                //     printf(" ");
                // }
                // for (int a = 0;a < 5;a++){
                //     printf("*");
                // }
                printf("bbppO");
                printf("\n");
            }
        }

        if (kbhit())  //判断是否有输入（返回值非零）
        {
            input = getch();
            if (input == 'a')
                y--;
            if (input == 'd')
                y++;
            if (input == 'w')
                x--;
            if (input == 's')
                x++;
            if (input == 'c')//点击c结束运行
                return 0;
        }

    }
    return 0;
}
