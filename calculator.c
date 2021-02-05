#include<stdio.h>
#include<stdlib.h>

int add(int x,int y)
{
    printf("Result: %d",x + y);
}
int sub(int x,int y)
{
    if (x > y)
    {
        printf("Result: %d",x - y);
    }
    else
    {
        printf("Result: %d",y-x);
    }
}
int mul(int x,int y)
{
    printf("Result: %d",x * y);
}
int divi(int x,int y)
{
    if(x > y)
    {
        printf("Result: %d",x / y);
    }
    else
    {
        printf("Result: %d",y / x);
    }
}

int main()
{
    int num1;
    int num2;
    char op;

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter the operator: ");
    scanf(" %c", &op);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    if(op == '+')
    {
        add(num1,num2);
    }
    else if(op == '-')
    {
        sub(num1,num2);
    }
    else if(op == '*')
    {
        mul(num1,num2);
    }
    else if(op == '/')
    {
        divi(num1,num2);
    }
    else
    {
        printf("Invalid Operator !!!!!!");
    }
    return 0;
}