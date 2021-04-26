#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *C;

    C=fopen("OLA4.txt","a");
    if(C==NULL)
    {
        puts("nao pode abrir o arquivo");
        exit(1);
    }
   fprintf(C,"QUEAL SEU SOBRENOME?\nQUAL SEU NOME?\n");
   fclose(C);
    return (0);
}
