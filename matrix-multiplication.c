#include<stdio.h>
#include<stdlib.h>

int main()
{
    int r[10][10],c[10][10],row,col,res[10][10],i,j,k;

    printf("Enter the number of rows: ");
    scanf("%d",&row);
    printf("Enter the number of columns: \n");
    scanf("%d",&col);

    printf("Enter the matrix 1 values: \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&r[i][j]);
        }
    }
    printf("Enter the matrix 2 values: \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&c[i][j]);
        }
    }
    
    printf("Matrix multiplication: \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            res[i][j]=0;
            for(k=0;k<col;k++)
            {
                res[i][j]+=r[i][k]*c[k][j];
            }
        }
    }
    printf("Result: \n");
    for(i=0;i<row;i++)
    {
        printf("\n");
        for(j=0;j<col;j++)
        {
            printf("%d \t",res[i][j]);
        }
    }
    return 0;
}