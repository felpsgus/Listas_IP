#include <stdio.h>
#include <math.h>

int main()
{
  double n, e;
  scanf("%lf %lf", &n, &e);
  double r = 1;

  double limite = n - (r * r);

  while ((n - (r * r)) > e)
  {
    r = ((r) + n / (r)) / 2;
    printf("r: %.9lf, erro: %.9lf\n", r, e);
  }
}
