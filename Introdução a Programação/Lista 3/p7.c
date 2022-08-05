#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int i;

char *prefixo(int n, char *frase)
{
  char np[n];

  for (i = 0; i < n; i++)
  {
    np[i] = frase[i];
  }

  return np;
}

int main()
{
  int n, np, cont = 0;
  char *frase = malloc(499 * sizeof(char));
  unsigned char *end;

  scanf("%d", &n);

  while (n--)
  {
    getchar();
    scanf("%d", &np);
    getchar();
    scanf("%[^\n]s", frase);

    end = prefixo(np, frase);
    printf("%s\n", &end);
  }
}