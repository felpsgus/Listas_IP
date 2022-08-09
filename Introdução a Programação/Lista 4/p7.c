#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i, k, j, l, soma = 0, maiorsoma = 0;

  int matriz[6][6];

  for (i = 0; i < 6; i++)
  {
    for (k = 0; k < 6; k++)
    {
      scanf("%d", &matriz[i][k]);
    }
  }

  for (i = 0; i < 3; i++)
  {
    for (k = 0; k < 3; k++)
    {
      for (j = i; j < 3 + i; j++)
      {
        for (l = k; l < 3 + k; l++)
        {
          soma += matriz[j][l];
        }
      }
      if (soma > maiorsoma)
      {
        maiorsoma = soma;
      }
      soma = 0;
    }
  }

  printf("%d\n", maiorsoma);
}