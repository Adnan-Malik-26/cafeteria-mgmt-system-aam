#include <stdio.h>
int main()
{
    int a,b;
    printf("Please Enter the number for variable a: \n");
    scanf("%d",&a);
    printf("Please Enter the number for variable b: \n");
    scanf("%d",&b);
    int temp = a;
    a=b;
    b=temp;
    printf("The Value of variable a is %d \nThe Value of Variable b is %d",a,b);
    return 0;
}
