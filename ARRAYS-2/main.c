#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  char sentence[] = "teste randominco ";
  int index;
  index = 0;
  while(sentence[index] != '\0')
  {
    putchar(sentence[index]);
    index++;
  }
  putchar("\n");
  system("PAUSE");	
  return 0;
}
