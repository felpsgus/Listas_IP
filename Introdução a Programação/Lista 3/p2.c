#include <stdio.h>
#include <string.h>

int main()
{
  int n, i, size, leds = 0;
  char string[10 ^ 100];

  scanf("%d", &n);

  while (n)
  {
    getchar();
    scanf("%[^\n]s", string);
    size = strlen(string);

    for (i = 0; i < size; i++)
    {
      switch (string[i])
      {
      case '1':
        leds += 2;
        break;
      case '2':
        leds += 5;
        break;
      case '3':
        leds += 5;
        break;
      case '4':
        leds += 4;
        break;
      case '5':
        leds += 5;
        break;
      case '6':
        leds += 6;
        break;
      case '7':
        leds += 3;
        break;
      case '8':
        leds += 7;
        break;
      case '9':
        leds += 6;
        break;
      case '0':
        leds += 6;
        break;
      }
    }
    printf("%d leds\n", leds);
    leds = 0;
    n--;
  }
}