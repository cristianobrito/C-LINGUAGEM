#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int c;
  
  for(c =- 5; c < 5; c++)
      printf("%d ",c);
      for(; c >= -5; c--)
      printf("%d ",c);
      putchar('\n');
  system("PAUSE");	
  return 0;
}
