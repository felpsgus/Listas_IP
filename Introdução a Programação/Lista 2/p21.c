#include <stdio.h>

int main()
{
  int i, n, j = 0, k, aux, cont = 1;

  scanf("%d", &n);

  int a[n];
  int b[n];

  for (i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }

  for (i = 0; i < n; i++)
  {
    if (a[i] % 2 == 0)
    {
      b[j] = a[i];
      j++;
      cont++;
    }
  }

  for (i = 0; i < cont; i++)
  {
    for (k = i + 1; k < cont; k++)
    {
      if (b[i] > b[k])
      {
        aux = b[i];
        b[i] = b[k];
        b[k] = aux;
      }
    }
  }

  for (i = 0; i < n; i++)
  {
    if (a[i] % 2 != 0)
    {
      b[j] = a[i];
      j++;
    }
  }

  for (i = cont - 1; i < n; i++)
  {
    for (k = i + 1; k < n; k++)
    {
      if (b[i] < b[k])
      {
        aux = b[i];
        b[i] = b[k];
        b[k] = aux;
      }
    }
  }

  for (i = 0; i < n; i++)
  {
    printf("%d\n", b[i]);
  }
}