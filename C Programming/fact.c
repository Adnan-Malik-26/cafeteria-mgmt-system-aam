#include <stdio.h>
int main()
{
    int i,number,fact=1;
    printf("Enter a number: ");
    scanf("%d",&number);
    for(i=1;i<=number;i++){
        fact = fact*i;
    }
    printf("The factorial of the number is %d",fact);
}