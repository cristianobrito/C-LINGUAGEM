#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  unsigned seed;
  int r,a,b;
  printf("digite um numero aleatorio seed: ");
  scanf("%u",&seed);
  srand(seed);
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
