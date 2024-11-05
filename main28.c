#include <stdio.h>
#include <stdlib.h>
#include <conio.h> //getch()kbhit需要
#include <time.h>
#include <windows.h>

#define LEFT 0
#define RIGHT 50

/*攻击目标位置初始化*/ //但还是尽量别用全局变量
int target_x = 5;
int target_y = 0;

void moveTarget()
{
    if(rand()%2)
    {
        target_y--;
        if(target_y<LEFT) target_y=LEFT;
    }
    else
    {
         target_y++;
        if(target_y>RIGHT) target_y=RIGHT;
    }
}

int main()
{
    /*飞机位置初始化*/
	int fly_x = 5;
	int fly_y = 10;
    /*键盘输入*/
	int input;

    /*随机种子设定*/
    srand(time(0));
    int isFired=0;
    int isKilled=0;

	while (1)
	{
		system("cls");   // 清屏

		if (!isKilled)  // 输出靶子
		{
		    /*更新靶子的位置*/
            moveTarget();
			for (int j=0;j<target_y;j++)
				printf(" ");
			printf("+\n");
		}

		if (isFired==0) // 输出飞机上面的空行
		{
			for(int i=0;i<fly_x;i++)
				printf("\n");
		}
		else   // 输出飞机上面的激光竖线
		{
			for(int i=0;i<fly_x;i++)
			{
				for (int j=0;j<fly_y;j++)
					printf(" ");
				printf("  |\n");
			}
			if (fly_y+2==target_y)  // +2是因为激光在飞机的正中间，距最左边2个坐标
				isKilled = 1; // 击中靶子
			isFired = 0;
		}

		// 下面输出一个复杂的飞机图案
		for (int j=0;j<fly_y;j++)
			printf(" ");
		printf("  *\n");
		for (int j=0;j<fly_y;j++)
			printf(" ");
		printf("*****\n");
		for (int j=0;j<fly_y;j++)
			printf(" ");
		printf(" * * \n");


		if(kbhit())  // 判断是否有输入
		{
			input = getch();  // 根据用户的不同输入来移动，不必输入回车
			if (input == 'a')
				fly_y--;  // 位置左移
			if (input == 'd')
				fly_y++;  // 位置右移
			if (input == 'w')
				fly_x--;  // 位置上移
			if (input == 's')
				fly_x++;  // 位置下移
			if (input == ' ')
				isFired = 1;
		}
		Sleep(50);
	}
	return 0;
}
