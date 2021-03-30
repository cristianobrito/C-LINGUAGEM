#include <stdio.h>
#include <stdlib.h>

void rio(void);

int main()
{
  int a;
  
  a = 365;
  printf("na funcao principal, a=%d\n",a);
  rio();
  printf("na funcao principal, a=%d\n",a);	
  system("pause");
  return (0);
}
void rio(void)
{
     int a;
     a = -10;
     printf("na funcao rio, a=%d\n",a);
}

