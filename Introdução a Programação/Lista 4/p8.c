#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i, k, linha, coluna, largura, valor;

  scanf("%d %d", &linha, &coluna);
  int matriz[linha][coluna];

  for (i = 0; i < linha; i++)
  {
    for (k = 0; k < coluna; k++)
    {
      matriz[i][k] = 0;
    }
  }
  scanf("%d", &largura);
  scanf("%d", &valor);

  for (i = 0; i < linha; i++)
  {
    for (k = 0; k < coluna; k++)
    {
      if ((i < largura || k < largura) || (i >= linha - largura || k >= coluna - largura))
      {
        matriz[i][k] = valor;
      }
    }
  }

  printf("P2\n%d %d\n255\n", linha, coluna);

  for (i = 0; i < linha; i++)
  {
    for (k = 0; k < coluna; k++)
    {
      printf("%d ", matriz[i][k]);
    }
    printf("\n");
  }
}