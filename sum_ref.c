//write a c program to add 2 numbers and call it by reference
#include <stdio.h>
void sum_ref(int *a,int *b)
{
    int sum = *a+*b;
    printf("%d",sum);

}
void main()
{
    int a = 10;
    int b = 20;
    sum_ref(&a,&b);
}
