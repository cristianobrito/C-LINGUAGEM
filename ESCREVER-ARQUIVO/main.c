#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *C;

    C=fopen("ola.bat","w");
    if(C==NULL)
    {
        puts("nao pode abrir o arquivo!");
        exit(1);
    }
    fprintf(C,"@echo off\nstart chrome\n exit");
    fclose(C);
    return 0;
}
