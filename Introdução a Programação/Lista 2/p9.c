#include <stdio.h>
#include <math.h>

int main()
{
  int i = 1, n;
  double ax, ay, az, bx, by, bz;
  double distancia;

  scanf("%d", &n);

  scanf("%lf %lf %lf", &ax, &ay, &az);

  while (i != n)
  {
    scanf("%lf %lf %lf", &bx, &by, &bz);

    distancia = pow(ax - bx, 2) + pow(ay - by, 2) + pow(az - bz, 2);

    printf("%.2f\n", sqrt(distancia));

    ax = bx;
    ay = by;
    az = bz;

    i++;
  }
}