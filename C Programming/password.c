#include <stdio.h>
#include <string.h>
#include <strings.h>

int main(){
    char pass[]=""
    char user[]=""
    printf("        USERNAME: ");
    scanf("%s",&user);
    printf("        PASSWORD: ");
    scanf("%s",&pass);
    if (strcmp(user,"username")==0&&strcmp(pass,"password"))
    {
        printf("Login Valid.");
    }
    
}