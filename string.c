#include <stdio.h>
#include <string.h>
void main()
{
    //create
    char name[11] = "bhagyashree";
    char new[100] = "Hello";

    //access
    printf("%c\n",name[9]);

    //length
    printf("length of string is %d\n",strlen(name));

    //concatenation
    strcat(new, name);
    printf("%s", new);

    //search
printf("%zs", strstr(new,"how"));//e
}
