#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int resposta;
  
  printf("QUEM DESCOBRIU O BRASIL? \n");
  printf("(1) PEDRO ALVARES DE CABRAL\n");
  printf("(2) PEDRO ALVARES CABRAL \n");
  printf("(3) PERO DE CABRAL \n");
  printf("(4) AMERICO VESPULCIO \n");
  printf("(5) CRISTOVAO COLOMBO \n");
  printf("ENTRE COM AS RESPOSTA DE ( 1-5 ): ");
  scanf("%d",&resposta);
  
  switch(resposta)
  {
    case 1:
         puts("ERRADO NAO TINHA O DE");
         break;
    case 2:
         puts("CERTA");
         break;
    case 3:
         puts("ERRADA PERO NAO EXISTE");
         break;
    case 4:
         puts("ERRADO ESSA E OUTRA HISTORIA");
         break;
    case 5:
         puts("ERRADA ");
         break;
    default:
         puts("digite 1 , 2, 3, 4 ou 5");
  }
  system("PAUSE");	
  return 0;
}
