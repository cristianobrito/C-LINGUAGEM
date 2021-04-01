#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int r,a,b;
  
  puts("100 numeros aleatorios: ");
  for(a=0;a<20;a++)
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
