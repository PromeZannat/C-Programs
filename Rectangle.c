/*Write a program that calculates the area and the perimeter of a rectangle where
the length and the width of the rectangle are provided by the user as inputs*/

#include <stdio.h>
int main ()
{
    int area, perimeter, l, w;
    printf ("Enter length and width: ");
    scanf("%d %d", &l, &w);

    area = l * w;
    perimeter = 2*l + 2*w;

    printf("\nArea is %d & Perimeter is %d \n", area, perimeter);
    return 0;
}
