#include <stdio.h>

int main()
{
  int i, n, k, aux;

  scanf("%d", &n);

  while (n != 0)
  {
    int A[n];

    for (i = 0; i < n; i++)
    {
      scanf("%d", &A[i]);
    }

    for (i = 0; i < n; i++)
    {
      for (k = i + 1; k < n; k++)
      {
        if (A[i] > A[k])
        {
          aux = A[i];
          A[i] = A[k];
          A[k] = aux;
        }
      }
    }

    for (i = 0; i < n; i++)
    {
      printf("%d", A[i]);
      if (i != n - 1)
      {
        printf(" ");
      }
    }

    printf("\n");

    scanf("%d", &n);
  }
}