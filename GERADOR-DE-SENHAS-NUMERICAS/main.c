#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[])
{
  int r,a,b;
  //SEMPRE APARECEM NUMEROS DE 3 , 4 OU 5 DIGITOS ESCOLHA UM PARA A SENHA
  puts("GERANDO SENHAS NUMERICAS: \n");
  srand((unsigned)time(NULL));
  for(a=0;a<10;a++)
  {
    for(b=0;b<5;b++)
    {
      r=rand();
      printf("%d\t",r);
    }
    putchar('\n');
  }
  system("PAUSE");	
  return 0;
}
