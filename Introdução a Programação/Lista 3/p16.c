#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void str_clean(char *str, char *clr)
{
  int i, k;
  for (i = 0; i < strlen(str); i++)
  {
    for (k = 0; k < strlen(clr); k++)
    {
      if (str[i] == clr[k])
      {
        str[i] = 127;
      }
    }
  }
}

#define N 256 + 1

int main()
{
  char str[N]; // string original
  char clr[N]; // lista de caracteres indesejados
  scanf("%[^\n]", str);
  scanf("\n%[^\n]", clr);
  str_clean(str, clr);
  printf("%s\n", str);
  return 0;
}
