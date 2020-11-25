/*
Write a program that calculates the area of a triangle where the base and the
height of the triangle are provided by the user as inputs.
*/
#include <stdio.h>
int main()
{
    //int b, h;
    float b, h, area;
    printf("Enter base and height of triangle: ");
    scanf("%f %f", &b, &h);

    area = .5*(b*h);
    printf("\nArea is %.2f \n", area);
    return 0;
}
