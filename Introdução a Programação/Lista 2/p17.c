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
  int i, n;

  scanf("%d", &n);

  int unicos = n;
  int a[n];

  for (i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }

  for (i = 0; i < n; i++)
  {
    if (verificador(a[i], n, a) > 1)
    {
      unicos--;
    }
  }

  printf("%d\n", unicos);
}