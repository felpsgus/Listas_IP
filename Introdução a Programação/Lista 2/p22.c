#include <stdio.h>
#include <string.h>

int main()
{
  int i, k, x, n, d, numero, indice = 0, size, aux = 0;
  char maiorvalor = '0';
  scanf("%d %d\n", &n, &d);

  while (n != 0)
  {
    char string[n];
    x = d - 1;

    scanf("%d\n", &numero);
    sprintf(string, "%d", numero);

    for (k = 0; k < d; k++)
    {
      if (x > 0)
      {
        for (i = indice; i < n - x; i++)
        {
          if (maiorvalor < string[i])
          {
            maiorvalor = string[i];
            indice = i + 1;
          }
        }
        printf("%c", maiorvalor);
      }
      else
      {
        for (i = indice; i < n; i++)
        {
          if (maiorvalor < string[i])
          {
            maiorvalor = string[i];
          }
        }
        printf("%c\n", maiorvalor);
      }
      maiorvalor = '0';
      x--;
    }
    indice = 0;
    scanf("%d %d\n", &n, &d);
  }

  return 0;
}