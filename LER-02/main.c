#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *C;
    char buffer[64];

    C=fopen("OLA3.txt","r");
    if(C==NULL)
    {
        puts("nao pode abrir o arquivo");
        exit(1);
    }
    while(fgets(buffer,64,C))
        printf("%s",buffer);
    fclose(C);
    return (0);
}
