#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a,b,c;
    char *p;

    p = &a;
    *p = 'A';
    p = &b;
    *p = 'B';
    p = &c;
    *p = 'C';
    printf("Voce sabe sobre %c%c%cs\n",a,b,c);
    return 0;
}
