#include <stdio.h>
int main()
{
    int rows, columns, i, j, element, sum=0;
    printf("Number of rows: ");
    scanf("%d",&rows);
    printf("Number of columns: ");
    scanf("%d",&columns);

    int Array[rows][columns];
    printf("Enter matrix elements: \n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
            printf(" [%d][%d]: ",i, j);
            scanf("%d",&Array[i][j]);
        }
    }
    printf("\n");
    //output original matrix
    printf("Orginal Matrix:\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
            printf("%10d ",Array[i][j]);
        }
     printf("\n");
    }
    //output Transpose matrix
    printf("Transpose Matrix:\n");
    for(i=0;i<columns;i++)
    {
        for(j=0;j<rows;j++)
        {
            printf("%10d ",Array[j][i]);
        }
     printf("\n");
    }
    return 0;
}
