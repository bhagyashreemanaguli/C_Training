#include <stdio.h>
#include <stdlib.h>
void main()
{
    int *p = (int*)malloc(3*sizeof(int));
    p[0] = 23;
    p[1] = 67;
    p[2] = 55;
    p = (int*)realloc(p, 5*sizeof(int));
    p[3] = 54;
    p[4] = 46;
    for(int i=0; i<5; i++)
    {
        printf("%d ",p[i]);
    }
    free(p);
 }
