#include <stdio.h>

    int main(){
        int a,b,c;
        printf("Please Enter three(3) numbers: ");
        scanf("%d %d %d",&a,&b,&c);

        if (a>b&&a>=c)
        {
            printf("The Largest Number is %d",a);
        }
        else if (b>c&&b>a)
        {
            printf("The Largest Number is %d",b);
        }
        else if (c>a&&c>b)
        {
            printf("The Largest Number is %d",c);
        }
        else
        {
            printf("There is some error!");
        }
        return 0;
    
    }