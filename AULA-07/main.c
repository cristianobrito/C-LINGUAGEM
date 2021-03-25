#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  //multiplas variaveis 
  int cristiano, joyce, akilles;
  int marcelo = 50;
  int reciclandoVariavel;
  int a,b,c;
  cristiano = 39;
  joyce     = 32;
  akilles   = 9;
  a = 5;
  b = 10;
  c = a + b;
  
  puts("DECLARANDO VARIAVEIS:\n");
  printf("cristiano tem %d anos de idade \n",cristiano);
  printf("joyce tem %d anos de idade \n",joyce);
  printf("akilles tem %d anos de idade\n\n",akilles);
  //a variavel marcelo ja tem um valor atribuido
  puts("ESSA VARIAVEL JA TEM UM VALOR ATRIBUIDO NA INICIALIZACAO");
  printf("marcelo tem: %d anos de idade\n\n",marcelo);
  
  printf("cristiano tem: %d anos \njoyce tem: %d anos\nakilles tem: %d anos\n\n",cristiano,joyce,akilles);
  
  puts("REAPROVEITANDO VARIAVEIS:\n");
  reciclandoVariavel = 21;
  printf("aqui a variavel vale %d\n",reciclandoVariavel);
  reciclandoVariavel = 22;
  printf("aqui a variavel vale %d\n",reciclandoVariavel);
  reciclandoVariavel = 50;
  printf("ja aqui a variavel vale %d\n",reciclandoVariavel);
  
  puts("MISTURANDO VARIAVEIS:\n");
  printf("variaveis misturadas valem c = %d\n",c);
  
  system("PAUSE");	
  return 0;
}
