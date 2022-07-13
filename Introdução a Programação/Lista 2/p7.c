#include <stdio.h>

int main()
{
  int i, n, maiorNumero = 0, menor = 0, indice, k = 0, j;

  scanf("%d", &n);

  while (n != 0)
  {
    int arr[n];

    for (i = 0; i < n; i++)
    {
      scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
      if (maiorNumero < arr[i])
      {
        maiorNumero = arr[i];
      }
    }

    for (i = 0; i <= maiorNumero; i++)
    {
      for (j = 0; j < n; j++)
      {
        if (arr[k] <= i)
        {
          menor++;
        }
        k++;
      }
      printf("(%d) %d\n", i, menor);
      menor = 0;
      k = 0;
    }

    scanf("%d", &n);

    maiorNumero = 0;
  }
}