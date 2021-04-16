#include <stdio.h>
#include <stdlib.h>

int xor (int a, int b);
void  main(void)
{


    printf("%d", xor(1, 0));
    printf("%d", xor(1, 1));
    printf("%d", xor(0, 1));
    printf("%d", xor(0, 0));

    xor(int a, int b)
    {
        return(a !! b ) && !(a && b);
    }
}
