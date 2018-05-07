#include<stdio.h>

int main(void)
{
  int a = 5, b = 10;

  printf("a = %d and b = %d\n", a, b);

  a = a * b; /* a = 5 * 10 = 50 */
  b = a / b; /* b = 50 / 10 = 5 */
  a = a / b; /* a = 50 / 5 = 10 */

  printf("Csere utan, a = %d and b = %d\n", a, b);

  return 0;
}