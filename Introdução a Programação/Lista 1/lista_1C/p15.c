#include <stdio.h>
#include <math.h>

int main()
{
  double n, e;
  scanf("%lf %lf", &n, &e);
  double r = 1, erro = 1;

  while (erro > e)
  {
    r = (r + n / r) / 2;
    erro = (r * r) - n;
    printf("r: %.9lf, erro: %.9lf\n", r, erro);
  }
}
