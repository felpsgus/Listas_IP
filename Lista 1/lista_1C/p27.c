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
  double coss, x;

  scanf("%lf %d", &x, &n);

  for (i = 0; i <= n; i++)
  {
    coss += (pow((-1), i) * pow(x, 2 * i)) / fatorial(2 * i);
  }

  printf("cos(%.2lf) = %.6lf\n", x, coss);
}