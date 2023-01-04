#include <stdio.h>
int main()
{
    float area,side;
    printf("Please Enter the side of the square(in cm): ");
    scanf("%f",&side);

    area = side*side;
    printf("The Area of the square of side %0.2f is %0.2f cm^2 ",side,area);
    return 0;
}
