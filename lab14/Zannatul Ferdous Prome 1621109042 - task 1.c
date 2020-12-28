#include <stdio.h>
int main()
{
    int Array[3][3], i, j, element, found=0;

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Array[%d][%d]: ",i, j);
            scanf("%d",&Array[i][j]);
        }
    }
    printf("Enter a number to search: ");
    scanf("%d", &element);
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(element== Array[i][j])
            {
                found=1;
                break;
            }
        }
    }
    if(found==1)
        printf("Found!");
    else
       printf(" NotFound!");
    return 0;
}
