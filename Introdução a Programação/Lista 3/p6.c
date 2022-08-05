#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
  int i, cont = 0;
  char *palavra = malloc(200 * sizeof(char));
  char *inverso = malloc(200 * sizeof(char));

  while (scanf("%[^\n]s", palavra) != EOF)
  {
    getchar();
    for (i = 0; i < strlen(palavra); i++)
    {
      inverso[i] = palavra[strlen(palavra) - 1 - i];
    }
    inverso[i] = '\0';

    for (i = 0; i < strlen(inverso); i++)
    {
      if (inverso[i] != palavra[i])
      {
        cont++;
      }
    }

    if (cont == 0)
    {
      printf("sim\n");
    }
    else
    {
      printf("nao\n");
    }
    cont = 0;
  }
}