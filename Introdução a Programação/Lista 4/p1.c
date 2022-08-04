#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
  int i, k;
  int m[2][2];
  double determinante;

  for (i = 0; i < 2; i++)
  {
    for (k = 0; k < 2; k++)
    {
      scanf("%d", &m[i][k]);
    }
  }

  determinante = m[0][0] * m[1][1] - m[0][1] * m[1][0];

  printf("%.2lf\n", determinante);
}