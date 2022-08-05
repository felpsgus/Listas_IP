#include <stdio.h>
#include <string.h>
 
int i, k;
 
int main()
{
    int aux = 0, aliteracao = 0, index[100];
    char string[5000], letra;
 
    while (scanf("%[^\n]s", string) != EOF)
    {
        getchar();
        for (i = 0; i < strlen(string); i++)
        {
            if (string[i] >= 65 && string[i] <= 90)
            {
                string[i] = string[i] + 32;
            }
        }
        letra = string[0];
        for (i = 0; i < strlen(string); i++)
        {
            if (string[i] == 32)
            {
                i++;
                if (string[i] == letra)
                {
                    if (aux == 0)
                    {
                        aliteracao++;
                        aux++;
                    }
                }
                else
                {
                    aux = 0;
                    letra = string[i];
                }
            }
        }
        printf("%d\n", aliteracao);
        aliteracao = 0;
        aux = 0;
    }
}