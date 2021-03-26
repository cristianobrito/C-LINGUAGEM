#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int codigo;
  printf("ENTRE COM O CODIGO DE ( 1-3 ): ");
  scanf("%d",&codigo);
  
  switch(codigo)
  {
    case 1:
         puts("PRIMEIRA OPCAO.");
         break;
    case 2:
         puts("segunda opcao");
         break;
    case 3:
         puts("terceira opcao");
         break;
    default:
         puts("digite 1 , 2 ou 3");
  }
  system("PAUSE");	
  return 0;
}
