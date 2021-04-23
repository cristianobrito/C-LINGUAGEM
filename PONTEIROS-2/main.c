#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *frutas[] =
    {
        "melancia",
        "banana",
        "pera",
        "maca",
        "coco",
        "uva",
        "abacate"
    };
    int x;
    for(x=0;x<7;x++)
        puts(frutas[x]);
    return 0;
}
