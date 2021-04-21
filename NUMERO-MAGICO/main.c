#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nmagico;
    int palpite;

    nmagico = rand();

    printf("ADIVINHE O NUMERO MAGICO: ");
    scanf("%d", &palpite);

    if(palpite == nmagico) printf("** CERTOU **");
    else printf(" ERRADO
                ");
    return 0;
}
