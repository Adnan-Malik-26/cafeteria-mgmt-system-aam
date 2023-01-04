#include <stdio.h>
void main()
{
    int num1,num2;
    char opr;
    printf("Please Enter Your Choice(+,-,*,/): ");
    scanf("%c",&opr);
    printf("Please Enter the numbers: \n");
    scanf("%d%d",&num1,&num2);
    switch (opr)
    {
    case '+':
        printf("%d+%d=%d",num1,num2,num1+num2);
        break;
    case '-':
        printf("%d-%d=%d",num1,num2,num1-num2);
        break;
    case '*':
        printf("%d*%d=%d",num1,num2,num1*num2);
        break;
    case '/':
        printf("%d/%d=%d",num1,num2,num1/num2);
        break;
    default:
        printf("No choice was selected");
        break;
    }
}