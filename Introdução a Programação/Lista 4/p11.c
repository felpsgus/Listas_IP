#include <stdio.h>

int main()
{
  int i, k, linha, coluna, achei = 0;

  scanf("%d %d", &linha, &coluna);
  int matriz[linha][coluna];

  for (i = 0; i < linha; i++)
  {
    for (k = 0; k < coluna; k++)
    {
      scanf("%d", &matriz[i][k]);
    }
  }

  for (i = 0; i < linha; i++)
  {
    for (k = 0; k < coluna; k++)
    {
      if (matriz[i][k] == 1111)
      {
        if (i == 0 && k == 0)
        {
          if (matriz[linha - 1][k] == 4 && matriz[i + 1][k] == 8 && matriz[i][coluna - 1] == 0 && matriz[i][k + 1] == 0)
          {
            achei = 1;
          }
        }
        else if (i == 0 && k == coluna - 1)
        {
          if (matriz[linha - 1][k] == 4 && matriz[i + 1][k] == 8 && matriz[i][k - 1] == 0 && matriz[i][0] == 0)
          {
            achei = 1;
          }
        }
        else if (i == linha - 1 && k == coluna - 1)
        {
          if (matriz[i - 1][k] == 4 && matriz[0][k] == 8 && matriz[i][k - 1] == 0 && matriz[i][0] == 0)
          {
            achei = 1;
          }
        }
        else if (i == linha - 1 && k == 0)
        {
          if (matriz[i - 1][k] == 4 && matriz[0][k] == 8 && matriz[i][coluna - 1] == 0 && matriz[i][k + 1] == 0)
          {
            achei = 1;
          }
        }
        else if (i == 0)
        {
          if (matriz[linha - 1][k] == 4 && matriz[i + 1][k] == 8 && matriz[i][k - 1] == 0 && matriz[i][k + 1] == 0)
          {
            achei = 1;
          }
        }
        else if (i == linha - 1)
        {
          if (matriz[i - 1][k] == 4 && matriz[0][k] == 8 && matriz[i][k - 1] == 0 && matriz[i][k + 1] == 0)
          {
            achei = 1;
          }
        }
        else if (k == 0)
        {
          if (matriz[i - 1][k] == 4 && matriz[i + 1][k] == 8 && matriz[i][coluna - 1] == 0 && matriz[i][k + 1] == 0)
          {
            achei = 1;
          }
        }
        else if (k == coluna - 1)
        {
          if (matriz[i - 1][k] == 4 && matriz[i + 1][k] == 8 && matriz[i][k - 1] == 0 && matriz[i][0] == 0)
          {
            achei = 1;
          }
        }
        else
        {
          if (matriz[i - 1][k] == 4 && matriz[i + 1][k] == 8 && matriz[i][k - 1] == 0 && matriz[i][k + 1] == 0)
          {
            achei = 1;
          }
        }
      }
      if (achei == 1)
      {
        printf("%d %d\n", i, k);
        return 0;
      }
    }
  }
  if (achei == 0)
  {
    printf("WALLY NAO ESTA NA MATRIZ\n");
  }
  return 0;
}