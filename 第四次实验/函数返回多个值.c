#include  <stdio.h>
#define  N  10
void FindMax(int score[],long num[],int n,int *pMaxScore,long *pMaxNum);
int main()
{
	int  score[N], maxScore;
	int    n, i;
	long   num[N], maxNum;
	printf("How many students (<=10)?");
	scanf("%d", &n);    		                   /* 从键盘输入学生人数n */
	printf("Input student's ID and score:\n");
	for (i=0; i<n; i++)
	{
		scanf("%ld%d", &num[i], &score[i]);   /* 字母d前为字母l */
	}
	FindMax(score, num,n, &maxScore, &maxNum);/* 按地址调用函数 */
	printf("maxScore = %d, maxNum = %ld\n", maxScore, maxNum);
	return 0;
}
/* 函数功能：计算最高分及其相应学生的学号 */
void FindMax(int score[],long num[],int n,int *pMaxScore,long *pMaxNum)
{
	int    i;
	*pMaxScore = score[0];          	/* 假设score[0]为当前最高分 */
	*pMaxNum = num[0];              	/* 记录score[0]的学号num[0] */
	for (i=1; i<n; i++)             	/* 对所有score[i]进行比较 */
	{
		if (score[i] > *pMaxScore) 	/* 如果score[i]高于当前最高分 */
		{
			*pMaxScore = score[i]; 	/* 用score[i]修改当前最高分 */
			*pMaxNum = num[i];     	/* 记录当前最高分学生的学号num[i] */
		}
	}
}


