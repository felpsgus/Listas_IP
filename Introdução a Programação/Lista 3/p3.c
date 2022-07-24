#include <stdio.h>

int calcularLetras(int x, char a[x])
{
  int i;
  int cont = 0;
  for (i = 'a'; i <= 'z'; i++)
  {
    cont++;
  }

  for (i = 'A'; i <= 'Z'; i++)
  {
    cont++;
  }

  return cont;
}

int calcularVogal(int x, char a[x])
{
  int i;
  int cont = 0;
  for (i = 0; i < 10000; i++)
  {
    if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u' || a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U')
    {
      cont++;
    }
  }
  return cont;
}

int calcularConsoante(int x, char a[x])
{
  int i;
  int cont = 0;
  for (i = 0; i < 10000; i++)
  {
    if (a[i] == 'b' || a[i] == 'c' || a[i] == 'd' || a[i] == 'f' || a[i] == 'g' || a[i] == 'h' || a[i] == 'j' || a[i] == 'k' || a[i] == 'l' || a[i] == 'm' || a[i] == 'n' || a[i] == 'p' || a[i] == 'q' || a[i] == 'r' || a[i] == 's' || a[i] == 't' || a[i] == 'v' || a[i] == 'w' || a[i] == 'x' || a[i] == 'y' || a[i] == 'z' || a[i] == 'B' || a[i] == 'C' || a[i] == 'D' || a[i] == 'F' || a[i] == 'G' || a[i] == 'H' || a[i] == 'J' || a[i] == 'K' || a[i] == 'L' || a[i] == 'M' || a[i] == 'N' || a[i] == 'P' || a[i] == 'Q' || a[i] == 'R' || a[i] == 'S' || a[i] == 'T' || a[i] == 'V' || a[i] == 'W' || a[i] == 'X' || a[i] == 'Y' || a[i] == 'Z')
    {
      cont++;
    }
  }
  return cont;
}

int main()
{
  int n, i, x = 0;

  char a[10000];

  scanf("%d", &n);

  for (i = 0; i < n; i++)
  {
    while (scanf("%s", a[x]) != '\n')
    {
      // scanf("%s", a[x]);
      x++;
    }

    printf("%d\n", x);

    x = 0;

    printf("%d %d %d\n", calcularLetras(x, a), calcularVogal(x, a), calcularConsoante(x, a));
  }
}