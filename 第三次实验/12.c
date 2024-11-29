#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

int *getcRandom()
{
    static int r[N];
    int i=10;
    srand(time(NULL));
    for(i=0;i<N;i++)
    {
        r[i]=rand();
        printf("r[%d]= %d\n",i,r[i]);
    }
    return r;
}

int main()
{
    int *p;
    int i;
    p = getcRandom();
    for(i=0;i<N;i++)
    {
        printf("p[%d] : %d\n",i,p[i]);
    }
    return 0;
}