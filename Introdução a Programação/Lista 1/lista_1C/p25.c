#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  double n;
  int numerador, aux = 0, denominador = 1, fator;
  scanf("%lf", &n);

  while (aux == 0)
  {
    if (n == (int)n)
    {
      numerador = n;

      for (fator = 2; fator <= numerador; fator++)
      {
        if (numerador % fator == 0 && denominador % fator == 0)
        {
          numerador /= fator;
          denominador /= fator;
        }
      }
      aux = 1;
    }
    else
    {
      n *= 10;
      denominador *= 10;
    }
  }

  printf("%d/%d\n", numerador, denominador);

  return 0;
}