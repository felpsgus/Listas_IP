#include <stdio.h>

int verificador(int x, int n, int a[n])
{
  int i, j, aux = 0;
  for (j = 0; j < 1; j++)
  {
    for (i = 0; i < n; i++)
    {
      if (x == a[i])
      {
        aux++;
      }
    }
  }

  return aux;
}

int main()
{
  int i, j = 0, k, n, aux;

  scanf("%d", &n);

  int unicos[n];
  int a[n];

  for (i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }

  for (i = 0; i < n; i++)
  {
    if (verificador(a[i], n, a) >= 1 && unicos[j - 1] != a[i])
    {
      unicos[j] = a[i];
      j++;
    }
  }

  /*for (i = 0; i < j; i++)
  {
    for (k = i + 1; k < j; k++)
    {
      if (unicos[i] > unicos[j])
      {
        aux = unicos[i];
        unicos[i] = unicos[j];
        unicos[j] = aux;
      }
    }
  }*/

  for (i = 0; i < j; i++)
  {
    if (unicos[i] != 1000000)
    {
      printf("%d\n", unicos[i]);
    }
  }
}