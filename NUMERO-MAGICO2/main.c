#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nmagico;
    int palpite;

    nmagico = rand();

    printf("ADIVINHE O NUMERO MAGICO: ");
    scanf("%d", &palpite);

    if(palpite == nmagico)
    {
       printf("** ACERTOU **");
       printf(" %d e o numero magico\n", nmagico);
    }
    else
    {
        printf(" ERRADO, ");
        if(palpite > nmagico) printf("numero muito alto\n");
        else printf("numero muito baixo\n");
    }
    return 0;
}
