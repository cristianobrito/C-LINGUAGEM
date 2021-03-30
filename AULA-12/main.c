#include <stdio.h>
#include <stdlib.h>
//EXIBE O PROMPT 
void prompt(void)
{
     printf("C:\\DOS> ");
}
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
  system("PAUSE");	
  return 0;
}
