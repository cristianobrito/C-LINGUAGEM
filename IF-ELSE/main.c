#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int a,b;
  
  a = 8;
  b = a - 4;
  
  if(a > b)
  {
       printf("%d e maior que %d\n",a,b);
  }
  else
  {
      printf("%d e menor que %d\n",a,b);
  }
  system("PAUSE");	
  return 0;
}
