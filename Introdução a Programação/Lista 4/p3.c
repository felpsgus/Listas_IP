#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
  int i, k;
  int n;

  scanf("%d", &n);

  int m[n][n];

  for (i = 0; i < n; i++)
  {
    for (k = 0; k < n; k++)
    {
      scanf("%d", &m[i][k]);
    }
  }

  k = n - 1;
  for (i = 0; i < n; i++)
  {
    printf("%d\n", m[i][k]);
    k--;
  }
}