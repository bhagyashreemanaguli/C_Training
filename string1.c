#include <stdio.h>
#include <string.h>
void main()
{
    char sss[70] =  "we eat gobi";
    char ss[10] = "eat";
    if((strstr(sss,ss)) !=NULL)
    printf("Found");
    else
    printf("Not found");
}
