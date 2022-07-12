#include <stdio.h>

int main()
{
    int i, k, n, maiorNumero = 0, menorNumero = 10;

    scanf("%d", &n);

    int arr1[n];
    int arr2[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }

    k = n - 1;

    for (i = 0; i < n; i++)
    {
        arr2[k] = arr1[i];
        k--;
    }

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr1[i]);
    }

    printf("\n");

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr2[i]);
    }

    printf("\n");

    for (i = 0; i < n; i++)
    {
        if (maiorNumero < arr1[i])
        {
            maiorNumero = arr1[i];
        }

        if (menorNumero > arr2[i])
        {
            menorNumero = arr2[i];
        }
    }

    printf("%d\n%d\n", maiorNumero, menorNumero);
}