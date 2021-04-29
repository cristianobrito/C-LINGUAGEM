#include <stdio.h>
#include <stdlib.h>

int main()
{
    //isso e como uma variavel ponteiro ela nao existe fisicamente
    FILE *dados;
    //se o arquivo nao existir ele e criado
    dados=fopen("funcionarios.bat","w+");
    //nesse caso a variavel handle e o ponteiro variavel dados
    if(dados==NULL)
    {
       puts("nao pode ler o arquivo");
       exit(1);
    }
    fprintf(dados,"@echo off\n\nstart cmd.exe\n\necho ola\n\nstart chrome\n\npause");
    fclose(dados);
    return(0);
}

