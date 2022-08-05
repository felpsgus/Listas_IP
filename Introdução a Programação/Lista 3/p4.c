#include <stdio.h>
#include <string.h>

int i, k;

int main()
{
  int n;
  scanf("%d", &n);

  char string[6];

  while (n--)
  {
    scanf("%s", string);

    if (strlen(string) == 3)
    {
      if ((string[0] == 'o' && (string[1] == 'n' || string[2] == 'e')) || ((string[0] == 'o' || string[1] == 'n') && string[2] == 'e'))
      {
        printf("1\n");
      }
      if ((string[0] == 't' && (string[1] == 'w' || string[2] == 'o')) || ((string[0] == 't' || string[1] == 'w') && string[2] == 'o'))
      {
        printf("2\n");
      }
    }
    else
    {
      printf("3\n");
    }
  }
}