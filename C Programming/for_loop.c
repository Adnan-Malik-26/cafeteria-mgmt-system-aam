#include <stdio.h>
#include <math.h>
int main(void)
{
    int x;
    int square;
    for (x=1; x<=10; x++)
    {
        square = pow(x,2);
        printf("%d \n",square);
    }
    return 0;
}