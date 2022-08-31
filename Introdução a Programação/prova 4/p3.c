#include <stdio.h>

int main()
{
  int i, j, k, l, n, aux = 0, vezes;
  scanf("%d", &n);
  int matriz[n][n];

  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n; j++)
    {
      scanf("%d", &matriz[i][j]);
    }
  }

  if (n % 2 == 0)
  {
    vezes = n / 2;
  }
  else
  {
    vezes = (n / 2) + 1;
  }

  while (vezes--)
  {
    for (i = aux; i < n - aux; i++)
    {
      for (j = aux; j < n - aux; j++)
      {
        printf("%d ", matriz[i][j]);
      }
      printf("\n");
    }
    aux++;
  }
}