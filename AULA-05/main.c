#include <stdio.h>
#include <stdlib.h>

#define VALUE 3

int main(int argc, char *argv[])
{
  printf("o valor e %d\n",VALUE);
  printf("%d e o valor\n",VALUE);
  printf("%d nao e %d\n",VALUE+1, VALUE);
  printf("%d nao e %d\n",VALUE-1, VALUE);
  printf("o valor e %d\n",VALUE);
  system("PAUSE");	
  return 0;
}
