#include <stdio.h>
#include <string.h>

int main()
{
  char senha[]="cris";
  char input[15];
  int  match;
  
  
  printf("SENHA: \n");
  scanf("%s",input);
  
  match=strcmp(input,senha);
  if(match==0)
     puts("senha correta");
  else
      puts("senha errada voce nao esta autorizado");
      
  system("PAUSE");    
  return(0);
  	
  
}
