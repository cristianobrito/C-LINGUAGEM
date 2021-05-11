#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char phrase[] = "Senha 123456, Usuario: Cristiano Oliveira, idade: 39, Ano: 2021.";
    /*DECLARACAO DAS VARIAVEIS*/
    int index,alpha,blank,punct;
    /*INICIALIZACAO*/
    alpha = blank = punct = 0;
    /*REUNE DADOS*/
    index = 0;
    /*LOOP*/
    while(phrase[index])
    {
        if(isalpha(phrase[index]))
            alpha++;
         if(isblank(phrase[index]))
            blank++;
         if(ispunct(phrase[index]))
            punct++;
            index++;
    }
    /*IMPRIME RESULTADOS*/
    printf("\"%s\"\n\n",phrase);
    puts("STATISTICAS:");
    printf("%d LETRAS\n",alpha);
    printf("%d  ESPACOS\n",blank);
    printf("%d  SINAIS DE PONTUACAO\n",punct);
    return 0;
}
