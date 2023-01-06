#include <stdio.h>
#include <string.h>
int main()
{
int password(void);
{
    char s[80];

    printf("Enter Password: ");
    gets(s);
    if(strcmp(s,"pass")){
        printf("Invalid Password");
        return 0;
    }
    return 1;
}


}