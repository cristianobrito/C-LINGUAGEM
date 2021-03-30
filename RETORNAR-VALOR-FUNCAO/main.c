#include <stdio.h>
#include <stdlib.h>

float convert(float f);
int main(int argc, char *argv[])
{
  float temp_f,temp_c;
  printf("Temperatura em fahrenheit: ");
  scanf("%f",&temp_f);
  temp_c = convert(temp_f);
  printf("%.1fF e %.1fc\n",temp_f,temp_c);
  system("PAUSE");	
  return 0;
}
float convert(float f)
{
      float t;
      t = (f - 32) / 1.8;
      return(t);
}
