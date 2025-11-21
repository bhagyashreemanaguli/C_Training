#include <stdio.h>
void main()
{
    int age;
    float height;
    printf("enter the age");
    scanf("%d",&age);
    printf("enter the height");
    scanf("%f",&height);
    if(age>12 && height>4.5)
    {
        printf("person is eligible");
    }
    else
    {
        printf("person is not eligible");
    }
}
