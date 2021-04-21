#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a,b,c;
    char *p;
    a = 'A'; b = 'B'; c = 'C';

    printf("VOCE SABE ");
    p = &a;
    putchar(*p);
    p = &b;
    putchar(*p);
    p = &c;
    putchar(*p);
    printf("s\n");
    return 0;
}
