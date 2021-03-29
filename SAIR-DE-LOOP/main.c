#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  
  int count;
  count = 0;
  while(1)
  {
      printf("%d, ",count);
      count = count + 1;
        if( count > 50)
            break; 
  }
  putchar("\n");
  system("PAUSE");	
  return 0;
}
