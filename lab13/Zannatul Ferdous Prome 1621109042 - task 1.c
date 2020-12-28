/*Read 10 integers from the user and store them in an array. Take another integer from the user and check whether
it is in the array (print “Found” in that case) or not (print “Not found”). */
#include <stdio.h>

int main()
{
    int i, A[5], B[5], flag= 0;
    //Array A
    printf("Enter 5 integers of Array A: ");
    for(i=0; i<5; i++)
    {
        scanf("%d", &A[i]);
    }
    //Array B
    printf("Enter 5 integers of Array B: ");
    for(i=0; i<5; i++)
    {
        scanf("%d", &B[i]);
    }
    //compare
    for(i= 0; i<5; i++)
    {
        if(A[i]!=B[i])
            flag= 0;
    }
    flag=1;
    if(flag==1)
        printf("Identical !\n");
    else
        printf("Not Identical !\n");
    return 0;
}
