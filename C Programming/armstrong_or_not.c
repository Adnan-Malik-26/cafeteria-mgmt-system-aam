#include <stdio.h>
int main(){
    int n,rem,sum=0,temp;
    printf("Please Enter a three digit Number: ");
    scanf("%d",&n);
    temp = n;
    while (n>0)
    {
        rem = n%10;
        sum = sum+(rem*rem*rem);
        n=n/10;
    }
    if (temp==sum)
    {
        printf("%d is an armstrong number",temp);
    }
    else
    {
        printf("%d is not an armstrong number.",temp);
    }
    
    
    
}