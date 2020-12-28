/*Read 10 integers from the user and store them in an array. Take another integer from the user and check whether
it is in the array (print “Found” in that case) or not (print “Not found”). */
#include <stdio.h>
int main()
{
    int arr[10];
    int i, search, found=0;
    printf("Enter 10 elements of Array: ");
    for(i=0; i<10; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter search elements: ");
    scanf("%d", &search);

    for(i=0; i<10; i++)
    {
        if(arr[i]==search)
        {
            found=1;
            break;
        }
    }
    if(found==1)
        printf("\nFound !\n");
    else
        printf("\nNot Found !\n");
    return 0;
}
