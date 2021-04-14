#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct player
    {
        char name[32];
        int highscore;
    };
    struct player xbox;

    printf("ENTRE COM O NOME DO JOGADOR: ");
    scanf("%s",xbox.name);
    printf("ENTRE COM A PONTUACAO: ");
    scanf("%d",&xbox.highscore);

    printf("jogador %s pontuacao foi %d\n",xbox.name,xbox.highscore);
    return 0;
}
