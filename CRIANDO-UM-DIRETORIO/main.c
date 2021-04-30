#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>

int main()
{
    char curdir[255];
    getcwd(curdir,255);
    printf("o diretorio atual e  %s\n",curdir);
    mkdir("SEXTOU");
    puts("novo diretorio criado.");
    chdir("SEXTOU");
    getcwd(curdir,255);
    printf("diretorio atual e %s\n",curdir);
    return 0;
}
