#include <stdio.h>
#include <stdlib.h>

#define valor 5

int main(int argc, char *argv[])
{
  int a;
  
  printf("MODULO: %d:\n",valor);
  for(a = 0; a < 30; a++)
      printf("%d %% %d = %d\n",a,valor,a%valor);
  system("PAUSE");	
  return 0;
}
