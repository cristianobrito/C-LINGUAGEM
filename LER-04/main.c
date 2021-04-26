#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *C;
    int highscore;

    C = fopen("score.dat","w");
    if(!C)
    {
        puts("File error!");
        exit(1);
    }
    printf("QUAL A SUA PONTUACAO? ");
    scanf("%d",&highscore);
    fprintf(C,"%d",highscore);
    fclose(C);
    puts("Score salvo");
    return 0;
}
