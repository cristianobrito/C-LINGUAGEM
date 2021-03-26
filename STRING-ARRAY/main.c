#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  //COLOCANDO UMA STRING EM UM ARRAY CHAR
  printf("COLOCANDO UMA STRING EM UM ARRAY CHAR: \n");
  char  prompt[] = "tecle enter para explodir";
  printf("%s",prompt);
  getchar();
  puts("\n");
  
  puts("EXEMPLO 2: ");
  char nome[15];
  printf("coloque seu nome: ");
  scanf("%s",nome);
  printf("Ola como vai, %s.\n",nome);
  puts("\n");
  
  puts("EXEMPLO 3: ");
  int fav;
  printf("seu numero favorito: ");
  scanf("%d",&fav);
  printf("%d e o seu numero favorito, e o meu?\n",fav);
  puts("\n");
  
  puts("EXEMPLO 4: ");
  char sobrenome[10];
  printf("Qual seu sobrenome? ");
  fgets(sobrenome,10,stdin);
  printf("agora seu sobrenome, %s.\n",sobrenome);
  system("PAUSE");	
  return 0;
}
