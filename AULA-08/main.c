#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  //lendo caracteres 
  
  int c;
  int ch;
  puts("EXEMPLO 1:");
  printf("esperando um caractere: ");
  c = getchar();
  printf("esperei e achei '%c' caracterer.\n\n",c);
  
  puts("EXEMPLO 2: ");
  printf("tecle enter: ");
  getchar();
  ch = 'H';
  putchar(ch);
  ch = 'i';
  putchar(ch);
  putchar('!');
  printf("\n\n");
  //VARIAVEIS DO TIPO CARACTERE
  puts("EXEMPLO 3: ");
  char a,b,d,e;
  a = 'w';
  b = a + 24;
  d = b + 8;
  e = '\n';
  printf("%d%d%d%d",a,b,d,e);
  printf("\n\n");
  system("PAUSE");	
  return 0;
}
