#include <stdio.h>

int main()
{
    int i, n, soma = 0;

    scanf("%d", &n);

    int arr[n];

    if (n < 5000)
    {
        for (i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);

            soma += arr[i];
        }

        printf("%d\n", soma);
    }
    
}