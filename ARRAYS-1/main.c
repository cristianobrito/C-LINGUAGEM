#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int pontuacao[4];
  int x;
  
  for(x=0;x<4;x++)
  {
    printf("sua pontuacao #%d pontuacao: ",x+1);
    scanf("%d",&pontuacao[x]);
  }
  puts("AQUI ESTA A PONTUACAO");
  for(x=0;x<4;x++)
      printf("#%d %d\n",x+1,pontuacao[x]);
  system("PAUSE");	
  return 0;
}
