#include <stdio.h>

int main()
{
  int i, k, j, t, l, img, cont = 0, linha = 0, coluna = 0;

  scanf("%d", &l);
  int logo[l][l];
  for (i = 0; i < l; i++)
  {
    for (k = 0; k < l; k++)
    {
      scanf("%d", &logo[i][k]);
    }
  }

  scanf("%d", &img);
  int imagem[img][img];
  for (i = 0; i < img; i++)
  {
    for (k = 0; k < img; k++)
    {
      scanf("%d", &imagem[i][k]);
    }
  }

  for (i = 0; i < img - 1; i++)
  {
    for (k = 0; k < img - 1; k++)
    {
      if (logo[0][0] == imagem[i][k])
      {
        for (j = i; j < i + l; j++)
        {
          for (t = k; t < k + l; t++)
          {
            if (logo[linha][coluna] == imagem[j][t])
            {
              cont++;
            }
            coluna++;
          }
          linha++;
          coluna = 0;
        }
        if (cont == l * l)
        {
          printf("sim\n");
          return 0;
        }
        cont = 0;
        linha = 0;
        coluna = 0;
      }
    }
  }

  printf("nao\n");
}