#include <stdio.h>

int main()
{
  int n, d3, d5;
  scanf("%d", &n);
  d3 = n % 3;
  d5 = n % 5;
  if (d3 == 0 && d5 == 0)
  {
    printf("O NUMERO E DIVISIVEL\n");
  }
  else
  {
    printf("O NUMERO NAO E DIVISIVEL\n");
  }
}