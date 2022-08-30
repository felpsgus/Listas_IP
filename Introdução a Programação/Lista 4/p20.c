#include <stdio.h>
#include <stdlib.h>

int i, k;

int main()
{
  int n, m, maiornumero = 0, menornumero = 1000, aux, col_me, li_me, col_ma, li_ma;
  scanf("%d %d", &m, &n);
  int matriz[m][n];

  for (i = 0; i < m; i++)
  {
    for (k = 0; k < n; k++)
    {
      scanf("%d", &matriz[i][k]);
    }
  }

  for (i = 0; i < m; i++)
  {
    for (k = 0; k < n; k++)
    {
      if (matriz[i][k] > maiornumero)
      {
        maiornumero = matriz[i][k];
      }
      if (matriz[i][k] < menornumero)
      {
        menornumero = matriz[i][k];
      }
    }
  }

  for (i = 0; i < m; i++)
  {
    for (k = 0; k < n; k++)
    {
      if (maiornumero == matriz[i][k])
      {
        li_ma = i;
        col_ma = k;
      }
    }
  }

  for (i = 0; i < m; i++)
  {
    for (k = 0; k < n; k++)
    {
      if (menornumero == matriz[i][k])
      {
        li_me = i;
        col_me = k;
      }
    }
  }

  aux = matriz[li_ma][col_ma];
  matriz[li_ma][col_ma] = matriz[li_me][col_me];
  matriz[li_me][col_me] = aux;

  for (i = 0; i < m; i++)
  {
    for (k = 0; k < n; k++)
    {
      printf("%d ", matriz[i][k]);
    }
    printf("\n");
  }
}