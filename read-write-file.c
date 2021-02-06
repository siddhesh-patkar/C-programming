#include<stdio.h>
#include<stdlib.h>

int main()
{
    /*
    FILE *fpointer = fopen("employee.txt","a");

    fprintf(fpointer,"\nJim Engineer\nJay Business Expert");
    */
   FILE *fpointer = fopen("employee.txt","r");
   char line[255];

   fgets(line,255,fpointer);
   printf("%s",line);

    fclose(fpointer);

    return 0;
}