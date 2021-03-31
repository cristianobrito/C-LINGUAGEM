#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int a,b;
  
  b = 16;
  printf("antes, um nao e adicionado e b=%d\n",b);
  a=b++;
  printf("depois, a=%d e b=%d\n",a,b);
  system("PAUSE");	
  return 0;
}
