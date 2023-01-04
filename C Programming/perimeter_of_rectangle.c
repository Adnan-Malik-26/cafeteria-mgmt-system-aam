#include <stdio.h>
void main()
{
    int length,width,perimeter;

    printf("Please enter the length and breadth of the rectangle: \n");

    scanf("%d%d",&length,&width);

    perimeter=2*(length+width);

    printf("The perimeter of rectangle with length %d and width %d is %d.",length,width,perimeter);
}
 