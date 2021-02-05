#include<stdio.h>
#include<stdlib.h>

int main()
{
    char name[20];
    printf("\nEnter your name: ");
    fgets(name,20,stdin);
    printf("Your name is %s",name);
    int birthYear;
    printf("Enter your birth year:");
    scanf("%d",&birthYear);
    printf("You are %d  years old ",2021-birthYear);
    return 0;

}