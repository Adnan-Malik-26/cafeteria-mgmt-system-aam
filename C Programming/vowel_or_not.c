// Header Files
#include <stdio.h>
// Declaring the main function
void main()
{
    
    // Declaring all the variables
    char alp;
    printf("Please enter an alphabet: ");
    scanf("%c",&alp);

    // Using If Else Statements

    if (alp == 'A'|| alp == 'E' || alp == 'I' || alp=='O' || alp=='U' ||alp == 'a'|| alp == 'e' || alp == 'i' || alp=='o' || alp=='u')
    printf("The Alphabet is a vowel.");
    else
    printf("The Alphabet is a Consonant.");
}
