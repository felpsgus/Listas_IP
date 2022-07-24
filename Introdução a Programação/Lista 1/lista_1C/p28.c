#include <stdio.h>
#include <math.h>

unsigned long long fatorial(int n)
{
  unsigned long long f = 1;

  while (n > 0)
  {
    f *= n;
    n--;
  }

  return f;
}

int main()
{
  int n, i, N;
  double e, x;

  scanf("%lf %d", &x, &n);

  for (i = 0; i <= n; i++)
  {
    e += pow(x, i) / fatorial(i);
  }

  printf("e^%.2lf = %.6lf\n", x, e);
}