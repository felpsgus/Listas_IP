#include <stdio.h>

int main()
{
  int i, n = 1, maiorNumero = 0, indiceMaiorNumero;
  int arr[n];

  scanf("%d", &n);

  while (n != 0)
  {

    printf("%d\n", n);

    for (i = 0; i < n; i++)
    {
      scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
      printf("%d ", arr[i]);
    }

    printf("\n");

    for (i = 0; i < n; i++)
    {
      if (arr[i] > maiorNumero)
      {
        maiorNumero = arr[i];
        indiceMaiorNumero = i;
      }
    }

    printf("%d %d\n", indiceMaiorNumero, maiorNumero);

    maiorNumero = 0;
    indiceMaiorNumero = 0;

    scanf("%d", &n);
  }
}