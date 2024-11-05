#include <stdio.h>

int add10(int x)
{
     x+=10;
    printf("in a function!\n\n");
    return x;
}

int main()
{
	int i=1;
	printf("Let's go !\n\n");
	printf("i is %d\n", i);
	i=add10(i);
	printf("then i is %d\n", i);
	return 0;
}
