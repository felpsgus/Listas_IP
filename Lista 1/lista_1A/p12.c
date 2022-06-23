#include <stdio.h>
#include <math.h>

int main()
{
  int n100, n50, n10, n1;
  int num;
  scanf("%i", &num);

  n100 = (num - (num % 100)) / 100;
  n50 = ((num % 100) - ((num % 100) % 50)) / 50;
  n10 = (((num % 100) % 50) - (((num % 100) % 50) % 10)) / 10;
  n1 = (((num % 100) % 50) % 10);

  printf("NOTAS DE 100 = %i\n", n100);
  printf("NOTAS DE 50 = %i\n", n50);
  printf("NOTAS DE 10 = %i\n", n10);
  printf("MOEDAS DE 1 = %i\n", n1);
}