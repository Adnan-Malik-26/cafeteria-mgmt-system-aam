#include <stdio.h>
void main()
{
    int i,n;

    printf("Enter The Size: ");
    scanf("%d",&n);
    char name[n];

    printf("Please Enter Your Full Name: ");
    for (i=0; i < n; i++)
    {
        scanf("%c",&name[i]);
    }
    for (i = 0; i < n; i++)
    {
        printf("%c",name[i]);
    }
     
}