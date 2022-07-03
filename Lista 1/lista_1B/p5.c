#include <stdio.h>

int main()
{
  double n;
  char c;
  scanf("%lf", &n);
  if (9 <= n && n <= 10)
  {
    c = 'A';
  }
  else if (7.5 <= n && n < 9)
  {
    c = 'B';
  }
  else if (6 <= n && n < 7.5)
  {
    c = 'C';
  }
  else if (0 <= n && n < 6)
  {
    c = 'D';
  }

  printf("NOTA = %.1lf CONCEITO = %c\n", n, c);
}