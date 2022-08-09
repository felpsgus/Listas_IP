#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  int i, k, n, posicao, aux;
  char string[51];
  for (i = 0; i < 51; i++)
  {
    string[i] = '\0';
  }

  scanf("%d", &n);
  while (n--)
  {
    getchar();
    scanf("%[^\n]", string);
    scanf("%d", &posicao);

    for (i = 0; i < strlen(string); i++)
    {
      if (string[i] - posicao < 65)
      {
        aux = 65 - (string[i] - posicao);
        string[i] = 90 - aux + 1;
      }
      else
      {
        string[i] = string[i] - posicao;
      }
      printf("%c", string[i]);
    }
    printf("\n");
  }
}