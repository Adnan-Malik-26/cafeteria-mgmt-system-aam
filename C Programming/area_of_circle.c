#include <stdio.h>
int main()
{
    float area,radius;
    printf("Please Enter the radius(in cm): ");
    scanf("%f",&radius);
    area = 3.14*radius*radius;
    printf("The Area of the circle with radius %0.2f is %0.2f cm^2 ",radius,area);
    return 0;
}
