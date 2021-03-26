#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int coordenadas;
  printf("entre com as coordenadas:  ");
  scanf("%d",&coordenadas);
  if(coordenadas >= -5 && coordenadas <= 5)
  {
     puts("COORDENADA ERRADA!");
  }
  else
  {
      puts("ALVO CERTO!");
  }
  system("PAUSE");	
  return 0;
}
