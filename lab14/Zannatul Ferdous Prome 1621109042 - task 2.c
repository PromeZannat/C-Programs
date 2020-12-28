
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
    printf("Enter which column to find sum of: ");
    scanf("%d", &element);
    for(i=0;i<3;i++)
    {
        sum =  sum + Array[i][element-1];
    }
    printf("Sum of column %d: %d", element-1, sum);
    return 0;
}
