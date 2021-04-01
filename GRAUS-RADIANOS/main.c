#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  float graus,radianos;
  
  printf("Digite um angulo em graus: ");
  scanf("%f",&graus);
  radianos = 0.0174532925*graus;
  printf("%.2f graus e %.2f radianos.\n",graus,radianos);
  system("PAUSE");	
  return 0;
}
