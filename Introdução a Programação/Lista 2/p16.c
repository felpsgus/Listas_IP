#include <stdio.h>
#include <math.h>

int main()
{
  int i, n, k, presente = 0;

  scanf("%d", &n);
  scanf("%d", &k);

  int arr[n];

  for (i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }

  for (i = 0; i < n; i++)
  {
    if (arr[i] <= 0)
    {
      presente++;
    }
  }

  if (presente >= k)
  {
    printf("NAO\n");
    for (i = n - 1; i >= 0; i--)
    {
      if (arr[i] <= 0)
      {
        printf("%d\n", i + 1);
      }
    }
  }
  else
  {
    printf("SIM\n");
  }
}