#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct presidente
    {
      char name[40];
      int ano;
    };
    struct presidente primeiro =
    {
        "BOLSONARO",
        2018
    };
    printf("O ATUAL PRESIDENTE DO BRASIL %s\n",primeiro.name);
    printf("O ANO DA ELEICAO %d\n",primeiro.ano);
    return 0;
}
