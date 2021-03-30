#include <stdio.h>
#include <stdlib.h>

void limit(int stop);

int main(int argc, char *argv[])
{
  int s;
  
  printf("ENTER COM UM VALOR DE PARADA ENTRE (0-100): ");
  scanf("%d",&s);
  limit(s);
  system("PAUSE");	
  return 0;
}
void limit(int stop)
{
     int x;
     
     for(x=0;x<=100;x=x+1)
     {
        printf("%d ",x);
        if(x==stop)
        {
           puts("voce venceu!");
           return;
        }
     }
     puts("eu venci!!");
}
