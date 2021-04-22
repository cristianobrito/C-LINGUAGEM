#include <stdio.h>
#include <stdlib.h>

int main()
{
    int isqrd,i;

    printf("DIGITE UM NUMERO: ");
    scanf("%d", &i);
    isqrd = i>0 ? i*i : -(i*i);
    printf("%d ao quadrado e %d", i, isqrd);
    return 0;
}
