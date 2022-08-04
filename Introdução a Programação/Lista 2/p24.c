#include <stdio.h>

int i, k;

void countigsort(int *arr, int n, int maior)
{
  int count[maior], ordem[n];

  for (i = 0; i <= maior; i++)
  {
    count[i] = 0;
  }

  for (i = 0; i < n; i++)
  {
    count[arr[i]]++;
  }

  for (i = 1; i < maior; i++)
  {
    count[i] += count[i - 1];
  }

  for (i = n - 1; i >= 0; i--)
  {
    ordem[count[arr[i]] - 1] = arr[i];
    count[arr[i]]--;
  }

  for (i = 0; i < n; i++)
  {
    arr[i] = ordem[i];
  }

  for (i = 0; i < n; i++)
  {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

int main()
{
  while (1)
  {
    int n, maior = 0;
    scanf("%d", &n);
    int arr[n];

    if (n == 0)
    {
      return 0;
    }

    for (i = 0; i < n; i++)
    {
      scanf("%d", arr + i);
      if (arr[i] > maior)
      {
        maior = arr[i];
      }
    }

    maior++;

    countigsort(arr, n, maior);
  }
}