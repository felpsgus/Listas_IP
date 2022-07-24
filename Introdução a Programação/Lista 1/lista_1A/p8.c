#include <stdio.h>
#include <math.h>

int main()
{
  double pc, pd, pi, V, T;
  scanf("%lf\n%lf\n%lf", &pc, &pd, &pi);
  V = pc + (pc * (pd / 100)) + (pc * (pi / 100));

  printf("O VALOR DO CARRO E = %.2lf\n", V);
}