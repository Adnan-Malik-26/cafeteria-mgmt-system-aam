#include <stdio.h>


int main()
{
    // bs = Basic Salary, DA = Dearness Allowance, HRA = House Rent Allowance
    float bs,da,hra,gross;
    printf("Please Enter Your Basic Salary: ");
    scanf("%f",&bs);

    if (bs<10000)
    {
        da = (10*bs)/100;
        hra = (2*bs)/100;
    }

    else if (bs>=10000 & bs <20000)
    {
        da = (15*bs)/100;
        hra = (5*bs)/100;
    }
    
    else if (bs>=20000 & bs<50000)
    {
        da = (20*bs)/100;
        hra = (10*bs)/100;
    }
    else
     {
        da = (30*bs)/100;
        hra = (15*bs)/100;
     }

    gross = bs+da+hra;
    printf("The Gross Salary for the employ with Basic Salary Rs.%0.2f is Rs.%0.2f.\n",bs,gross);
    printf("The Dearness Allowance for the employ is Rs.%0.2f.\nThe Home and Rent Allowance is Rs.%0.2f.",da,hra);
    
    return 0;

}