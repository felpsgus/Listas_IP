#include <stdio.h>
#include <math.h>

int main()
{
  int n1, n2, n3;
  int num;
  scanf("%i", &num);

  n3 = num % 10;
  n2 = ((num % 100) - n3) / 10;
  n1 = ((num % 1000) - n2) / 100;

  printf("%i%i%i\n", n3, n2, n1);
}