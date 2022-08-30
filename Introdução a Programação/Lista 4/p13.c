#include <stdio.h>

int main()
{
  int i, k, j, tamanho, cor, x, y, raio, largura, tipo;

  scanf("%d %d", &tamanho, &cor);
  int matriz[tamanho][tamanho];

  for (i = 0; i < tamanho; i++)
  {
    for (j = 0; j < tamanho; j++)
    {
      matriz[i][j] = cor;
    }
  }

  scanf("%d", &x);
  for (j = 0; x > 0; i++)
  {
    scanf("%d %d %d %d", &y, &cor, &raio, &tipo);
    largura = raio * 2 + 1;
    if (largura <= tamanho)
    {
      if (tipo == 1)
      {
        for (i = x - raio; i < largura; i++)
        {
          for (k = y - raio; k < largura; k++)
          {
            if ((i < raio || k < raio) || (i >= largura - raio || k >= largura - raio))
            {
              matriz[i][k] = cor;
            }
          }
        }
      }
      if (tipo == 2)
      {
        for (i = x - raio; i < largura + x - raio; i++)
        {
          for (k = y - raio; k < largura + y - raio; k++)
          {
            matriz[i][k] = cor;
          }
        }
      }
    }
    scanf("%d", &x);
  }

  printf("P2\n%d %d\n255\n", tamanho, tamanho);

  for (i = 0; i < tamanho; i++)
  {
    for (k = 0; k < tamanho; k++)
    {
      printf("%d ", matriz[i][k]);
    }
    printf("\n");
  }
}