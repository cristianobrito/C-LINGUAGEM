#include <stdio.h>
#include <stdlib.h>

#define SECRETO 13
int main()
{
  
  int segredo;
  
  puts("EXEMPLO 3: ");
  printf("Advinhe o numero secreto: ");
  scanf("%d",&segredo);
  if(segredo == SECRETO)
  {
       puts("o numero secreto e: ");
       
  }
  return(0);
  if(segredo != SECRETO)
  {
      puts("ERRADO");
      
  }
  return(1);
  system("PAUSE");	
  return 0;
}
