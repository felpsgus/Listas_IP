#include <stdio.h>
#include <math.h>

int main()
{
  double hr, min, seg, tt;
  scanf("%lf\n%lf\n%lf", &hr, &min, &seg);
  tt = (hr * 3600) + (min * 60) + seg;

  printf("O TEMPO EM SEGUNDOS E = %.0lf\n", tt);
}