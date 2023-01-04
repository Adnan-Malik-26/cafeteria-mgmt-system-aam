#include<stdio.h>
int main()
{
    int n,i,fact,j;
    printf("Prime Numbers are: \n");
    adnan:
    printf("hello");
    for(i=1; i<=40; i++)
    {
        fact=0;
        for(j=1; j<=40; j++)
        {
            if(i%j==0)
                fact++;
        }
        if(fact==2)
            printf("%d " ,i);
    }
    goto adnan;
    return 0;
    
}
