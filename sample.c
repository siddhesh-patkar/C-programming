#include<stdio.h>
#include<stdlib.h>


int main()
{
    char characterName[]="Tom";
    int characterAge=30;

    printf("There once was a man named %s \n",characterName);
    printf("He was %d  years old \n",characterAge);
    printf("He really liked the name %s \n",characterName);
    printf("but he did not like being %d \n",characterAge);
    printf("%p",&characterAge);
    characterAge = 40;
    printf("\n%p",&characterAge);
}