#include <stdio.h>
#include <string.h>

int consoantes(char x)
{
  int i, size;
  char letras[] = {'b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'm', 'n', 'p', 'q', 'r', 's', 't', 'v', 'w', 'x', 'y', 'z', 'B', 'C', 'D', 'F', 'G', 'H', 'J', 'K', 'L', 'M', 'N', 'P', 'Q', 'R', 'S', 'T', 'V', 'W', 'X', 'Y', 'Z'};

  size = strlen(letras);
  for (i = 0; i < size; i++)
  {
    if (letras[i] == x)
    {
      return 1;
    }
  }
  return 0;
}

int main()
{
  int n, i, size;
  char string[10000];

  scanf("%d", &n);

  while (n)
  {
    int letras = 0, vogais = 0, consoante = 0;

    getchar();
    scanf("%[^\n]s", string);
    size = strlen(string);

    for (i = 0; i < size; i++)
    {
      if (string[i] >= 65 && string[i] <= 90 || string[i] >= 97 && string[i] <= 122)
      {
        letras++;
      }
      if (string[i] == 65 || string[i] == 69 || string[i] == 73 || string[i] == 79 || string[i] == 85 || string[i] == 97 || string[i] == 101 || string[i] == 105 || string[i] == 111 || string[i] == 117)
      {
        vogais++;
      }
      if (consoantes(string[i]))
      {
        consoante++;
      }
    }
    printf("Letras = %d\n", letras);
    printf("Vogais = %d\n", vogais);
    printf("Consoantes = %d\n", consoante);

    letras = 0;
    vogais = 0;
    consoante = 0;
    n--;
  }
}