#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int magic,guess;
    repeat:
    magic = rand() % 100 + 1;

    printf("Guess The Magic Number: \n");
    scanf("%d",&guess);
    if (guess==magic)
    {
        printf("Congratulations! You have Guessed The Number Correctly.\n");
    }
    else if (guess<magic)
    {
        printf("Your Guess is Incorrect. Maybe Go a bit Higher\n");
        goto repeat;
    }
    else if (guess>magic)
    {
        printf("Your Guess is Incorrect. Maybe Go a bit Lower.\n");
        goto repeat;
    }
    else
    {
        printf("Your Guess Is Invalid\n");
    }

    return 0;
}