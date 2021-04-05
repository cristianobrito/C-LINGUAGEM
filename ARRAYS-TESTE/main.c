#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int main(int argc, char *argv[])
{
  int bolas[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
  int interior,exterior,temp,x;
  
  //EXIBE UM ARRAY ORIGINAL 
  puts("original arrays:");
  for(x=0;x<SIZE;x++)
  printf("%d\t",bolas[x]);
  putchar('\n');
  
  /*CLASSIFICAR BUBBLE*/
  for(exterior=0;exterior<SIZE-1;exterior++)
  {
    for(interior=exterior+1;interior<SIZE;interior++)
    {
      if(bolas[exterior] > bolas[interior])
      {
        temp=bolas[exterior];
        bolas[exterior] = bolas[interior];
        bolas[interior] = temp;
      }
    }
  }
  /*EXIBE UM ARRAY ORIGINAL*/
  puts("ARRAY EM ORDEM:");
  for(x=0;x<SIZE;x++)
      printf("%d\t",bolas[x]);
      putchar('\n');
  system("PAUSE");	
  return 0;
}
