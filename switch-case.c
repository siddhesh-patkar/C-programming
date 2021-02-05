#include<stdio.h>
#include<stdlib.h>

int main()
{
    char grade;
    printf("Enter your grade: ");
    scanf("%c",&grade);

    switch(grade)
    {
        case 'A':
            printf("You did great");
            break;
        case 'B':
            printf("You did Alright");
            break;
        case 'C':
            printf("You did poor");
            break;
        case 'D':
            printf("You did bad");
            break;
        case 'E':
            printf("You Failed!!");
            break;
        default:
            printf("Invalid Grade");
            break;
    }
    return 0;
}