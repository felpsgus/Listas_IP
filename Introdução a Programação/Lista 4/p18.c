#include <stdio.h>

int main()
{
  int i, k, j, l, n;
  scanf("%d", &n);
  int matriz[n][n];
  for (i = 0; i < n; i++)
  {
    for (k = 0; k < n; k++)
    {
      scanf("%d", &matriz[i][k]);
    }
  }

  for (i = 0; i < n; i++)
  {
    for (k = 0; k < n; k++)
    {
      for (j = 0; j < n; j++)
      {
        if (matriz[k][i] < matriz[j][i])
        {
          int aux = matriz[k][i];
          matriz[k][i] = matriz[j][i];
          matriz[j][i] = aux;
        }
      }
    }
  }

  for (i = 0; i < n; i++)
  {
    for (k = 0; k < n; k++)
    {
      printf("%d ", matriz[i][k]);
    }
    printf("\n");
  }
}