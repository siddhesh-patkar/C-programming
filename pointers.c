#include<stdio.h>
#include<stdlib.h>

int main()
{
    int age =20;
    int *page = &age;

    printf("%d",page);
    printf("\n%p",page);
    printf("\n%d",*page);

    return 0;
}