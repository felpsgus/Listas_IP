#include <stdio.h>

int somar(int A[9])
{
  int i, soma = 0;

  for (i = 0; i < 9; i++)
  {
    soma += A[i];
  }

  return soma;
}

int ordenar(int A[9])
{
  int i, j, aux;

  for (i = 0; i < 9; i++)
  {
    for (j = i + 1; j < 9; j++)
    {
      if (A[i] > A[j])
      {
        aux = A[i];
        A[i] = A[j];
        A[j] = aux;
      }
    }
  }

  return A[9];
}

int main()
{
  int i, j, k, n, a[9], soma, resto, x, y, aux;

  scanf("%d", &n);

  for (i = 0; i < n; i++)
  {
    for (j = 0; j < 9; j++)
    {
      scanf("%d", &a[j]);
    }

    ordenar(a);
    soma = somar(a);
    resto = soma - 100;

    for (j = 0; j < 9; j++)
    {
      for (k = 0; k < 9; k++)
      {
        if (a[j] + a[k] == resto && j != k)
        {
          x = j;
          y = k;
        }
      }
    }

    for (j = 0; j < 9; j++)
    {
      if (j != x && j != y)
      {
        printf("%d\n", a[j]);
      }
    }
  }
}