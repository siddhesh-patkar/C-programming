#include<stdio.h>
#include<stdlib.h>

int main()
{
    int secretnumber=5;
    int guess;
    int count=0;

    while(guess != secretnumber && count<5)
    {
        printf("Enter your guess: ");
        scanf("%d",&guess);
        count++;
    }
    if(count >= 5)
    {
        printf("Out of Guesses!!");
    }
    else
    {
    printf("You win!!!");
    }
    return 0;
}