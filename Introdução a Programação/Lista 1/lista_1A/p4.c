#include <stdio.h>
#include <math.h>

int main()
{
  double A, B, C, D;
  scanf("%lf\n%lf\n%lf", &A, &B, &C);
  D = pow(B, 2) - 4 * A * C;

  printf("O VALOR DE DELTA E = %.2lf\n", D);
}