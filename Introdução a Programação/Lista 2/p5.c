#include <stdio.h>

int main()
{
    int i, n = 0, maiorNumero = 0, indice = 0;

    scanf("%d", &n);

    if (1 < n && n <= 10000)
    {
        while (n != 0)
        {
            int arr[n];
            for (i = 0; i < n; i++)
            {
                scanf("%d", &arr[i]);
            }

            for (i = 0; i < n; i++)
            {
                if (maiorNumero < arr[i])
                {
                    maiorNumero = arr[i];
                    indice = i;
                }
            }

            printf("%d %d\n", indice, maiorNumero);

            maiorNumero = 0;
            indice = 0;

            scanf("%d", &n);
        }
    }
}