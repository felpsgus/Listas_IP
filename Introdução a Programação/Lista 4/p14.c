#include <stdio.h>

int main()
{
  int i, k, linha, coluna, menorvalor = 100, maiorvalor = 0, rmenor = 0, rmaior = 0;
  scanf("%d %d", &linha, &coluna);
  int matriz[linha][coluna];
  double total = linha * coluna;
  double fmenor, fmaior;

  for (i = 0; i < linha; i++)
  {
    for (k = 0; k < coluna; k++)
    {
      scanf("%d", &matriz[i][k]);
      if (menorvalor > matriz[i][k])
      {
        menorvalor = matriz[i][k];
      }
      if (maiorvalor < matriz[i][k])
      {
        maiorvalor = matriz[i][k];
      }
    }
  }

  for (i = 0; i < linha; i++)
  {
    for (k = 0; k < coluna; k++)
    {
      if (menorvalor == matriz[i][k])
      {
        rmenor++;
      }
      if (maiorvalor == matriz[i][k])
      {
        rmaior++;
      }
    }
  }

  fmenor = (rmenor * 100) / total;
  fmaior = (rmaior * 100) / total;

  printf("%d %.2lf%%\n", menorvalor, fmenor);
  printf("%d %.2lf%%\n", maiorvalor, fmaior);
}