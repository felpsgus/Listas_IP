#include <stdio.h>
#include <math.h>

int quadrado(int n)
{
  int valor = 1, i;

  for (i = 0; i < n; i++)
  {
    valor *= 10;
  }

  return valor;
}

int main()
{
  int i, n, d, x, y, numero, resto = 1, expoente, maiorvalor = 0, indice = 0, j;

  scanf("%d %d\n", &n, &d);

  while (n != 0)
  {
    scanf("%d\n", &numero);

    int a[n];

    x = n - 1;

    for (i = 0; i < n; i++)
    {
      expoente = quadrado(x);
      a[i] = numero / expoente;
      numero = numero % expoente;

      resto = resto * 10;
      x = x - 1;
    }

    y = d - 1;

    for (j = 0; j < d; j++)
    {
      if (y > 0)
      {
        for (i = indice; i < n - y; i++)
        {
          if (maiorvalor < a[i])
          {
            maiorvalor = a[i];
            indice = i + 1;
          }
        }
        printf("%d", maiorvalor);
      }
      else
      {
        for (i = indice; i < n; i++)
        {
          if (maiorvalor < a[i])
          {
            maiorvalor = a[i];
          }
        }
        printf("%d\n", maiorvalor);
      }

      maiorvalor = 0;
      y--;
    }
    indice = 0;

    scanf("%d %d\n", &n, &d);
  }
}