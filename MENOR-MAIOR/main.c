#include<stdio.h>
#include<stdlib.h>

int main()
{
   int n, maior = 0, menor = 0, soma = 0;
   printf("Introduza quantos numeros quiser e se desejar sair insira '0'");
   printf("n");
   do {
       printf("Introduza um numero: ");
       scanf("%d", &n);
       soma = soma + n;
       if (n > maior)
           maior = n;
       if (n < menor && n != 0)
           menor = n;
   } while (n != 0);
   printf("Menor valor: %d\nMaior valor: %d\nSoma: %d\n", menor, maior, soma);
   system("Pause");
}
