#include <stdio.h>
void main()
{
    int side,perimeter;
    printf("Please Enter the side of the square: ");
    scanf("%d",&side);
    perimeter = 4*side;
    printf("The perimeter of square with side %d is %d cm^2",side,perimeter);
}
