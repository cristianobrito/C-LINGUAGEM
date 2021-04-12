#include <stdio.h>
#include <string.h>

int main()
{
    char first[40];
    char last[20];

    printf("QUAL SEU NOME: ");
    scanf("%s",first);
    printf("QUAL SEU SOBRENOME: ");
    scanf("%s",last);
    strcat(first,last);
    printf("prazer em te conhecer, %s!\n",first);
    return 0;
}
