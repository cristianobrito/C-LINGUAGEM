#include <stdio.h>
#include <stdlib.h>

float convert(float f);

int main()
{
  float temp_f;
  printf("TEMPERATURA EM FAHRENHEIT: ");
  scanf("%f",&temp_f);
  printf("%.1fF e %.1fC\n",temp_f,convert(temp_f));
  system("PAUSE");	
  return 0;
}
float convert(float f)
{
      return(f - 32) / 1.8;
}
