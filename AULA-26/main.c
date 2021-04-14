#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct scores
    {
        char nome[32];
        int score;
    };
    struct scores player[14];
    int x;

    for(x=0;x<4;x++)
    {
        printf("ENTRE COM O JOGADOR %d: ",x+1);
        scanf("%s",player[x].name);
        printf("ENTRE COM O SCORE: ");
        scanf("%d",&player[x].name);
    }
    puts("PLAYER INFO");
    printf("#\tName\tScore\n");
    for(x=0;x<4;x++)
    {
        printf("%d\t%s\t%5d\n",x+1,player[x].name,player[x].score);
    }
    printf("Hello world!\n");
    return 0;
}
