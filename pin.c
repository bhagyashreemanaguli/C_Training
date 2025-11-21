#include <stdio.h>
void names(char first[],char last[],int sw)
{
    int i = 0;
    char full[100];
    while(first[i]!='\0')//adding first
    {
        full[i] = first[i];
        i++;
    }
        full[i] = ' ';//adding space
        i++;

        int j = 0;
        while(last[j]!='\0')//adding last
        {
            full[i] = last[j];
            i++;
            j++;
        }
        printf("%s", full);
        int len = i+1;
        if(len<sw)
        printf("fits in the screen");
        else
        printf("doesnot fits in the screen!");
    
}
void main()
{
    char first[100] = "bhagyashree\0";
    char last[100] = "shree\0";
    int sw = 24;
    names(first,last,sw);
}
