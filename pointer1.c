#include <stdio.h>
void main()
{
    int arr[3] = {67, 45, 65, 85};
    int *p = arr;
    printf("%d\n", *p);
    printf("%d\n", *(p + 1));
     printf("%d\n",*(p+2));
}
