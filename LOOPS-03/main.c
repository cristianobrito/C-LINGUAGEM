#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  char alfabeto;
  for(alfabeto='A' ; alfabeto<='Z'; alfabeto=alfabeto+1)
  {
     printf("%c",alfabeto);
  }
  putchar('\n');
  system("PAUSE");	
  return 0;
}
