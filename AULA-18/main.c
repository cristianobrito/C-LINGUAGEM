#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

void showarray(int array[]);
int main(int argc, char *argv[])
{
  int n[] = { 1, 2, 3, 5, 7 };
  puts("Aqui seu array:");
  showarray(n);
  system("PAUSE");	
  return 0;
}
void showarray(int array[])
{
   int x;
   for(x=0;x<SIZE;x++)
      printf("%d\t",array[x]);
      putchar('n');
}
