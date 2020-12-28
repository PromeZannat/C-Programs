#include <stdio.h>
int main()
{
    int rows, columns, i, j, element, sum=0;
    printf("Number of rows: ");
    scanf("%d",&rows);
    printf("Number of columns: ");
    scanf("%d",&columns);
    int A[rows][columns], B[rows][columns], C[rows][columns] ;
    //1st matrix
    printf("Enter 1st matrix elements: \n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
            printf(" [A%d][%d]: ",i, j);
            scanf("%d",&A[i][j]);
        }
    }
    printf("\n");
    //2nd matrix
    printf("Enter 2nd matrix elements: \n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
            printf(" B[%d][%d]: ",i, j);
            scanf("%d",&B[i][j]);
        }
    }

    //output 1st matrix
    printf("First Matrix:\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
            printf("%10d ",A[i][j]);
        }
     printf("\n");
    }
     printf("\n");
    //output 2nd matrix
    printf("Second Matrix:\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
            printf("%10d ",B[i][j]);
        }
     printf("\n");
    }
    printf("\n");
    //Sum
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
            C[i][j]= A[i][j] + B[i][j];
        }

    }
    printf("\n");
    //output sum
    printf("Sum: \n\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
            printf("%10d ",C[i][j]);
        }
    printf("\n");
    }
    return 0;
}
