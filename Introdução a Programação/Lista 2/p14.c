#include <stdio.h>

int main()
{
  int n, i, j, a;
  double mediana, valor;

  scanf("%d", &n);

  int arr[n];

  for (i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }

  for (i = 0; i < n; i++)
  {
    for (j = i + 1; j < n; j++)
    {
      if (arr[i] > arr[j])
      {
        a = arr[i];
        arr[i] = arr[j];
        arr[j] = a;
      }
    }
  }

  if (n % 2 == 0)
  {
    valor = arr[n / 2] + arr[n / 2 - 1];
    mediana = valor / 2;
  }
  else
  {
    mediana = arr[n / 2];
  }

  printf("%.2f\n", mediana);
}