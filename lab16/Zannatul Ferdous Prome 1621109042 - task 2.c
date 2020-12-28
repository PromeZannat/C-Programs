#include <stdio.h>
#include <string.h>

void strReverse(char *str)
{
    int i, j;
    char ch, *begin_ptr, *end_ptr;
    j= strlen(str);

    begin_ptr = str;
    end_ptr = str;

    for(i=0; i<j-1; i++)//move the end_ptr to the last character of the string
        end_ptr++;
//swap the characters from begin to end
    for(i=0; i<j/2; i++)
    {
        //swap
        ch= *end_ptr;
        *end_ptr = *begin_ptr;
        *begin_ptr = ch;

        //update pointers
        begin_ptr++;
        end_ptr--;
    }
}

int main()
{
    char str[1000];
    printf("Enter string: ");
    gets(str);


    strReverse(str); //reverse the string
    printf ("\nReverse of the string is %s\n", str);
    return 0;
}
