#include <stdio.h>
void main()
{
    int phy,com101,hsmc,programming,total_marks,marks;
    int marks_per,sum,percentage_div_ten;
    printf("Please Enter Your Phy Marks: ");
    scanf("%d",&phy);
    printf("Please Enter Your Maths Marks: ");
    scanf("%d",&com101);
    printf("Pease Enter Your HSMC Marks: ");
    scanf("%d",&hsmc);
    printf("PLease Enter Your programming Marks: ");
    scanf("%d",&programming);

    sum = phy+com101+hsmc+programming;
    printf("%d\n",sum);
    percentage_div_ten = sum/40;
    printf("%d",percentage_div_ten);
    switch (marks_per)
    {
    case 1:
        printf("Your grade is F.");
        break;
    case 2:
        printf("Your Grade is F.");
        break;
    case 3:
        printf("Your Grade is F.");
        break;
    case 4:
        printf("Your Grade is C.");
        break;
    case 5:
        printf("Your Grade is C.");
        break;
    case 6:
        printf("Your Grade is C.");
        break;
    case 7:
        printf("Your Grade is B.");
        break;
    case 8:
        printf("Your Grade is B.");
        break;
    case 9:
        printf("Your Grade is A.");
        break;
    case 10:
        printf("Your Grade is A");
        break;

    default:
        printf("Your Marks Are Invalid");
        break;
    }

}