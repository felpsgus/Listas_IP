#include <stdio.h>

int main()
{
  int u;
  double q, v;
  char p;
  scanf("%d %lf %c", &u, &q, &p);
  if (p == 'C')
  {
    v = 500 + (q - 80) * 0.25;
  }
  else if (p == 'I')
  {
    v = 800 + (q - 100) * 0.04;
  }
  else if (p == 'R')
  {
    v = 5 + q * 0.05;
  }

  printf("CONTA = %d\n", u);
  printf("VALOR DA CONTA = %.2lf\n", v);
}