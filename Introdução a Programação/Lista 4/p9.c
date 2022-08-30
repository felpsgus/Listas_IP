#include <stdio.h>
#include <stdlib.h>

int main()
{
    int linhas, colunas, i, k, ver = 0, valor = 1;

    scanf("%d", &linhas);
    scanf("%d", &colunas);

    int matriz[linhas][colunas];

    for (i = 0; i < linhas; i++)
    {
        for (k = 0; k < colunas; k++)
        {
            if (ver == 0)
            {
                printf("0");
                ver = 1;
            }
            else
            {
                printf("%d", valor);
                valor++;
                ver = 0;
            }

            if (k < colunas - 1)
            {
                printf(" ");
            }
        }
        if (ver == 0)
        {
            ver = 1;
        }
        else
        {
            ver = 0;
        }
        printf("\n");
    }
}