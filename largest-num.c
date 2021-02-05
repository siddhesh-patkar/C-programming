#include<stdio.h>
#include<stdlib.h>

int  largest(int x,int y ,int z);
int main()
{
    int num1,num2,num3,result;
    printf("Enter three numbers:");
    scanf("%d %d %d",&num1,&num2,&num3);
    result = largest(num1,num2,num3);
    printf("Largest number is: %d",result);

    return 0;
}

int largest(int x,int y,int z)
{
    if (x >= y && x >= z)
    {
        return x;
    }
    else if (y >= x && y > z)
    {
        return y;
    }
    else
    {
        return z;
    }
}