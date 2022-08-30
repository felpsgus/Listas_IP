#include <stdio.h>

int main()
{
  int i, k, j, l, n, l1, c1, l2, c2, aux, iguais[100], ii = 0;

  scanf("%d", &n);

  while (n--)
  {
    scanf("%d %d", &l1, &c1);
    int matriz1[l1][c1];
    for (i = 0; i < l1; i++)
    {
      for (j = 0; j < c1; j++)
      {
        scanf("%d", &matriz1[i][j]);
      }
    }
    scanf("%d %d", &l2, &c2);
    int matriz2[l2][c2];
    for (i = 0; i < l2; i++)
    {
      for (j = 0; j < c2; j++)
      {
        scanf("%d", &matriz2[i][j]);
      }
    }

    for (i = 0; i < l1; i++)
    {
      for (j = 0; j < c1; j++)
      {
        for (k = 0; k < l2; k++)
        {
          for (l = 0; l < c2; l++)
          {
            if (matriz1[i][j] == matriz2[k][l])
            {
              iguais[ii] = matriz1[i][j];
              ii++;
            }
          }
        }
      }
    }
    for (i = 0; i < ii; i++)
    {
      printf("%d ", iguais[i]);
    }
    printf("\n");
    ii = 0;
  }
}