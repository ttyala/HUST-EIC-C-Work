#include <stdio.h>

int main()
{
    int a, b;
    double c;
    float d;
    printf("please input a, b, c and d:\n");
    scanf ("%d %d %lf, %f", &a, &b, &c, &d);
    printf ("a=%d, b=%d, c=%f, d=%f\n", a, b, c, d);
}
