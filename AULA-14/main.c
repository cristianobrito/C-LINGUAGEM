#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  float resultado, valor;
  printf("digite os valores: ");
  scanf("%f",&valor);
  resultado = sqrt(valor);
  printf("a raiz quadrada de %.2f e %.2f\n",valor,resultado);
  resultado = pow(valor,3);
  printf("%.2f para o 3rd poder e %.2f\n",valor,resultado);
  resultado = floor(valor);
  printf("o chao de %.2f e %.2f\n",valor,resultado);
  resultado = ceil(valor);
  printf("o teto de %.2f e %.2f\n",valor,resultado);
  system("PAUSE");	
  return 0;
}
