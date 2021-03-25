#include<stdio.h>
#include<stdlib.h>
int main(void)
{
  //Declaração das variáveis
  float salario1, salario2, media;
  //mensagem ao usuario 
  puts("MEDIA SALARIAL DE UM EMPREGADO:\n ");
  //Entrada de dados
  printf("DIGITE O MENOR SALARIO: ");
  scanf("%f",&salario1);
  
  printf("DIDITE O MAIOR SALARIO: ");
  scanf("%f",&salario2);
  
  //Processamento
  media = (salario1 + salario2) / 2;
  
  //Saída
  printf("MEDIA SALARIAL DO EMPREGADO = %2.3f\n",media);
  
  system("pause");//pausa da tela somente para Windows
  return 0;//retorno da função main  
}
