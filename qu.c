//write a function which will accept to input parameters x,y and returns x^2+y^2
#include <stdio.h>
int myadd(int x,int y)
{
int sum = (x*x) + (y*y);
return sum;
}
void main()
{
    int x = 3;
    int y = 2;
    printf("%d\n", myadd(x,y));
}
