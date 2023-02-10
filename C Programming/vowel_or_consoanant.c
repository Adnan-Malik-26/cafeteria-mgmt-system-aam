#include <stdio.h>
void main()
{
    char alpha;
    printf("Please Enter the Character: ");
    scanf("%c",&alpha);
    
    if (alpha=='a'||alpha=='e'||alpha=='i'||alpha=='o'||alpha=='u')
    {
        printf("The Alphabet is a Vowel.");
    }
    else
    {
        printf("The Alphabet is a Consonant.");
    }
    
}