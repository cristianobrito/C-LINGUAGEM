#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  //VARIAVEIS 
  char   c;
  int    i;
  float  f;
  double d;
  
  c = 'a';
  i = 1;
  f = 19.0;
  d = 20000.009;
  
  printf("%c\n",c);
  printf("%i\n",i);
  printf("%f\n",f);
  printf("%f\n\n",d);
  
  printf("%c\n%d\n%f\n%f\n",c,i,f,d);
  system("PAUSE");	
  return 0;
}
