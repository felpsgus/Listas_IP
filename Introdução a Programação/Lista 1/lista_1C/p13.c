#include <stdio.h>

int main()
{
  int n;
  scanf("%d", &n);

  if (n < 0)
  {
    printf("Numero invalido!\n");
  }
  else if (n == 2 || n == 3 || n == 5 || n == 7 || n == 11 || n == 13)
  {
    printf("PRIMO\n");
  }
  else if (n == 0 || n == 1 || (n % 2) == 0 || (n % 3) == 0 || (n % 5) == 0 || (n % 7) == 0 || (n % 11) == 0 || (n % 13) == 0)
  {
    printf("NAO PRIMO\n");
  }
  else
  {
    printf("PRIMO\n");
  }

  return 0;
}