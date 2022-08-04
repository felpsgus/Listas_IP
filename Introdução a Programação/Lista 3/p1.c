#include <stdio.h>
#include <string.h>

int main()
{
  int n, i, size;

  scanf("%d", &n);

  char string1[50];
  char string2[50];

  while (n)
  {
    getchar();
    scanf("%[^ ]s", string1);
    getchar();
    scanf("%[^\n]s", string2);

    if (strlen(string1) >= strlen(string2))
    {
      size = strlen(string1);
    }
    else
    {
      size = strlen(string2);
    }

    for (i = 0; i < size; i++)
    {
      if (strlen(string1) > i)
      {
        printf("%c", string1[i]);
      }
      if (strlen(string2) > i)
      {
        printf("%c", string2[i]);
      }
    }
    printf("\n");
    n--;
  }
}