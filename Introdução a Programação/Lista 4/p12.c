#include <stdio.h>

int main()
{
  int i, k, j, l, n, aux = 0;

  scanf("%d", &n);
  int matriz[n + 1][n + 1];

  for (i = 0; i < n + 1; i++)
  {
    for (k = 0; k < n + 1; k++)
    {
      scanf("%d", &matriz[i][k]);
    }
  }

  for (i = 0; i < n; i++)
  {
    for (k = 0; k < n; k++)
    {
      for (j = i; j < 2 + i; j++)
      {
        for (l = k; l < 2 + k; l++)
        {
          if (matriz[j][l] == 1)
          {
            aux++;
          }
        }
      }
      if (aux >= 2)
      {
        printf("S");
      }
      else
      {
        printf("U");
      }
      aux = 0;
    }
    printf("\n");
  }
}