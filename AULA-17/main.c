#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  char jogodavelha[3][3][3];
  int  x,y,z;
  //INICIALIZA A MATRIZ
  for(x=0;x<3;x++)
     for(y=0;y<3;y++)
         for(z=0;z<3;z++)
             jogodavelha[x][y][z] = '.';
  jogodavelha[1][1][1] = 'X';
  
  //EXIBE O TABULEIRO DE JOGO 
  puts("pronto para jogar 3D jogo-da-velha?");
  for(z=0;z<3;z++)
  {
    printf("LEVEL %d\n",z+1);
    for(x=0;x<3;x++)
    {
      for(y=0;y<3;y++)
         printf("%c\t",jogodavelha[x][y][z]);
         putchar('\n');
    }
  }
  system("PAUSE");	
  return 0;
}
