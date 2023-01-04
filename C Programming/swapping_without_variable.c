#include <stdio.h>
void main()
{
    int a,b;
    printf("Please Enter the variable a: ");
    scanf("%d",&a);
    printf("Please Enter the variable b: ");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("The value of variable a is %d \nThe value of variable b is %d",a,b);
}