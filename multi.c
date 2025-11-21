#include <stdio.h>
void main()
{
    int arr[4][3]={ {3,4,8},{4,8,6},{9,5,1},{4,6,11} };
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("%d\n", arr[i][j]);
        }
    }
}
