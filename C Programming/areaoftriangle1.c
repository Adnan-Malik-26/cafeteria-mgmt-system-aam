#include <stdio.h>
#include <math.h>
int main()
{
    float area,base,height;
    printf("Please Enter the base of the triangle: ");
    scanf("%f",&base);
    printf("Please Enter the height of the triangle: ");
    scanf("%f",&height);
    area = (base*height)/2;
    printf("The Area of the triangle is %f cm^2 ",area);
    return 0;
}
