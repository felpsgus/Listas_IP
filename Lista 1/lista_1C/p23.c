#include <stdio.h>
#include <math.h>

int sinal(int i, int numero)
{
  if (i >= (numero / 2))
  {
    printf(" ");
  }
  else
  {
    printf(" + ");
  }

  return 0;
}

int divisores(int numero)
{
  int i, soma = 1;

  for (i = 1; i < numero; i++)
  {
    if (numero % i == 0 && i != numero && i != 1)
    {
      soma = soma + i;
      printf(" + %d", i);
      // sinal(i, numero);
    }
  }
  return soma;
}

int main()
{
  int numero, soma;
  scanf("%d", &numero);

  printf("%d = 1", numero);

  soma = divisores(numero);

  if (soma == numero)
  {
    printf(" = %d (NUMERO PERFEITO)\n", soma);
  }
  else
  {
    printf(" = %d (NUMERO NAO E PERFEITO)\n", soma);
  }
}