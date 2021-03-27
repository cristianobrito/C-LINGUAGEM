#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int alpha,code;
  for(alpha='A'; alpha<='G'; alpha=alpha+1)
  {
     for(code=1;code<=7;code=code+1)
     {
        printf("%c%d\t",alpha,code);
     }
     printf('\n');
  }
  system("PAUSE");	
  return 0;
}
