#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int i;

int main()
{
  int n, np, index = 0;
  char frase[500], print[500];

  scanf("%d", &n);

  while (n--)
  {
    for (i = 0; i < 500; i++)
    {
      frase[i] = '\0';
      print[i] = '\0';
    }
    getchar();
    scanf("%d", &np);
    getchar();
    scanf("%[^\n]s", frase);

    for (i = 0; i < np; i++)
    {
      print[index] = frase[i];
      index++;
    }
    printf("%s\n", print);
    index = 0;
  }
}