#include <stdio.h>
void main()
{
    int x[100];
    int t;
    for ( t = 1; t < 100; ++t)
    {
        x[t]=t;
    }
    for (t=1;t<100;++t)
    {
        printf("%d\n",x[t]);
    }
}