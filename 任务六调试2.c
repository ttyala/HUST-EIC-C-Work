#include <stdio.h>
int main()
{
	int i=0;
	double j=10.0;
	printf("Let's go !\n\n");
	printf("Size of double= %d \n", sizeof(j));
	printf("Address of i=%p\n", &i);
	printf("Address of j=%p\n", &j);
	for (i=0; i<10; i++)
	{
		printf("i = %d, j=%f \n", i, j);
		j++;
	}
	printf("\n Game Over\n");
	return 0;
}


