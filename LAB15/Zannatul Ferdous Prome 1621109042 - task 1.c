//Read three strings from the user as input and print them in alphabetical order
#include <stdio.h>
#include <string.h>
int main()
{
    char name[3][10], temp[10];
    int i, j;
    for(i=0; i<3; i++)
    {
        printf("Enter String %d:  ", (i+1));
        scanf("%s", name[i]);
        fflush(stdin);
    }
    //compare between strings
    for(i=0; i<3; i++)
    {
        for(j=i+1; j<3; j++)
        {
            if(strcmp(name[i], name[j])>0)
            {
                //swapping
                strcpy(temp, name[i]);
                strcpy (name[i], name[j]);
                strcpy(name[j], temp);
            }
        }
    }
    for(i=0; i<3; i++)
    {
        printf("  %s   ", name[i]);
    }
    return 0;
}
