#include <stdio.h>
#include <math.h>

int main()
{
  double H, R, A, V;
  scanf("%lf %lf", &H, &R);
  A = (3 * pow(R, 2) * sqrt(3)) / 2;
  V = (A * H) / 3;

  printf("O VOLUME DA PIRAMIDE E = %.2lf METROS CUBICOS\n", V);
}