#include <stdio.h>
int main()
{
    int n,i,count=0;
    printf("Enter the number to check if it is a prime: ");
    scanf("%d",&n);
    i=2;
    while (i<= n/2)
    {
        if (n%i==0)
        {
            count=1;
            break;
        }
        i++;
    }
    if (count==0)
    {
        printf("%d is a Prime Number.",n);
    }
    else
    {
        printf("%d is not a Prime Number.",n);
    }
    
    
    return 0;
}
