#include <stdio.h>
#include <string.h>
<<<<<<< HEAD
#include <math.h>
=======
>>>>>>> 5f94871c8ec6b874acd320e5cacc12449c2b8744

int i, k;

int main()
{
<<<<<<< HEAD
  int n, trocas = 0, index = 0, aux;
  char s[10000], s1[10000], s2[10000];

  scanf("%d", &n);

  while (n--)
  {
    getchar();
    scanf("%[^\n]s", s);

    for (i = 0; i < strlen(s); i++)
    {
      if (i < (strlen(s) / 2))
      {
        s1[i] = s[i];
      }
      if (i > (strlen(s) / 2))
      {
        s2[index++] = s[i];
      }
    }

    for (i = 0; i < strlen(s) / 2; i++)
    {
      if (s1[i] != s2[i])
      {
        if (s1[i] < s2[i])
        {
          trocas += fabs(s1[i] - s2[i]);
        }
        if (s1[i] > s2[i])
        {
          aux = 122 - s1[i];
          trocas += aux + s2[i] - 96;
        }
      }
    }
    printf("%d\n", trocas);
    trocas = 0;
    index = 0;
  }
=======
    int n, trocas = 0;
    char s[10000] s1[10000], s2[10000];

    scanf("%d", &n);

    while(n--)
    {
        scanf("%[^\n]s", s);
        getchar();

        for (i = 0; i < strlen(s); i++)
        {
            if (i <= s / 2)
            {
                s1[i] = s[i];
            }
            else
            {
                s2[i] = s[i];
            }
            
        }
        trocas = s1[0] - s2[0];
        printf("%d\n", trocas);
        trocas = 0;
    }
    /*
    while (scanf("%[^\n]s", string) != EOF)
    {
        getchar();
        letra = string[0];
        for (i = 0; string[i] != '\0'; i++)
        {
            if (string[i] >= 65 && string[i] <= 90)
            {
                string[i] = string[i] + 32;
            }
        }
        for (i = 0; string[i] != '\0'; i++)
        {
            if (string[i] == 32)
            {
                if ((string[i + 1] == letra) && aux == 0)
                {
                    aliteracao++;
                    aux++;
                }
                else
                {
                    letra = string[i + 1];
                    aux = 0;
                }
            }
        }
        printf("%d\n", aliteracao);
        aliteracao = 0;
    }
    */
>>>>>>> 5f94871c8ec6b874acd320e5cacc12449c2b8744
}