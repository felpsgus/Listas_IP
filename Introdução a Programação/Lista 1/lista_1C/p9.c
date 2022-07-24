#include <stdio.h>

int main()
{
  int n, fatorial, i, x;
  scanf("%d", &n);
  x = n - 1;
  fatorial = n;

  if (n == 0)
  {
    fatorial = 1;
  }
  else
  {
    while (x != 0)
    {
      fatorial *= x;
      x--;
    }
  }

  printf("%d! = %d", n, fatorial);
}