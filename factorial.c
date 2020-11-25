#include <stdio.h>
int factorial(int x);
int main()
{
    int N, R;
    int result;
    printf("Enter N and R\n");
    scanf("%d%d",&N,&R);
    result = factorial(N)/(factorial(R)*factorial(N-R));
    printf("%d combination %d = %d",N,R,result);
    return 0;
}
int factorial(int x)
{
    int fact = 1, i;
    for(i=1;i<=x;i++)
    fact *= i;
    return fact;
}
