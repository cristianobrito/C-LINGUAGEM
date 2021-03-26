#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  //COLOCANDO UMA STRING EM UM ARRAY CHAR
  char nome[15];
  char sobrenome[15];
  char email[30];
  char cidade[30];
  puts("SEUS DADOS: ");
  printf("Qual seu nome? ");
  scanf("%s",nome);
  printf("Ola como vai, %s.\n",nome);
  printf("Qual seu sobrenome? ");
  scanf("%s",sobrenome);
  printf("sobrenome: %s. \n",sobrenome);
  printf("Qual seu email? ");
  scanf("%s",email);
  printf("email: %s. \n",email);
  printf("Qual sua cidade? ");
  scanf("%s",cidade);
  printf("cidade: %s. \n",cidade);
  puts("\n\n");
  system("PAUSE");	
  return 0;
}
