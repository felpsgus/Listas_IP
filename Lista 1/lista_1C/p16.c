#include <stdio.h>

int main()
{
  double ValorIngresso, ValorInicial, ValorFinal, lucro, diferença, ingressos;
  ingressos = 120;
  int i;
  scanf("%lf %lf %lf", &ValorIngresso, &ValorInicial, &ValorFinal);

  if (ValorFinal == ValorFinal)
  {
    printf("INTERVALO INVALIDO.\n");
  }

  lucro = (ValorIngresso * 120) + 200 + (0.05 * ValorIngresso);

  if (ValorFinal < ValorInicial)
  {
    diferença = ValorInicial - ValorFinal;
    for ( i = 0; i < diferença; i++)
    {
      
    }
    
    ingressos = ingressos + diferença * 50; 
    printf("V: %.2lf, N: %.0lf, L: %.2lf", );
  }
  else
  {
    diferença = ValorFinal - ValorInicial;
    ingressos = ingressos - diferença * 120; 
    printf("%.2lf\n", lucro - (diferença * 0.05));
  }
}