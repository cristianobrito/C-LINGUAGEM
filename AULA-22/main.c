#include <stdio.h>
#include <stdlib.h>

int main()
{
    char primeiro,segundo;

    printf("DIGITE SEU NOME: ");
    primeiro = getchar();
    printf("segunda letra do seu nome: ");
    segundo = getchar();
    printf("\n");
    printf("a primeira e segunda letra do seu nome '%c' e '%c'\n",primeiro,segundo);
    return 0;
}
