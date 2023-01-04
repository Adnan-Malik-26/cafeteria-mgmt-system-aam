#include <stdio.h>
void main()
{
    int n=2,sum=0;
    while (n<100)
    {
        sum = sum+n;
        n = n+3;
        printf("%d\n",sum);
    }
    
}
