#include <stdio.h>
#include <stdlib.h>

int main()
{
    char lead;
    char *sidekick;

    lead = 'A';
    sidekick = &lead;

    printf("SOBRE A VARIAVEL 'lead':\n");
    printf("size\t\t%ld\n",sizeof(lead));
    printf("contents\t%c\n",lead);
    printf("location\t%p\n",&lead);
    printf("and variable 'sidekick':\n");
    printf("contents\t%p\n",sidekick);
    return 0;
}
