#include <stdio.h>
#include <stdlib.h>

int main()
{
  int linhas, colunas, i, k;

  while (1)
  {
    scanf("%d", &linhas);
    if (linhas <= 10 && linhas > 0)
      break;
  }
  while (1)
  {
    scanf("%d", &colunas);
    if (colunas <= 10 && colunas > 0)
      break;
  }

  int matriz[linhas][colunas];

  for (i = 0; i < linhas; i++)
  {
    for (k = 0; k < colunas; k++)
    {
      scanf("%d", &matriz[i][k]);
    }
  }

  for (i = 0; i < linhas; i++)
  {
    printf("linha %d: ", i + 1);
    for (k = 0; k < colunas; k++)
    {
      printf("%d", matriz[i][k]);
      if (k < colunas - 1)
      {
        printf(",");
      }
    }
    printf("\n");
  }
}