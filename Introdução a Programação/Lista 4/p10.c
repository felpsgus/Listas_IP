#include <stdio.h>

int main()
{
  int i, k, n;
  scanf("%d", &n);
  int matriz[n][n], transposta[n][n], tr = 0;

  for (i = 0; i < n; i++)
  {
    for (k = 0; k < n; k++)
    {
      scanf("%d", &matriz[i][k]);
      transposta[k][i] = matriz[i][k];
      if (i == k)
      {
        tr += matriz[i][k];
      }
    }
  }

  for (i = 0; i < n; i++)
  {
    for (k = 0; k < n; k++)
    {
      matriz[i][k] *= tr;
      matriz[i][k] += transposta[i][k];
      printf("%d ", matriz[i][k]);
    }
    printf("\n");
  }
}