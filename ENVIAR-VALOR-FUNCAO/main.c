#include <stdio.h>
#include <stdlib.h>

void grafico(int count);

int main(int argc, char *argv[])
{
  int valor;
  valor= 2;
  
  while(valor<=64)
  {
    grafico(valor);
    printf("o valor e: %d\n",valor);
    valor = valor * 2;
  }
  system("PAUSE");	
  return 0;
}
void grafico(int count)
{
     int x;
     for(x=0;x<count;x=x+1)
     //usei '' logo abaixo de aspas duplas ""
     //exibe uma linha de asteristico 
     putchar('*');
     putchar('\n');
}
