#include <stdio.h>
#include <string.h>

void strReverse(char *str)
{
    int i, j;
    char ch, *begin_ptr, *end_ptr;
    j= strlen(str);

    begin_ptr = str;
    end_ptr = str;

    for(i=0; i<j-1; i++)
        end_ptr++;

    for(i=0; i<j/2; i++)
    {
        ch= *end_ptr;
        *end_ptr = *begin_ptr;
        *begin_ptr = ch;

        begin_ptr++;
        end_ptr--;
    }
}

int main()
{
    char str[1000];
    printf("Enter string: ");
    gets(str);


    strReverse(str);
    printf ("\nReverse of the string is %s\n", str);
    return 0;
}
