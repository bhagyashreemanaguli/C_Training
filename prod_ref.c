//write a function which will multiply 3 numbers call and it by reference
#include <stdio.h>
void prod_ref(int *a,int *b, int *c)
{
    int prod = *a * *b * *c; 
    printf("%d",prod);
}
void main()
{
    int a = 7;
    int b = 8;
    int c = 9;
    prod_ref(&a,&b,&c);
}



