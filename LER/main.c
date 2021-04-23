#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *C;
    int ch;
    C=fopen("OLA2.txt","r");
    if(C==NULL)
    {
       puts("nao pode ler o arquivo");
       exit(1);
    }
    while((ch=fgetc(C)) !=EOF)
          putchar(ch);
          fclose(C);
          return 0;
}
