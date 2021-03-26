#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int duo;
  for(duo=2; duo<=100; duo=duo+2)
  {
      printf("%d\t",duo);
  }
  putchar('\n');
  system("PAUSE");	
  return 0;
}
