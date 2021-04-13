#include <stdio.h>
#include <stdlib.h>

int main()
{
    char i;
    do
    {
      i = getchar();
      putchar(i);
    }while(i != '.');

    putchar('\n');
    return 0;
}
