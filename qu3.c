//write a c function which will accept 3 parameters l,b,h and returns volume of the cube 
#include <stdio.h>
int volume(l,b,h)
{
    int cube = l*b*h;
    return cube;
}
void main()
{
    int l = 2;
    int b = 3;
    int h = 4;
    printf("%d\n",volume(l,b,h));
}
