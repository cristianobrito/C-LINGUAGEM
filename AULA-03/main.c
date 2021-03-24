#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  //pagina 61 
  printf("o valor %d e um inteiro.\n", 986);
  printf("o valor %f e um float.\n\n", 98.6);
  //para corrigir a saida 
  //colocando 2.1 entre o % e o f.a saida da formatação 
  //com dois digitos a esquerda do decimal e um a direita
  puts("CORRIGINDO A SAIDA");
  printf("o valor %1.1f e um float.\n", 98.6);
  printf("o valor %2.1f e um float.\n", 98.6);
  printf("o valor %3.1f e um float.\n", 98.6);
  printf("\n\n");
  puts("FORMATE O VALOR: 3.1415926535");
  printf("o valor %1.1f e um float.\n", 3.1415926535);
  printf("o valor %1.2f e um float.\n", 3.1415926535);
  printf("o valor %1.3f e um float.\n", 3.1415926535);
  printf("o valor %1.4f e um float.\n", 3.1415926535);
  printf("o valor %1.5f e um float.\n", 3.1415926535);
  printf("o valor %1.6f e um float.\n", 3.1415926535);
  printf("o valor %1.7f e um float.\n", 3.1415926535);
  printf("o valor %1.8f e um float.\n", 3.1415926535);
  printf("o valor %1.9f e um float.\n", 3.1415926535);
  printf("o valor %1.10f e um float.\n", 3.1415926535);
  printf("o valor %2.1f e um float.\n", 3.1415926535);
  printf("o valor %2.2f e um float.\n", 3.1415926535);
  printf("o valor %2.3f e um float.\n", 3.1415926535);
  printf("\n\n");
  puts("FORMATE O VALOR: 0.00008");
  printf("o valor %1.1f e um float.\n", 0.00008);
  printf("o valor %1.2f e um float.\n", 0.00008);
  printf("o valor %1.3f e um float.\n", 0.00008);
  printf("o valor %1.4f e um float.\n", 0.00008);
  printf("o valor %1.5f e um float.\n", 0.00008);
  printf("o valor %1.6f e um float.\n", 0.00008);
  printf("\n\n");
  puts("INTEIROS");
  printf("o valor e inteiro: %d\n",981);
  printf("o valor e inteiro: %d\n",982);
  printf("o valor e inteiro: %d\n",983);
  printf("o valor e inteiro: %d\n",81);
  system("PAUSE");	
  return 0;
}
