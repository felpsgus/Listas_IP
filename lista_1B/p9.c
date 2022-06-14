#include <stdio.h>
#include <math.h>

/*char *plural(int m, int c, int d, int u)
{

  char *Ms = "unidade";
  char *Cs = "centena";
  char *Ds = "dezena";
  char *Us = "unidade";

  if (m > 1)
  {
    Ms = "unidades";
  }

  if (c > 1)
  {
    Cs = "centenas";
  }

  if (d > 1)
  {
    Ds = "dezenas";
  }

  if (u > 1)
  {
    Us = "unidades";
  }

  return Ms, Cs, Ds, Us;
}*/

/*char *ordem(int m, int c, int d, int u)
{
  char *o;

  if (m > 0)
  {
    o = "quarta ordem";
  }
  else if (m == 0 && c > 0)
  {
    o = "terceira ordem";
  }
  else if (m == 0 && c == 0 && d > 0)
  {
    o = "segunda ordem";
  }
  else if (m == 0 && c == 0 && d == 0 && u > 0)
  {
    o = "primeira ordem";
  }

  return o;
}*/

int main()
{
  int n, m, c, d, u, r1000, r100, r10;
  scanf("%d", &n);

  r1000 = n % 1000;
  r100 = n % 100;
  r10 = n % 10;

  m = (n - r1000) / 1000;
  c = (r1000 - r100) / 100;
  d = (r100 - r10) / 10;
  u = r10;

  if (n == 0 || m >= 10)
  {
    printf("Numero invalido!\n");
  }

  char *Ms = "unidade";
  char *Cs = "centena";
  char *Ds = "dezena";
  char *Us = "unidade";

  if (m > 1)
  {
    Ms = "unidades";
  }

  if (c > 1)
  {
    Cs = "centenas";
  }

  if (d > 1)
  {
    Ds = "dezenas";
  }

  if (u > 1)
  {
    Us = "unidades";
  }

  char *o;

  if (m > 0)
  {
    o = "quarta ordem";
    printf("(%s) %d = ", o, n);
    printf("%d %s de milhar + %d %s + %d %s + %d %s = %d + %d + %d + %d\n", m, Ms, c, Cs, d, Ds, u, Us, m * 1000, c * 100, d * 10, u);
  }
  else if (m == 0 && c > 0)
  {
    o = "terceira ordem";
    printf("(%s) %d = ", o, n);
    printf("%d %s + %d %s + %d %s = %d + %d + %d\n", c, Cs, d, Ds, u, Us, c * 100, d * 10, u);
  }
  else if (m == 0 && c == 0 && d > 0)
  {
    o = "segunda ordem";
    printf("(%s) %d = ", o, n);
    printf("%d %s + %d %s = %d + %d\n", d, Ds, u, Us, d * 10, u);
  }
  else if (m == 0 && c == 0 && d == 0 && u > 0)
  {
    o = "primeira ordem";
    printf("(%s) %d = ", o, n);
    printf("%d %s = %d\n", u, Us, u);
  }
}