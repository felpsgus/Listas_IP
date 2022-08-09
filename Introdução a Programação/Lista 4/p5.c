#include <stdio.h>
#include <stdlib.h>

int main()
{
  int linhas, colunas, i, k, binario;

  scanf("%d", &linhas);
  scanf("%d", &colunas);

  int matriz[linhas][colunas];

  for (i = 0; i < linhas; i++)
  {
    if (i % 2 != 0)
    {
      binario = 0;
    }
    else
    {
      binario = 1;
    }
    for (k = 0; k < colunas; k++)
    {
      if (binario == 1)
      {
        printf("%d", binario);
        binario = 0;
      }
      else
      {
        printf("%d", binario);
        binario = 1;
      }
    }
    printf("\n");
  }
}