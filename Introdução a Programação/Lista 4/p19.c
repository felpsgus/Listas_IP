#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i, k, j = 0, n, exp, binario;
  scanf("%d %d", &n, &exp);
  double matriz[n][n], multiplicacao[n][n], aux[n][n];

  for (i = 0; i < 2; i++)
  {
    for (k = 0; k < 2; k++)
    {
      scanf("%lf", &matriz[i][k]);
      multiplicacao[i][k] = 0;
      aux[i][k] = matriz[i][k];
    }
  }

  while (exp > 1)
  {
    for (i = 0; i < n; i++)
    {
      for (k = 0; k < n; k++)
      {
        for (j = 0; j < n; j++)
        {
          multiplicacao[i][k] += aux[i][j] * matriz[j][k];
        }
      }
    }

    for (i = 0; i < n; i++)
    {
      for (k = 0; k < n; k++)
      {
        aux[i][k] = multiplicacao[i][k];
        multiplicacao[i][k] = 0;
      }
    }
    exp--;
  }

  for (i = 0; i < n; i++)
  {
    for (k = 0; k < n; k++)
    {
      printf("%.3lf ", aux[i][k]);
    }
    printf("\n");
  }
}