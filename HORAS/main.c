#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    time_t tictoc;
    time(&tictoc);
    printf("A HORA ATUAL E: %s\n",ctime(&tictoc));
    return 0;
}
