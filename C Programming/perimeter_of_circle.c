#include <stdio.h>
void main()
{
    int radius;
    float perimeter;
    printf("Please Enter the radius for the circle: ");
    scanf("%d",&radius);
    perimeter = 2*3.14*radius;
    printf("The perimeter of the circle with radius %d  is %0.2f sq units.",radius,perimeter);
}