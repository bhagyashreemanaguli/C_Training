#include <stdio.h>
#include <stdarg.h>
void display(int count, ...)
{
    va_list list;
    va_start(list,count);
    for(int i=0; i<=count; i++)
    {
    int n = va_arg(list,int);
    printf("%d ",n);
    }
    va_end(list);
}
void main()
{
    display(5,13,45,56,12);
}
