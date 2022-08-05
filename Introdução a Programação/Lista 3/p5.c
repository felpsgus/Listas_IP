#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
  int n1, n2, soma, i, k;
  char *valores = malloc(51);

  while (scanf("%d %d", &n1, &n2) != EOF)
  {
    soma = n1 + n2;
    sprintf(valores, "%d", soma);

    for (i = 0; i < strlen(valores); i++)
    {
      if (valores[i] != '0')
      {
        printf("%c", valores[i]);
      }
    }
    printf("\n");
  }
}