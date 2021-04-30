#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <time.h>
#include <sys/stat.h>

int main()
{
    DIR *folder;
    struct dirent *file;
    struct stat filestat;

    folder=opendir(".");
    if(folder==NULL)
    {
        puts("habilite para ler o diretorio");
        exit(1);
    }
    while(file = readdir(folder))
    {
        stat(file->d_name,&filestat);
        printf("%-14s %51d %s",
               file->d_name,
               (long)filestat.st_size,
               ctime(&filestat.st_mtime));
    }
    closedir(folder);
    return(0);
}
