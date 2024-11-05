#include <stdio.h>
#include <math.h>
#define PI 3.141592653579
#define jingdu 1e-5
void main()
{
    double r,area;
    while(1)
    {
        printf("input the radius:");
        scanf("%lf",&r);
        if(fabs(r)<jingdu)
        {break;}
        else if (r<0.0)
        {
            printf("error!\n");
            continue;
        }
        area = PI*r*r;
        printf("the area is:%lf\n",area);
    }
}