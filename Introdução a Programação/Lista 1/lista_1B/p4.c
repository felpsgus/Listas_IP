#include <stdio.h>

int main()
{
  int ht, r, h;
  double t;
  scanf("%d", &ht);
  r = ht % 3;
  h = ht - r;
  if (h >= 3)
  {
    t = (h * 10) / 3 + (r * 5);
  }
  else
  {
    t = r * 5;
  }
  printf("O VALOR A PAGAR E = %.2lf\n", t);
}