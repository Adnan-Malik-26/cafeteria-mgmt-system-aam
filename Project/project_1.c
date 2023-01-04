#include <stdio.h>
void main()
{
    char choice;
    int total=0,no_of_items;
    int chow=0;
    int pizza=0;
    int pasta=0;
    int momos=0;
    int rice=0;
    

    printf("**********WELCOME TO THE CAFETERIA**********\n");
    printf("\t\t*****MENU*****\n");
    printf("Product             Price\n");
    printf("[1] Pizza             50\n");
    printf("[2] Pasta            100\n");
    printf("[3] Momos            150\n");
    printf("[4] Chowmein         200\n");
    printf("[5] Fried Rice       150\n");
    printf("Please Enter Your Choice: ");

    scanf("%c",&choice);
    
        
        
       switch (choice)
    {
         case '1':
            printf("Please Enter the number of the items: ");
            scanf("%d",&no_of_items);
            total = pizza +(50*no_of_items);
            break;
    
        case '2':
            printf("Please Enter the number of the items: ");
            scanf("%d",&no_of_items);
            total = pasta +(100*no_of_items);
            break;

        case '3':
            printf("Please Enter the number of the items: ");
            scanf("%d",&no_of_items);
            total = momos +(150*no_of_items);
            break;
    
        case '4':
            printf("Please Enter the number of the items: ");
            scanf("%d",&no_of_items);
            total = chow+(200*no_of_items);
            break;

        case '5':
            printf("Please Enter the number of the items: ");
            scanf("%d",&no_of_items);
            total = rice+(150*no_of_items);
            break;
    
        default:
            printf("Sorry! The choice is Invalid.\n");
            break;
    

     
    }
    
    
    printf("Thank You for Ordering.\n");
    printf("Your Total is %d",total);

}