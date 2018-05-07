C=A+B;  
A=C-A;    
B=C-B;  

#include<stdio.h>

int main(void)
{
  int a = 5, b = 10;

  printf("a = %d and b = %d\n", a, b);

  a = a + b;
  b = a - b;
  a = a - b;

  printf("Csere utan, a = %d and b = %d\n", a, b);

  return 0;
}  