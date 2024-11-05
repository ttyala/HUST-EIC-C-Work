#include <stdio.h>

int max (int x, int y)
{
    int z;
    if (x>y)
        z = x;
    else
        z = y;
    return z;
}


int main()
{
    int a, b, c;
    printf ("Input a and b\n");
    scanf ("%d, %d", &a, &b);
    printf ("a=%d, b=%d\n", a, b);
    c = max (a, b);
    printf ("max=%d\n", c);
}



