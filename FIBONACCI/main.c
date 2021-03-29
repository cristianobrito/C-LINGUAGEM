#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int fibo,nacci;
  
  fibo = 0;
  nacci = 1;
  do
  {
        printf("%d ",fibo);
        fibo = fibo+nacci;
        printf("%d ",nacci);
        nacci = nacci+fibo;
  }while( nacci < 300 );
  
  putchar("\n");
  system("PAUSE");	
  return 0;
}
