#include <stdio.h>
int perfect(int n);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(perfect(n))
        printf("Perfect!\n", n);
    else
        printf("Not Perfect!\n", n);
    return 0;
}
int perfect(int n)
{
    int sum = 0, i;
    for(i=1; i<n; i++)
    {
        if(n%i==0)
        {
            sum = sum+i;
        }
    }
    if(sum==n)
        return 1; //perfect
    else
        return 0;  //not perfect
}
