#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include <math.h>

int main()
{
  double n, e;
  scanf("%lf", &n);
  int rk, r = sqrtf(n);

  double limite = n - (rk ^ 2);

  while (limite > e)
  {
    rk = ((rk - 1) + n / (rk - 1)) / 2;
    printf("r: 1.500000000, erro: 0.250000000\n", rk);
  }
}