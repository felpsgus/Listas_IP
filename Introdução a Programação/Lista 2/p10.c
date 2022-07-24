#include <stdio.h>

int main()
{
    int i, n, maiorNumero = 0, indice = 0, repetiu = 0, ultimoNumero;

    scanf("%d", &n);

    int arr[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    ultimoNumero = arr[n - 1];

    for (i = 0; i < n; i++)
    {
        if (ultimoNumero == arr[i])
        {
            repetiu++;
        }
    }
    
    for (i = 0; i < n; i++)
    {
        if (maiorNumero < arr[i])
        {
            maiorNumero = arr[i];
            indice = i;
        }
    }

    printf("Nota %d, %d vezes\n", ultimoNumero, repetiu);
    printf("Nota %d, indice %d\n", maiorNumero, indice);
}