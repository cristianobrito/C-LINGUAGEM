#include <stdio.h>
#include <stdlib.h>

void prompt();
int main(int argc, char *argv[])
{
  int loop;
  char input[32];
  
  loop=0;
  while(loop<5)
  {
    prompt();
    fgets(input,31,stdin);
    loop=loop+1;
  }	
  return 0;
}
void prompt()
{
     printf("C:\\DOS> ");
}
