#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  char escolha;
  puts("OPCOES DE COMIDA DO HOTEL:");
  puts("A - cafe da manha, almoço, jantar");
  puts("B - almoco e lanche");
  puts("C - jantar");
  printf("QUAL A SUA ESCOLHA? ");
  scanf("%c",&escolha);
  
  printf("ESCOLHA UMA DENTRE AS ACIMAS \n ");
  switch(escolha)
  {
     case 'A':
          printf("completo sai por 100 reais\n");
          break;
     case 'B':
          printf("metade sai por 50 reais\n");
          break;
     case 'C':
          printf("so um sai por 30 reais\n");
          break;
     default:
          printf("VOCE NAO ESCOLHEU NENHUM PACOTE escolha A , B ou C\n");
          break;
  }
  system("PAUSE");	
  return 0;
}
