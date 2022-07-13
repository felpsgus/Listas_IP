#include <stdio.h>

int main()
{
  int i, n, a, j;
  scanf("%d", &n);
  int A[n];

  for (i = 0; i < n; i++)
  {
    scanf("%d", &A[i]);
  }

  for (i = 0; i < n; i++)
  {
    for (j = i + 1; j < n; j++)
    {
      if (A[i] > A[j])
      {
        a = A[i];
        A[i] = A[j];
        A[j] = a;
      }
    }

    printf("%d\n", A[i]);
  }
}