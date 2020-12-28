#include <stdio.h>
void calcCircleInfo(int radius, int *circumference, int *area)
{
    *circumference = 2*3.1416*radius;
    *area = 3.1416*radius*radius;
}
int main()
{
    int radius;
    printf("Enter radius: ");
    scanf("%d", &radius);

    int *circumference;
    int  *area;
    //get the circumference and area from function
    calcCircleInfo(radius, &circumference, &area);

    printf("\nRadius: %d  \nCircumference: %d  \nArea: %d  \n", radius, circumference, area );


}
