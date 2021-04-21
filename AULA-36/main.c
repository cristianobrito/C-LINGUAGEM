#include <stdio.h>
#include <stdlib.h>

int main()
{
    char   c = 'c';
    int    i = '123';
    float  f = 98.6;
    double d = 6.022e23;
    printf("endereco do 'c' %p\n",&c);
    printf("endereco do 'i' %p\n",&i);
    printf("endereco do 'f' %p\n",&f);
    printf("endereco do 'd' %p\n",&d);
    return 0;
}
