#include <stdio.h>
#include <stdlib.h>

#define SIZE 6

int main(int argc, char *argv[])
{
  int bubble[] = {95, 60, 6, 87, 50, 24 };
  int inner,outer,temp,x;
  
  //EXIBE UM ARRAY ORIGINAL 
  puts("original arrays:");
  for(x=0;x<SIZE;x++)
  printf("%d\t",bubble[x]);
  putchar('\n');
  
  /*CLASSIFICAR BUBBLE*/
  for(outer=0;outer<SIZE-1;outer++)
  {
    for(inner=outer+1;inner<SIZE;inner++)
    {
      if(bubble[outer] > bubble[inner])
      {
        temp=bubble[outer];
        bubble[outer] = bubble[inner];
        bubble[inner] = temp;
      }
    }
  }
  /*EXIBE UM ARRAY ORIGINAL*/
  puts("ARRAY EM ORDEM:");
  for(x=0;x<SIZE;x++)
      printf("%d\t",bubble[x]);
      putchar('\n');
  system("PAUSE");	
  return 0;
}
