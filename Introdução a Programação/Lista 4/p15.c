#include <stdio.h>

int i, k, j, linha, coluna;

int main()
{
  scanf("%d %d", &linha, &coluna);
  if (linha < 1 || coluna < 1)
  {
    printf("Dimensao invalida\n");
    return 0;
  }
  int matriz[linha][coluna];

  for (i = 0; i < linha; i++)
  {
    for (k = 0; k < coluna; k++)
    {
      scanf("%d", &matriz[i][k]);
    }
  }

  k = 0;
  j = 0;
  while (k < linha && j < coluna)
  {
    for (i = j; i < coluna; i++)
    {
      printf("%d ", matriz[k][i]);
    }
    k++;
    for (i = k; i < linha; i++)
    {
      printf("%d ", matriz[i][coluna - 1]);
    }
    coluna--;
    if (k < linha)
    {
      for (i = coluna - 1; i >= j; i--)
      {
        printf("%d ", matriz[linha - 1][i]);
      }
      linha--;
    }
    if (j < coluna)
    {
      for (i = linha - 1; i >= k; i--)
      {
        printf("%d ", matriz[i][j]);
      }
      j++;
    }
  }
}