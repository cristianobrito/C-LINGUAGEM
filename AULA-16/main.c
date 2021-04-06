#include <stdio.h>
#include <stdlib.h>

#define SIZE 3 

int main(int argc, char *argv[])
{
  char presidente[SIZE][8] = {
       "Lula",
       "Bozo",
       "Dilma"
       };
       int x,index;
       for(x=0;x<SIZE;x++)
       {
         index = 0;
         while(presidente[x][index] != '\0')
         {
           putchar(presidente[x][index]);
           index++;
         }
         putchar('\n');
       }
  system("PAUSE");	
  return 0;
}
