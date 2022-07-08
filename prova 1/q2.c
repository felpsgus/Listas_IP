#include <stdio.h>
#include <math.h>

int main()
{
  int n100, n50, n20, n10, n5, n2, n1;
  int num;
  scanf("%i", &num);

  n100 = (num - (num % 100)) / 100;
  n50 = ((num % 100) - ((num % 100) % 50)) / 50;
  n20 = (((num % 100) % 50) - (((num % 100) % 50) % 20)) / 20;
  n10 = ((((num % 100) % 50) % 20) - (((num % 100) % 50) % 10)) / 10;
  n5 = (((num % 100) % 50) % 10 - (((num % 100) % 50) % 10) % 5) / 5;
  n2 = (((num % 100) % 50) % 10 % 5 - (((num % 100) % 50) % 10 % 5) % 2) / 2;
  n1 = (((num % 100) % 50) % 10 % 5) % 2 - (((((num % 100) % 50) % 10 % 5) % 2) % 1);

  printf("%i\n", num);
  printf("%i nota(s) de R$ 100,00\n", n100);
  printf("%i nota(s) de R$ 50,00\n", n50);
  printf("%i nota(s) de R$ 20,00\n", n20);
  printf("%i nota(s) de R$ 10,00\n", n10);
  printf("%i nota(s) de R$ 5,00\n", n5);
  printf("%i nota(s) de R$ 2,00\n", n2);
  printf("%i nota(s) de R$ 1,00\n", n1);
}