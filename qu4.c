//write a c function which will accept an array arr, it size as n, and returns the difference between first and last element 
#include <stdio.h>
#include <stdlib.h>
int subarr(int arr[],int n)
{
    int sub = arr[0]-arr[n-1];
    return abs(sub);
}
void main()
{
    int arr[5]={6,8,9,10,19};
    int n = 5;
    printf("%d",subarr(arr,n));
}
