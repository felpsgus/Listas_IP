#include <stdio.h>

int main()
{
  double n, s, i;
  scanf("%lf", &n);
  s = 0;

  if (n > 1)
  {
    for (i = 1; i <= n; i++)
    {
      s = s + 1 / i;
    }

    printf("%.6lf\n", s);
  }
  else
  {
    printf("Numero invalido!");
  }
}