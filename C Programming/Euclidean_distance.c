#include <stdio.h>
#include <math.h>
int main()
{
    float x1,y1,x2,y2,distance;

    printf("Please enter the x and y of first point: \n");
    scanf("%f%f",&x1,&y1);
    
    printf("Please Enter the x and y of the second point: \n");
    scanf("%f%f",&x2,&y2);
    
    distance = sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    
    printf("The Euclidean distance between two of the given points is %0.2f",distance);
    
    return 0;

}
