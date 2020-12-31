#include <stdio.h>
int combination(int n, int r);
int factorial(int a);
int main()
{
    int n, a, r, result, sum;
    printf("Enter N: ");
    scanf("%d %d", &n);

    result = combination(n, r);
    printf("\nN combination R is: %d\n", result);

    for(a=1; a<=n; a++)
        for(r=1; r<=n; r++)
        {
            sum= sum + combination;
        }

    return 0;
}
int combination(int n, int r)
{
    return factorial(n)/(factorial(r)*factorial(n-r));
}
int factorial(int a)
{
    int i, fact=1;

    for(int i=1; i<=a; i++)
    {
        fact= fact*i;
    }
    return fact;
}
