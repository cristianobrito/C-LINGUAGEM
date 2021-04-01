#include <stdio.h>
#include <stdlib.h>

#define PI 3.14159
#define WAVELENGTH 70 
#define PERIOD .1

int main(int argc, char *argv[])
{
  float graph,s,x;
  
  for(graph=0;graph<PI;graph +=PERIOD)
  {
     s = sin(graph);
     for(x=0;x<s*WAVELENGTH;x++)
      putchar('*');
      putchar('\n');
  }
  system("PAUSE");	
  return 0;
}
