#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a=4;
    float f=3;
    double d=12.345678;
    char c='A';
    char s[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    printf("%d \n",a);
    printf("%f \n",f);
    printf("%.10f \n",f);
    printf("%lf \n",d);
    printf("%c \n",c);
    printf("%s \n",s);
}