#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  char nome[15];
  
  printf("QUAL SEU NOME? ");
  fgets(nome,15,stdin);
  printf("Prazer em conhece-lo, %s\n",nome);
  system("PAUSE");	
  return 0;
}
