#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct student
{
    char name[100];
    int age;
    int marks;
};
void main()
{
    struct student s1;
    s1.age = 26;
    s1.marks = 90.8;
    strcpy(s1.name,"samruddhi");

    struct student s2;
    s2.age = 19;
    s2.marks = 84.83;
    strcpy(s2.name,"shravya");

    struct student s3 = {"beautiful", 23,92};

    printf("%s  ",s1.name);
    printf("%d  ",s1.age);
    printf("%d",s1.marks);
}
