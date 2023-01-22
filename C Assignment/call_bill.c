#include <stdio.h>                                                                                   
int main(){
    int no_of_calls,charge,no_of_calls_over;
    printf("Please Enter Your Number of calls: ");
    scanf("%d",&no_of_calls);

    if (no_of_calls<=200)
    {
        printf("You have not exceeded the limit of 200 calls.");
        printf("\nNo Charge To You. \nHave a Great Day...");
    }
    else
    {
        if (no_of_calls<=500)
        {
            printf("You have exceeded the limit.");
            no_of_calls_over = no_of_calls-200;
            charge = no_of_calls_over;
            printf("Your Charge is Rs.%d",charge);
        }
        else
        {
            printf("You have exceeded the limit");
            no_of_calls_over=no_of_calls-500;
            charge = no_of_calls_over*2;
            printf("Your Charge is Rs.%d",charge);
        }  
        return 0;        
    }  
}



