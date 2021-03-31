#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  float alpha;
  
  alpha = 501;
  printf("alpha = %.1f\n",alpha);
  alpha = alpha + 99;
  printf("alpha = %.1f\n",alpha);
  alpha = alpha - 250;
  printf("alpha = %.1f\n",alpha);
  alpha = alpha / 82;
  printf("alpha = %.1f\n",alpha);
  alpha = alpha * 4.3;
  printf("alpha = %.1f\n",alpha);
  system("PAUSE");	
  return 0;
}
