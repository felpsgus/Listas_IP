#include <stdio.h>

int main()
{
  int i, j, k, l, n;
  scanf("%d", &n);
  int matriz[n][n];

  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n; j++)
    {
      scanf("%d", &matriz[i][j]);
    }
  }
}