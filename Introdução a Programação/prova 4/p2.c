#include <stdio.h>

int main()
{
  int i, k, j, l, n, aux = 0;
  char letra;
  scanf("%c", &letra);
  scanf("%d", &n);

  double matriz[n][n], soma = 0;
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n; j++)
    {
      scanf("%lf", &matriz[i][j]);
    }
  }

  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n; j++)
    {
      printf("%.2lf ", matriz[i][j]);
    }
    printf("\n");
  }

  switch (letra)
  {
    {
    case 'S':
      for (i = 0; i < n; i++)
      {
        for (j = 0; j < n; j++)
        {
          for (k = 0; k < n; k++)
          {
            for (l = 0; l < n; l++)
            {
              if ((k > i && l > i) && (k < j && l < j))
              {
                soma += matriz[k][l];
              }
            }
          }
        }
      }
      printf("%.2lf\n", soma);
      return 0;
      break;

    case 'M':
      for (i = 0; i < n; i++)
      {
        for (j = 0; j < n; j++)
        {
          for (k = 0; k < n; k++)
          {
            for (l = 0; l < n; l++)
            {
              if ((k > i && l > i) && (k < j && l < j))
              {
                soma += matriz[k][l];
                aux++;
              }
            }
          }
        }
      }
      soma /= aux;
      printf("%.2lf\n", soma);
      return 0;
    }
  }
}