/*Read 10 integers from the user and store them in an array. Then find the largest element in the array.*/
#include <stdio.h>
int main()
{
    int i, arr[10];
    printf("Enter 10 integers of Array: ");
    for(i=0; i<10; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=1; i<10; i++)
    {
        if(arr[0]<arr[i])
            arr[0]= arr[i];
    }
    printf("Largest Element is %d", arr[0]);
    return 0;
}
