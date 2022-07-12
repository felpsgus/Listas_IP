#include <stdio.h>
#include <math.h>

int sinal(int soma, int potencia)
{
  if (soma == potencia)
  {
    printf("\n");
  }
  else
  {
    printf("+");
  }

  return 0;
}

int main()
{
  int numero, i, potencia, x = 1, y = 0, z = 0, n = 1, soma = 0;
  scanf("%d", &numero);

  for (i = 0; i < numero; i++)
  {
    x = n * z + 1;
    potencia = pow(n, 3);

    printf("%d*%d*%d = ", n, n, n);

    do
    {
      soma = soma + x;
      printf("%d", x);
      x += 2;
      sinal(soma, potencia);
    } while (soma != potencia);

    z++;
    n++;
    soma = 0;
  }

  return 0;
}