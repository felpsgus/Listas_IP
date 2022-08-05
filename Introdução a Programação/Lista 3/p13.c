#include <stdio.h>
#include <string.h>

int i, k;

int main()
{
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
}