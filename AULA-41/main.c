#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;

    for(i=1; i<=100; ++i)
    printf("%d / 2 e: %f\n", i, (float) i / 2);
    return 0;
}
