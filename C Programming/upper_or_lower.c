#include <stdio.h>
void main()
{
    char alphabet;
    printf("Please Enter a character: ");
    scanf("%c",&alphabet);

    if (isupper(alphabet))
    printf("The character %c is uppercase ",alphabet);
    else
    printf("The character %c is Lowercase.",alphabet);

}



