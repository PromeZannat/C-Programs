/*
Write a program that calculates the area and the perimeter of a circle where the
radius of the circle is provided by the user as input.
*/
#include <stdio.h>
int main()
{
    float r, perimeter, area, PI = 3.1416;
    printf("Enter radious of the circle: ");
    scanf("%f",&r);

    area = 3.1416 * r * r ;
    perimeter = 2 * 3.1416 * r;

    printf("\nArea is %.2f and Perimeter is %.2f \n", area, perimeter);
    return 0;
}
