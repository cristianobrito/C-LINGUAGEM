#include <stdio.h>
#include <stdlib.h>
#include "ex03.h"

human person;
//C:\Users\brito\Desktop\C\00-03\ex03.h
//caminho absoluto doarquivo de cabeçalho

int main()
{
    fillstructure();
    printstructure();
    return 0;
}
void fillstructure(void)
{
    printf("Digite seu nome: ");
    fgets(person.name, 31,stdin);
    printf("Digite sua idade: ");
    scanf("%d",&person.age);
}

void printstructure(void)
{
    printf("Voce e %s\n",person.name);
    printf("E sua idade %d anos de idade.\n",person.age);
}
