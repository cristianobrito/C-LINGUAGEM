#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ola[] = "OLA";
    int i = 0;
    while(ola[i])
    {
       printf("%c at %p\n",ola[i],&ola[i]);
       i++;
    }

    return 0;
}
