#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{  
  int pontuacao1, pontuacao2,pontuacao3;
  
  printf("maior puntuacao: ");
  scanf("%d",&pontuacao1);
  printf("segunda pontuacao: ");
  scanf("%d",&pontuacao2);
  printf("menor pontuacao: ");
  scanf("%d",&pontuacao3);
  
  puts("AQUI ESTA AS PONTUACOES: ");
  printf("#1 %d\n",pontuacao1);
  printf("#2 %d\n",pontuacao2);
  printf("#3 %d\n",pontuacao3);
  system("PAUSE");	
  return 0;
}
