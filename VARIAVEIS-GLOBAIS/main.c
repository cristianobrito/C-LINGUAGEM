#include <stdio.h>
#include <stdlib.h>
int count;

void func1(void);
void func2(void);

void main(void)
{
  count = 100;
  func1();
  
  system("PAUSE");	
  return 0;
}
void func1(void)
{
     int temp;
     temp = count;
     func2();
     printf("count e %d", count);
}
void func2(void)
{
     //IMPRIMIRA '.' 100 VEZES
     int count;
     for(count=0; count<100; count++)
     putchar('A');
}
