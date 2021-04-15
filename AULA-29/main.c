#include <stdio.h>
#include <stdlib.h>

void proc(void);

int main()
{
    puts("primeira chamada");
    proc();
    puts("segunda chamada");
    proc();

    return 0;
}
void proc(void)
{
    int a;
    printf("o valor da variavel e %d\n",a);
    printf("digite uma nova variavel: ");
    scanf("%d",&a);
}
