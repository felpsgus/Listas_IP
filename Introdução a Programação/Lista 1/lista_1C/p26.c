#include <stdio.h>

int divisores(int numero)
{
  int i, soma = 0;
  for (i = 1; i < numero; i++)
  {
    if (numero % i == 0)
    {
      soma = soma + i;
    }
  }
  return soma;
}

int main()
{
  int numero, i, n = 1, valor, impresso;

  scanf("%d", &numero);

  if (numero <= 9)
  {
    for (i = 1; numero != 0; i++)
    {
      valor = divisores(i);

      if (divisores(valor) == i)
      {
        if (valor != i && i != impresso)
        {
          printf("(%d,%d)\n", i, valor);
          impresso = valor;
          numero--;
        }
        i++;
      }
    }
  }
}