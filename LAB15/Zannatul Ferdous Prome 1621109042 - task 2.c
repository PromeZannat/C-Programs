//Read a string from the user and print whether it is a palindrome or not
#include <stdio.h>
#include <string.h>
int main()
{
    int temp;
    char str1[10], str2[10];
    printf("Enter String: ");
    gets(str1);

    strcpy(str2, str1);
    strrev(str2);
    temp= strcmp(str1, str2);
    if(temp==0)
    {
        printf("\n%s is a palindrome! \n", str1);
    }
    else
    {
        printf("\n%s is not a palindrome! \n", str1);
    }
    return 0;
}
