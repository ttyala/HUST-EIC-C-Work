#include <stdio.h>

int main()
{
    float num1,num2,result;
    char op;
    scanf("%f%c%f",&num1,&op,&num2);
    switch(op)
    {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
            break;
        default:
            printf("error");
            return 0;
    }
    printf("result=%f",result);
    return 0;
}