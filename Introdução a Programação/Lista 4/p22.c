#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i, k, j, l = 0, aux1 = 0, aux2 = 0;
  int matriz[9][9];

  for (i = 0; i < 9; i++)
  {
    for (k = 0; k < 9; k++)
    {
      scanf("%d", &matriz[i][k]);
    }
  }

  for (i = 0; i < 9; i++)
  {
    if (i > 2 && i < 6)
    {
      aux2 = 3;
    }
    else if (i > 5 && i < 9)
    {
      aux2 = 6;
    }
    else
    {
      aux2 = 0;
    }
    for (k = 0; k < 9; k++)
    {
      if (k > 2 && k < 6)
      {
        aux1 = 3;
      }
      else if (k > 5 && k < 9)
      {
        aux1 = 6;
      }
      else
      {
        aux1 = 0;
      }

      for (j = aux2; j < 3; j++)
      {
        for (l = aux1; l < 3; l++)
        {
          if (matriz[i][k] == matriz[j][l] && i != j && k != l)
          {
            printf("invalido\n");
            return 0;
          }
        }
      }
      for (j = 0; j < 9; j++)
      {
        if (matriz[i][k] == matriz[i][j] && j != k)
        {
          printf("invalido\n");
          return 0;
        }
      }
      for (j = 0; j < 9; j++)
      {
        if (matriz[i][k] == matriz[j][k] && j != i)
        {
          printf("invalido\n");
          return 0;
        }
      }
    }
  }
  printf("valido\n");
}