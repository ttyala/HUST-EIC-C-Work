#include <stdio.h>

void call_2darray(int [][4], int n1);
void call_p_element(int *p, int n1, int n2);
void call_p_row(int (*p)[4], int n1);
void call_p_array(int *p[], int n1, int n2);
void call_p_double(int **p, int n1, int n2);

int main()
{
    int num[3][4]={0,1,2,3,\
             1,2,3,4,\
             2,3,4,5};
    int *p_element,(*p_row)[4],*p_array[3],**p_double;
    p_element=num[0];
    p_row=num;
    for(int i=0;i<3;i++)
        p_array[i]=num[i];
    p_double=p_array;
    call_2darray(num,3);
    call_p_element(p_element,3,4);
    call_p_row(p_row,3);
    call_p_array(p_array,3,4);
    call_p_double(p_double,3,4);
}

void call_2darray(int num[][4], int n1)
{
    printf("in call_2darray:\n");
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<4;j++)
            printf("%-3d",num[i][j]);
        printf("\n");
    }
}

void call_p_element(int *p, int n1, int n2)
{
    printf("in call_p_element:\n");
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
            printf("%-3d",*(p+(i*sizeof(int)+j)));
        printf("\n");
    }   
}

void call_p_row(int (*p)[4], int n1)
{
    printf("in call_p_row:\n");
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<4;j++)
            printf("%-3d",*(*(p+i)+j));
        printf("\n");
    }    
}

void call_p_array(int *p[], int n1, int n2)
{
    printf("in call_p_array:\n");
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
            printf("%-3d",*(*(p+i)+j));
        printf("\n");
    }      
}

void call_p_double(int **p, int n1, int n2)
{
    printf("in call_p_double:\n");
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
            printf("%-3d",*(*(p+i)+j));
        printf("\n");        
    }      
}