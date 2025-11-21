//write a c function which will accept 1 input parameter r and returns the perimeter of circle, declare pi as constant
#include <stdio.h>
float myadd(int r)
{
   const float pi = 3.142;
    float sum = pi*2*r;
    return sum;
}
void main()
{
    int r1 = 9;
    printf("%f\n",myadd(r1));
    int r2 = 3;
    printf("%f\n", myadd(r2));
     int r3 = 6;
    printf("%f\n",myadd(r3));
     int r4 = 5;
    printf("%f\n",myadd(r4));
}
