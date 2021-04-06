#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  char jogo[3][3];
  int x,y;
  
  //INICIA UMA MATRIZ
  for(x=0;x<3;x++)
     for(y=0;y<3;y++)
        jogo[x][y]='.';
        jogo[1][1] ='x';
        
  //EXIBE O TABULEIRO DO JOGO
  puts("prepare-se para jogar?");
  for(x=0;x<3;x++)
  {
    for(y=0;y<3;y++)
       printf("%c\t",jogo[x][y]);
       putchar('\n');
  }
  system("PAUSE");	
  return 0;
}
