#include <stdio.h>
int main()
{
    int age;
    printf("Please Enter Your age:\n");
    scanf("%d",&age);
    if (age<18)
        printf("You are not eligible to vote.");
    else
        printf("You are eligible to vote.");
    
    return 0;
}