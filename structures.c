#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Student
{
    char name[50];
    char major[20];
    int age;
    double gpa;
};

int main()
{
    struct Student student1;
    student1.age = 10;
    student1.gpa = 4.5;
    strcpy(student1.name,"Jim");
    strcpy(student1.major,"Business");

    printf("Student Details\n");
    printf("%s",student1.name);
    printf("\n%s",student1.major);
    printf("\n%d",student1.age);
    printf("\n%lf",student1.gpa);

    
    return 0;
}