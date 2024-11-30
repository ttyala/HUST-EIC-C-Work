#include <stdio.h>
void main()
{   int y,m,leap,season,days;
    printf("年份,月份:");
    scanf("%d,%d",&y,&m);
    if ((y%4==0 && y%100!=0) || (y%400==0))
        leap=1;                    /*为闰年*/
    else
        leap=0;                    /*为平年*/
    if (m>=3 && m<=5)
        season=1;
    else if (m>=6 && m<=8)
        season=2;
    else if (m>=9 && m<=11)
        season=3;
    else
        season=4;
    switch (m)
    {
        case 1:case 3:case 5:case 7:case 8:case 10:
	    case 12:days=31;break;        /*1、3、5、7、8、10、12月份为31天*/
	    case 4:case 6:case 9:
	    case 11:days=30;break;        /*4、6、9、11月份为30天*/
	    case 2:if (leap==1) days=29;
	            else days=28;
    }
    printf("%d年%s闰年\n",y,(leap==1 ? "是" :  "不是"));
    printf("该季节是");
    switch(season)
    {
    case 1:printf("春季\n");break;
    case 2:printf("夏季\n");break;
    case 3:printf("秋季\n");break;
    case 4:printf("冬季\n");break;
    }
    printf("当月天数:%d\n",days);
}
