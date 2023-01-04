#include <stdio.h>
void main()
{
    int marks,x;
    printf("Enter Marks: ");
    scanf("%d",&marks);
    x=marks/10;
    printf("%d\n",x);
    switch (x)
    {
    case 1:
        printf("Your Grade is 'F'");
        break;
    case 2:
        printf("Your Grade is 'F'");
        break;
    case 3:
        printf("Your Grade is 'F'");
        break;
    case 4:
        printf("Your Grade is 'C'");
        break;
    case 5:
        printf("Your Grade is 'C'");
        break;
    case 6:
        printf("Your Grade is 'C'");
        break;
    case 7:
        printf("Your Grade is 'B'");
        break;
    case 8:
        printf("Your Grade is 'B'");
        break;
    case 9:
        printf("Your Grade is 'A'");
        break;
    default:
        printf("Your Marks are Invalid");
        break;
    }
}