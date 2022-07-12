#include <stdio.h>
#include <math.h>

int main()
{
  double ValorIngresso, ValorInicial, ValorFinal, lucro, diferenca, ingressos = 120, maiorLucro, melhorValor, quantidadeIdeal, aux;

  int i;

  scanf("%lf %lf %lf", &ValorIngresso, &ValorInicial, &ValorFinal);

  if (ValorInicial > ValorFinal || ValorInicial == ValorFinal)
  {
    printf("INTERVALO INVALIDO.\n");
  }
  else
  {
    while (ValorInicial <= ValorFinal)
    {
      while (ValorIngresso - ValorInicial >= 0)
      {
        ingressos = (ValorIngresso - ValorInicial) * 50 + 120;

        lucro = ingressos * ValorInicial - 200 - 0.05 * ingressos;

        printf("V: %.2lf, N: %.0lf, L: %.2lf\n", ValorInicial, ingressos, lucro);

        if (lucro > maiorLucro)
        {
          maiorLucro = lucro;
          melhorValor = ValorInicial;
          quantidadeIdeal = ingressos;
        }

        ValorInicial++;
      }

      while (ValorIngresso - ValorInicial < 0 && ValorInicial <= ValorFinal)
      {
        ingressos = (ValorIngresso - ValorInicial) * 60 + 120;

        lucro = ingressos * ValorInicial - 200 - 0.05 * ingressos;

        printf("V: %.2lf, N: %.0lf, L: %.2lf\n", ValorInicial, ingressos, lucro);

        if (lucro > maiorLucro)
        {
          maiorLucro = lucro;
          melhorValor = ValorInicial;
          quantidadeIdeal = ingressos;
        }

        ValorInicial++;
      }
    }

    printf("Melhor valor final: %.2lf\n", melhorValor);
    printf("Lucro: %.2lf\n", maiorLucro);
    printf("Numero de ingressos: %.0lf\n", quantidadeIdeal);
  }
}