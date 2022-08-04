#include <stdio.h>
#include <math.h>

int main()
{
  int i, n;
  double a[3], b[3], cx, cy, cz;
  double distancia, maxdist = 0;

  scanf("%d", &n);
  n--;
  scanf("%lf %lf %lf", &a[0], &a[1], &a[2]);

  while (n--)
  {
    scanf("%lf %lf %lf", &b[0], &b[1], &b[2]);
    for (i = 0; i < 3; i++)
    {
      distancia = fabs(b[i] - a[i]);
      if (distancia > maxdist)
      {
        maxdist = distancia;
      }
    }
    printf("%.2f\n", maxdist);

    a[0] = b[0];
    a[1] = b[1];
    a[2] = b[2];
    maxdist = 0;
  }
}