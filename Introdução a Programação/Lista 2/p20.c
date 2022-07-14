#include <stdio.h>
#include <math.h>

int main()
{
  int i = 1, n;
  double ax, ay, az, bx, by, bz, cx, cy, cz;
  double distancia;

  scanf("%d", &n);

  scanf("%lf %lf %lf", &ax, &ay, &az);

  while (i != n)
  {
    scanf("%lf %lf %lf", &bx, &by, &bz);

    cx = fabs(bx - ax);
    cy = fabs(by - ay);
    cz = fabs(bz - az);

    if (cx > cy && cx > cz)
    {
      distancia = cx;
    }
    else if (cy > cx && cy > cz)
    {
      distancia = cy;
    }
    else
    {
      distancia = cz;
    }

    printf("%.2f\n", distancia);

    ax = bx;
    ay = by;
    az = bz;

    i++;
  }
}