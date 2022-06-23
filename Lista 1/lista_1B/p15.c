#include <stdio.h>

int main()
{
  int numero, dm, m, c, d, u;
  scanf("%d", &numero);

  dm = (numero - (numero % 10000)) / 10000;
  m = ((numero % 10000) - (numero % 1000)) / 1000;
  c = ((numero % 1000) - (numero % 100)) / 100;
  d = ((numero % 100) - (numero % 10)) / 10;
  u = numero % 10;

  if (numero > 99999)
  {
    printf("NUMERO INVALIDO\n");
  }
  else if (numero > 9999)
  {
    if (dm == u && m == d)
    {
      printf("PALINDROMO\n");
    }
    else
    {
      printf("NAO PALINDROMO\n");
    }
  }
  else if (numero > 999)
  {
    if (m == u && c == d)
    {
      printf("PALINDROMO\n");
    }
    else
    {
      printf("NAO PALINDROMO\n");
    }
  }
  else if (numero > 99)
  {
    if (c == u)
    {
      printf("PALINDROMO\n");
    }
    else
    {
      printf("NAO PALINDROMO\n");
    }
  }
  else if (numero > 9)
  {
    if (d == u)
    {
      printf("PALINDROMO\n");
    }
    else
    {
      printf("NAO PALINDROMO\n");
    }
  }
  else if (numero > 0)
  {
    if (u == 2 || u == 3 || u == 5 || u == 7)
    {
      printf("PALINDROMO\n");
    }
    else
    {
      printf("NAO PALINDROMO\n");
    }
  }
}
