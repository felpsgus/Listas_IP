#include <stdio.h>

int main()
{
  int i, k, j, l, apostas, sena = 0, quina = 0, quadra = 0, aux = 0;
  scanf("%d", &apostas);

  int jogos[apostas][6];
  int campeao[6];

  for (i = 0; i < apostas; i++)
  {
    for (k = 0; k < 6; k++)
    {
      scanf("%d", &jogos[i][k]);
    }
  }

  for (i = 0; i < 6; i++)
  {
    scanf("%d", &campeao[i]);
  }

  for (i = 0; i < apostas; i++)
  {
    for (k = 0; k < 6; k++)
    {
      for (j = 0; j < 6; j++)
      {
        if (jogos[i][k] == campeao[j])
        {
          aux++;
        }
      }
    }
    if (aux == 6)
    {
      sena++;
    }
    if (aux == 5)
    {
      quina++;
    }
    if (aux == 4)
    {
      quadra++;
    }
    aux = 0;
  }

  if (sena > 0)
  {
    printf("Houve %d acertador(es) da sena\n", sena);
  }
  else
  {
    printf("Nao houve acertador para sena\n");
  }
  if (quina > 0)
  {
    printf("Houve %d acertador(es) da quina\n", quina);
  }
  else
  {
    printf("Nao houve acertador para quina\n");
  }
  if (quadra > 0)
  {
    printf("Houve %d acertador(es) da quadra\n", quadra);
  }
  else
  {
    printf("Nao houve acertador para quadra\n");
  }
}