#include <stdio.h>
int main()
{
    char sex;
    int salary,bonus,salary_after_bonus;
    
    printf("Please Enter Your Gender(M for male and F for Female): ");
    scanf("%c",&sex);
    switch (sex){
    case 'M':
        printf("Please Enter Your Salary: ");
        scanf("%d",&salary);
        if (salary<=10000)
        {
            bonus = 0.02*0.05*salary;
            salary_after_bonus = salary +bonus;
            printf("Your Salary After Bonus is %d.",salary_after_bonus);
        }
        else
        {
            bonus = 0.05*salary;
            salary_after_bonus= salary+bonus;
            printf("Your Salary After Bonus is %d.",salary_after_bonus);
        }
        
        break;
    case 'F':
        printf("Please Enter Your Salary: ");
        scanf("%d",&salary);
        if (salary<=10000)
        {
            bonus = 0.1*0.02*salary;
            salary_after_bonus=salary+bonus;
            printf("Your Salary After Bonus is %d.",salary_after_bonus);
        }
        else
        {
            bonus = 0.1*salary;
            salary_after_bonus=salary+bonus;
            printf("Your Salary After Bonus is %d.",salary_after_bonus);
        }
        
        break;


    default:

        break;
    }
    
}









