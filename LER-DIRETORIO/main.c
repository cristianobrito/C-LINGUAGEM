#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>

int main()
{
    DIR *folder;
    struct dirent *file;

    folder=opendir(".");
    if(folder==NULL)
    {
        puts("habilite para ler o diretorio");
        exit(1);
    }
    file = readdir(folder);
    printf("encontre o arquivo '%s'\n",file->d_name);
    closedir(folder);
    return(0);
}
