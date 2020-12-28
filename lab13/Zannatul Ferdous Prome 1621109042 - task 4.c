/*Read an integer n from the user. Then, read n integers from the user and store them in an array. You can assume
that n will not exceed 50. Then, reverse the order of the elements in the array and print them.
*/
#include <stdio.h>
int main()
{
    int i, n, arr[50];
    printf("Enter n: ");
    scanf("%d", &n);
    printf("\nEnter elements:  ");

    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nValue stored into the Array: ");
    for(i=0; i<n; i++)
    {
        printf("%d  ", arr[i]);
    }
    printf("\n\nValue stored into the Array in Reverse Oder: ");
    for(i=n-1; i>=0; i--)
    {
        printf("%d  ", arr[i]);
    }
    printf("\n");
    return 0;
}
