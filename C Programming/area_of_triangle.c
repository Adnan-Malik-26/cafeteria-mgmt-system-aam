#include <stdio.h>
#include <math.h>
int main()
{
    float area,base,height;
    printf("Please Enter the base of the triangle: ");
    scanf("%f",&base);
    printf("Please Enter the height of the triangle: ");
    scanf("%f",&height);
    area = 0.5*height*base;
    printf("The Area of the triangle is %0.2f cm^2 ",area);
    return 0;
}
