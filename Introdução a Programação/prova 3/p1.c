#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  int i, k;
  char string[500];

  while (scanf("%[^\n]s", string) != EOF)
  {
    getchar();
    for (i = strlen(string) - 1; i >= 0; i--)
    {
      printf("%c", string[i]);
    }
    printf("\n");
  }
}