#include <stdio.h>
#include <stdlib.h>
int main()
{
    struct date
    {
        int mes;
        int dia;
        int ano;
    };
    struct humano
    {
        char name[45];
        struct date aniversario;
    };
    struct humano presidente;

    strcpy(presidente.name,"LULA");
    presidente.aniversario.mes = 10;
    presidente.aniversario.dia = 22;
    presidente.aniversario.ano = 1971;

    printf("%s nasceu em %d/%d/%d\n",
           presidente.name,
           presidente.aniversario.mes,
           presidente.aniversario.dia,
           presidente.aniversario.ano);

    return 0;
}
