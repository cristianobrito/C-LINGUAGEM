#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *C;
    int highscore[5];
    int x;

    C = fopen("score.dat","r");
    if(!C)
    {
        puts("File error!");
        exit(1);
    }
    fread(highscore,sizeof(int),5,C);
    fclose(C);
    for(x=0;x<5;x++)
        printf("high score #%d: %d\n",x+1,highscore[x]);
    return 0;
}
