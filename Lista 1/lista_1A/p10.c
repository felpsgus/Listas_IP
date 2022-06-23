#include <stdio.h>
#include <math.h>

int main()
{
  int n1, n2, n3, n4;
  int num;
  scanf("%i", &num);

  n3 = num % 10;
  n2 = ((num % 100) - n3) / 10;
  n1 = ((num % 1000) - n2) / 100;
  n4 = (n1 + n2 * 3 + n3 * 5) % 7;

  printf("O NOVO NUMERO E = %i%i\n", num, n4);
}