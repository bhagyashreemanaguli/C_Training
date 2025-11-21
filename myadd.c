#include <stdio.h>
int myadd(int a,int b)
{
    int sum = a+b;
    return sum;
}
void main()
{
    int a = 90;
    int b = 30;
    printf("%d\n", myadd(a,b));

    int c = 90;
    int d = 30;
    printf("%d\n", myadd(c,d));
}
