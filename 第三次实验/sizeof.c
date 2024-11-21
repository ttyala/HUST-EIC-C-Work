#include<stdio.h>

int main()
{
    int a[]={1,2,3,4};
    char b_str[]="hello";
    char c_str[]={'h','e','l','l','o'};
    printf("%d\n",sizeof(a));
    printf("%d\n",sizeof(b_str));
    printf("%d\n\n",sizeof(c_str));

    printf("%d,%p\n",sizeof(a+0),a+0);
    printf("%d,%d\n",sizeof(*a),*a);
    printf("%d,%d\n",sizeof(a[1]),a[1]);
    printf("%d,%p\n",sizeof(&a),&a);

    return 0;
}