#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  //decisoes
  puts("EXEMPLO 1: ");
  int a,b;
  a = 6;
  b = a - 2;
  if(a > b)
  {
       printf("%d e maior que %d\n\n",a,b);
  }
  
  puts("EXEMPLO 2: ");
  int primeiro,segundo;
  printf("digite o primeiro valor: ");
  scanf("%d",&primeiro);
  printf("digite o segundo valor: ");
  scanf("%d",&segundo);
  
  puts("CALCULANDO...");
  if(primeiro < segundo)
  {
       printf("%d e menor que %d\n",primeiro,segundo);
  }
  if(primeiro > segundo)
  {
       printf("%d maior que %d\n\n",primeiro,segundo);
  }
  

  system("PAUSE");	
  return 0;
}
