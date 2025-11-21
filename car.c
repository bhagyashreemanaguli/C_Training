//create a structure with 3 variuables name of the  car maxmimum speed price store this in a array of structures and display them
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct car
{
    char car[100];
    float speed;
    float price;
};
void main()
{
    int n;
    printf("enter n");
    scanf("%d",&n);
    struct car c[2];
    for(int i=0; i<n; i++)
    {
        printf("enter car name\n");
        scanf("%s",c[i].car);
        printf("enter speed of car\n");
        scanf("%f",&c[i].speed);
        printf("enter the price");
        scanf("%f",&c[i].price);
    }
}
                                                                                         
