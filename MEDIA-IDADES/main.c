#include<stdio.h>
#include<stdlib.h>
int main(void)
{
  //Declaração das variáveis
  int idade1, idade2, idade3, media;
  //formula soma dos termos dividivo pelo numero de termos 
  //mensagem ao usuario 
  puts("MEDIA DE IDADES DE PESSOAS:\n ");
  //Entrada de dados
  printf("DIGITE A PRIMEIRA IDADE: ");
  scanf("%d",&idade1);
  
  printf("DIDITE A SEGUNDA IDADE: ");
  scanf("%d",&idade2);
  
  printf("DIDITE A TERCEIRA IDADE: ");
  scanf("%d",&idade3);
  
  //Processamento
  media = (idade1 + idade2 + idade3) / 3;
  
  //Saída
  printf("MEDIA DE IDADES DOS INDIVIDUOS E = %d ANOS\n",media);
  
  system("pause");//pausa da tela somente para Windows
  return 0;//retorno da função main  
}
